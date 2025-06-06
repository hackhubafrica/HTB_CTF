CHALLENGE NAME
It's Oops PM
With the location of the underground bunker secured, the crew embarks on the next phase of their plan: assessing the feasibility of creating an underground tunnel to bypass the super mutant camp. They secure samples of water, soil, and air near the area. Scouring the wasteland for salvageable equipment, they stumble upon a dilapidated research facility where they find a cache of environmental sensors. Examining these sensors, the crew discovers they communicate with a satellite and contain a crypto-processor that encrypts their transmissions. After hand-drawing the diagrams and emulating the silicon chip's logic with VHDL, they uncover what appears to be a backdoor in the embedded logic that only triggers when a specific input is given to the system. Determined to exploit this, they turn to their tech specialist. Can you connect to the satellite and activate it

This VHDL code defines a system with four main components: ckey, encryption, backdoor, and tpm. The system appears to be performing encryption while incorporating a hidden backdoor mechanism. Below is a detailed explanation of how each part functions and how they interact.

1. Component: backdoor
This component checks if the input D matches a specific 16-bit pattern:
👉 "1111111111101001" (0xFFE9 in hex).

If D is equal to this pattern, it sets B to '1'.
Otherwise, it sets B to '0'.
Code Analysis:
vhdl
Copy
Edit
entity backdoor is
    Port (
        D : in STD_LOGIC_VECTOR(15 downto 0); -- 16-bit input
        B : out STD_LOGIC  -- 1-bit output (flag)
    );
end backdoor;
D is the data being checked.
B acts as a flag indicating whether the pattern was matched.
vhdl
Copy
Edit
architecture Behavioral of backdoor is
    constant pattern : STD_LOGIC_VECTOR(15 downto 0) := "1111111111101001"; -- Secret pattern
begin
    process(D)
    begin
        if D = pattern then
            B <= '1';  -- Flag set if pattern matches
        else
            B <= '0';  -- Otherwise, flag remains 0
        end if;
    end process;
end Behavioral;
🔹 Purpose:
This is a backdoor detection module—if a specific data pattern is received, it triggers the B signal.

2. Component: encryption
This module encrypts the input data D using a key K with a combination of XOR operations and selective bit inversions.

Code Analysis:
vhdl
Copy
Edit
entity encryption is
    Port (
        D, K : in STD_LOGIC_VECTOR(15 downto 0); -- 16-bit data and key inputs
        E : out STD_LOGIC_VECTOR(15 downto 0)   -- 16-bit encrypted output
    );
end encryption;
D is the plaintext.
K is the encryption key.
E is the encrypted output.
vhdl
Copy
Edit
architecture Behavioral of encryption is
begin
    process(D, K)
    begin
        for i in 1 to 15 loop
            E(i) <= D(i) XOR K(i); -- XOR each bit of D with K
        end loop;

        E(0) <= NOT K(0);  -- Flip specific key bits (0, 6, 13)
        E(6) <= NOT K(6);
        E(13) <= NOT K(13);
    end process;
end Behavioral;
🔹 Purpose:
This module implements a basic encryption function where:

Most bits are encrypted using XOR.
Three key bits (K(0), K(6), K(13)) are flipped instead of XOR-ing.
3. Component: ckey
This module generates a constant encryption key.

Code Analysis:
vhdl
Copy
Edit
entity ckey is
    Port (
        K : out STD_LOGIC_VECTOR(15 downto 0) -- 16-bit encryption key output
    );
end ckey;

architecture Behavioral of ckey is
    constant key : STD_LOGIC_VECTOR(15 downto 0) := "0110001111100001"; -- Fixed key
begin
    K <= key;
end Behavioral;
🔹 Purpose:

This module hardcodes a key "0110001111100001" (0x63E1 in hex) that will be used for encryption.
There is no dynamic key generation, meaning the encryption is always done with this same key.
4. Component: tpm (Trusted Platform Module?)
This module integrates the other components to either encrypt data or leak the secret key if the backdoor is triggered.

Code Analysis:
vhdl
Copy
Edit
entity tpm is
    Port (
        Data : in STD_LOGIC_VECTOR(15 downto 0); -- Input data
        Output : out STD_LOGIC_VECTOR(15 downto 0) -- Output data
    );
end tpm;
Data is the input data.
Output is the final processed data.
Internal Signals:
vhdl
Copy
Edit
signal Key : STD_LOGIC_VECTOR(15 downto 0); -- Stores the encryption key
signal Encrypted : STD_LOGIC_VECTOR(15 downto 0); -- Stores encrypted data
signal B: STD_LOGIC; -- Stores backdoor flag
Instantiation of Components:
vhdl
Copy
Edit
component ckey
    port (K : out STD_LOGIC_VECTOR(15 downto 0));
end component;

component encryption
    port (D, K : in STD_LOGIC_VECTOR(15 downto 0);
          E : out STD_LOGIC_VECTOR(15 downto 0));
end component;

component backdoor 
    port (D : in STD_LOGIC_VECTOR(15 downto 0);
          B : out STD_LOGIC);
end component;
The ckey component provides the constant encryption key.
The encryption component encrypts Data using Key.
The backdoor component checks if Data matches "1111111111101001".
Mapping Components to Signals:
vhdl
Copy
Edit
ck : ckey port map(Key); -- Assigns Key value from ckey
enc: encryption port map (Data, Key, Encrypted); -- Encrypts Data
bd: backdoor port map (Data, B); -- Detects the backdoor pattern
Process:
vhdl
Copy
Edit
process(Key, Encrypted, B)
begin
    case B is
        when '1' =>
            for i in 0 to 15 loop
                Output(i) <= Key(i); -- If backdoor is triggered, leak the encryption key
            end loop;
        when others =>
            for i in 0 to 15 loop
                Output(i) <= Encrypted(i); -- Otherwise, return encrypted data
            end loop;
    end case;
end process;
If B = '1' (i.e., backdoor condition is met), the output is the encryption key instead of encrypted data.
Otherwise, it returns the encrypted data.
🔎 Key Observations
Encryption Implementation:

XOR-based encryption is simple but can be easily broken.
Selective bit inversion adds minor obfuscation.
Backdoor Mechanism:

If the input Data matches "1111111111101001", the module exposes the secret encryption key instead of returning encrypted data.
This is a severe security vulnerability, possibly intentional.
Hardcoded Key (ckey Component):

The encryption key is not dynamically generated; it is always "0110001111100001", making it easy to decrypt the data.
🛑 Potential Security Concerns
This system contains a deliberate backdoor:

If an attacker inputs "1111111111101001", the system reveals the encryption key.
With this key, all encrypted messages can be decrypted, breaking the confidentiality.
🔹 If used in real applications, this could be a security risk, allowing unauthorized decryption of sensitive data.