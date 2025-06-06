struct s1 {
    void* f0;
    signed char[2] pad3;
    unsigned char f3;
    void* f4;
    signed char[2] pad7;
    void* f7;
    void* f8;
    signed char[31] pad40;
    unsigned char f28;
    signed char[30] pad71;
    unsigned char f47;
};

struct s0 {
    struct s1* f0;
    signed char[27] pad28;
    unsigned char f1c;
    signed char[23] pad52;
    unsigned char f34;
    signed char[1609] pad1662;
    unsigned char f67e;
};

unsigned char g288c00;

signed char g97d;

struct s2 {
    signed char[1] pad1;
    void* f1;
};

struct s3 {
    void* f0;
    signed char[4] pad5;
    uint32_t f5;
    signed char[105] pad114;
    signed char f72;
};

struct s4 {
    void* f0;
    signed char[671350783] pad671350784;
    void* f28040000;
};

struct s5 {
    signed char[2] pad2;
    void* f2;
    void* f3;
};

struct s6 {
    signed char[1] pad1;
    void* f1;
};

struct s7 {
    signed char[2] pad2;
    void* f2;
};

struct s8 {
    signed char[3] pad3;
    void* f3;
};

struct s9 {
    void* f0;
    unsigned char f1;
    signed char[5] pad7;
    unsigned char f7;
    unsigned char f8;
    unsigned char f9;
    signed char[33] pad43;
    unsigned char f2b;
    signed char[29] pad73;
    unsigned char f49;
    signed char[1] pad75;
    unsigned char f4b;
};

struct s10 {
    signed char[4] pad4;
    void* f4;
};

struct s11 {
    void* f0;
    signed char[20] pad21;
    void* f15;
    signed char[6] pad31;
    unsigned char f1f;
    signed char[55] pad87;
    void* f57;
    signed char[1] pad89;
    void* f59;
    signed char[6] pad99;
    void* f63;
    signed char[3] pad103;
    unsigned char f67;
    signed char[19] pad123;
    void* f7b;
};

struct s12 {
    void* f0;
    void* f1;
};

uint32_t g396f;

uint32_t g3d6f;

unsigned char g2516023c;

uint32_t g37720a2c;

unsigned char g30280312;

int32_t g13b7216;

void* g1317213;

unsigned char g1b7720f;

unsigned char g972452c;

void fun_402004(struct s0* ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    void** eax8;
    void* eax9;
    unsigned char* edx10;
    signed char* edx11;
    unsigned char tmp8_12;
    unsigned char tmp8_13;
    signed char bl14;
    uint1_t cf15;
    unsigned char* ebx16;
    signed char* ebx17;
    void* tmp8_18;
    uint1_t cf19;
    unsigned char* esi20;
    void* esi21;
    void* tmp8_22;
    uint1_t cf23;
    uint32_t* edx24;
    int32_t* edx25;
    int32_t edx26;
    void* tmp8_27;
    uint1_t cf28;
    unsigned char* edx29;
    signed char* edx30;
    signed char* edx31;
    signed char tmp8_32;
    signed char dl33;
    unsigned char* edx34;
    signed char* edx35;
    signed char* edx36;
    void* edx37;
    void* edx38;
    signed char bh39;
    int32_t edx40;
    int32_t edx41;
    int32_t edx42;
    int32_t edx43;
    unsigned char tmp8_44;
    signed char* ebx45;
    uint1_t cf46;
    unsigned char* ebx47;
    unsigned char* ebx48;
    void* tmp8_49;
    uint1_t cf50;
    unsigned char* edx51;
    signed char* edx52;
    struct s2* ebx53;
    void* bl54;
    void* tmp8_55;
    uint1_t cf56;
    unsigned char* edx57;
    signed char* edx58;
    uint1_t cf59;
    struct s3* esi60;
    void* tmp32_61;
    uint1_t cf62;
    void* dl63;
    void* ch64;
    void* tmp8_65;
    uint1_t cf66;
    uint1_t cf67;
    struct s4* eax68;
    void* ch69;
    unsigned char* edx70;
    uint96_t v71;
    int16_t ds72;
    struct s5* ebx73;
    void* bh74;
    unsigned char* edx75;
    void* edi76;
    void* edi77;
    struct s6* ebp78;
    int16_t ds79;
    void* tmp8_80;
    unsigned char* edx81;
    signed char* edx82;
    unsigned char* edx83;
    void* edi84;
    struct s7* ebp85;
    int16_t ds86;
    struct s1* ebx87;
    unsigned char* edx88;
    void* edi89;
    struct s8* ebp90;
    void* v91;
    int16_t ds92;
    void* tmp8_93;
    unsigned char* edx94;
    signed char* edx95;
    unsigned char* edx96;
    struct s9* edi97;
    struct s10* ebp98;
    void* tmp8_99;
    unsigned char* edx100;
    signed char* edx101;
    unsigned char* edx102;
    signed char dl103;
    void* tmp8_104;
    uint1_t cf105;
    void* ds106;
    void* ds107;
    struct s11* edx108;
    int32_t ebp109;
    void** esp110;
    void* tmp8_111;
    uint1_t cf112;
    struct s1* eax113;
    void* tmp8_114;
    int1_t cf115;
    struct s12* eax116;
    unsigned char tmp8_117;
    void* ebp118;
    uint1_t cf119;
    void* ebp120;
    void* ebp121;
    void* tmp8_122;
    uint1_t cf123;
    struct s1* eax124;
    struct s1* tmp32_125;
    uint32_t tmp32_126;
    struct s1* tmp32_127;
    void* tmp8_128;
    uint1_t cf129;
    unsigned char* eax130;
    struct s9* ebp131;
    unsigned char tmp8_132;
    uint1_t cf133;
    void* tmp8_134;
    int1_t cf135;
    void* tmp8_136;
    int1_t cf137;
    int1_t of138;
    void* tmp8_139;
    int1_t cf140;
    int1_t of141;
    unsigned char* eax142;
    void* tmp8_143;
    int1_t cf144;
    void* tmp8_145;
    int1_t cf146;
    void* tmp8_147;
    void* tmp8_148;
    uint1_t cf149;
    void* tmp8_150;
    uint1_t cf151;
    int1_t of152;
    uint1_t cf153;
    void* tmp8_154;
    uint1_t cf155;
    void* tmp8_156;
    uint1_t cf157;
    void* tmp8_158;
    uint1_t cf159;
    void* tmp8_160;
    uint1_t cf161;
    void* tmp8_162;
    uint1_t cf163;
    void* tmp8_164;
    uint1_t cf165;
    void** eax166;
    uint1_t cf167;
    unsigned char tmp8_168;
    void* tmp8_169;
    uint1_t cf170;
    void* tmp8_171;
    uint1_t cf172;
    void* tmp8_173;
    uint1_t cf174;
    void* tmp8_175;
    uint1_t cf176;
    void* tmp8_177;
    uint1_t cf178;
    void* tmp8_179;
    uint1_t cf180;
    unsigned char tmp8_181;
    int1_t cf182;
    int1_t pf183;
    void* tmp8_184;
    uint1_t cf185;
    void* tmp8_186;
    uint1_t cf187;
    void* tmp8_188;
    int1_t cf189;
    void* tmp8_190;
    int1_t cf191;
    void* tmp8_192;
    void* tmp8_193;
    int1_t cf194;
    int1_t of195;
    void* tmp8_196;
    int1_t cf197;
    void* tmp8_198;
    int1_t cf199;
    void* tmp8_200;
    int1_t cf201;
    unsigned char* eax202;
    unsigned char tmp8_203;
    int1_t cf204;
    void* tmp8_205;
    uint1_t cf206;
    int1_t zf207;
    uint32_t tmp32_208;
    int1_t of209;
    void* tmp8_210;
    int1_t cf211;
    void* al212;
    void* al213;
    void* tmp32_214;
    int1_t cf215;
    int1_t of216;
    void* tmp8_217;
    int32_t tmp32_218;
    int1_t cf219;
    void* tmp8_220;
    int1_t cf221;
    void* tmp8_222;
    uint1_t cf223;
    struct s1* tmp32_224;
    struct s1* eax225;
    void* bh226;
    void* tmp8_227;
    void* tmp8_228;
    uint1_t cf229;
    void* tmp32_230;
    int1_t cf231;
    int1_t of232;
    struct s9* tmp32_233;
    void* tmp8_234;
    unsigned char tmp8_235;
    int1_t cf236;
    void* tmp8_237;
    void* tmp8_238;
    uint1_t cf239;
    uint32_t tmp32_240;
    uint1_t cf241;
    void* tmp8_242;
    int1_t cf243;
    void* tmp8_244;
    int1_t cf245;
    struct s1* tmp32_246;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    eax8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax9) - 1);
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *edx10 = reinterpret_cast<unsigned char>(*edx11 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    tmp8_12 = reinterpret_cast<unsigned char>(g288c00 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    g288c00 = tmp8_12;
    tmp8_13 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1) + bl14);
    cf15 = reinterpret_cast<uint1_t>(tmp8_13 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1) = tmp8_13;
    *reinterpret_cast<void**>(&eax8) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)) - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf15))))));
    ecx->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *ebx16 = reinterpret_cast<unsigned char>(*ebx17 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    tmp8_18 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    cf19 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_18) < reinterpret_cast<unsigned char>(*eax8));
    *eax8 = tmp8_18;
    esi20 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi21) + reinterpret_cast<unsigned char>(*eax8) + cf19);
    *reinterpret_cast<void**>(&eax8) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)) + reinterpret_cast<unsigned char>(*eax8));
    __asm__("aaa ");
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    ecx->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    tmp8_22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    cf23 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_22) < reinterpret_cast<unsigned char>(*eax8));
    *eax8 = tmp8_22;
    *edx24 = *edx25 + edx26 + cf23;
    tmp8_27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
    cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(*eax8));
    *eax8 = tmp8_27;
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) - (reinterpret_cast<uint32_t>(eax8) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*eax8) < reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(eax8) + cf28))));
    *edx29 = reinterpret_cast<unsigned char>(*edx30 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    if (*edx31 < 0 == __intrinsic()) {
        addr_40206f_2:
        tmp8_32 = reinterpret_cast<signed char>(g97d + dl33);
        g97d = tmp8_32;
        *reinterpret_cast<void**>(&eax8) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)) + 18) + 18);
        goto addr_402078_3;
    } else {
        *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
        *reinterpret_cast<void**>(&eax8) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)) + 18);
        *edx34 = reinterpret_cast<unsigned char>(*edx35 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
        if (*edx36 < 0 == __intrinsic()) {
            addr_402078_3:
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx37) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx38) + reinterpret_cast<uint32_t>(ecx)) + bh39);
            *reinterpret_cast<unsigned char*>(edx40 + edx41) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(edx42 + edx43) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
            *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
            *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<uint32_t>(eax8));
            tmp8_44 = reinterpret_cast<unsigned char>(*ebx45 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
            cf46 = reinterpret_cast<uint1_t>(tmp8_44 < *ebx47);
            *ebx48 = tmp8_44;
            *reinterpret_cast<void**>(&eax8) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)) + reinterpret_cast<unsigned char>(*eax8)) + cf46);
            if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax8)) < reinterpret_cast<signed char>(0) == __intrinsic()) {
                *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
                tmp8_49 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)) + 40);
                cf50 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_49) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
                *reinterpret_cast<void**>(&eax8) = tmp8_49;
                eax8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax8) - (reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax8) < reinterpret_cast<unsigned char>(*eax8) + cf50)));
                *edx51 = reinterpret_cast<unsigned char>(*edx52 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                *reinterpret_cast<void**>(&ebx53) = reinterpret_cast<void*>(reinterpret_cast<signed char>(bl54) - *esi20);
            }
        } else {
            *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
            goto addr_40206f_2;
        }
    }
    tmp8_55 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) + reinterpret_cast<unsigned char>(*eax8));
    cf56 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_55) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = tmp8_55;
    *reinterpret_cast<void**>(&eax8) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)) - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf56))))));
    *edx57 = reinterpret_cast<unsigned char>(*edx58 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    cf59 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)) < reinterpret_cast<unsigned char>(*eax8));
    *reinterpret_cast<void**>(&eax8) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)) - reinterpret_cast<unsigned char>(*eax8));
    esi60 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(esi20) + reinterpret_cast<unsigned char>(*eax8) + cf59);
    tmp32_61 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<uint32_t>(eax8));
    cf62 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_61) < reinterpret_cast<unsigned char>(*eax8));
    *eax8 = tmp32_61;
    *reinterpret_cast<void**>(&eax8) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)))) + cf62);
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    *reinterpret_cast<void**>(&eax8) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)) + reinterpret_cast<unsigned char>(*eax8));
    ecx->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(dl63));
    ch64 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) + reinterpret_cast<unsigned char>(*eax8));
    *eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax8) + reinterpret_cast<uint32_t>(eax8));
    tmp8_65 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi60->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax8)));
    cf66 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_65) < reinterpret_cast<unsigned char>(esi60->f0));
    esi60->f0 = tmp8_65;
    __asm__("outsd ");
    cf67 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax8) < 0xa0a0000 + cf66);
    eax68 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(eax8) - (0xa0a0000 + cf67));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) + reinterpret_cast<unsigned char>(eax68->f0)) + cf67);
    esi60->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi60->f0) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx53)));
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    ch69 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ch64) | *edx70);
    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v71) + 4) = ds72;
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx73) + 1) = reinterpret_cast<void*>(reinterpret_cast<signed char>(bh74) + reinterpret_cast<signed char>(ebx53->f1));
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) + 42) & *edx75);
    edi76 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi77) + reinterpret_cast<int32_t>(ebp78->f1));
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) + 42);
    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v71) + 2) = ds79;
    tmp8_80 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ch69) + reinterpret_cast<unsigned char>(eax68->f0));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_80) < reinterpret_cast<unsigned char>(ch69))))))));
    *edx81 = reinterpret_cast<unsigned char>(*edx82 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    *reinterpret_cast<void**>(&ebx73) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx53)) - reinterpret_cast<unsigned char>(esi60->f0));
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx73) + 1) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx73) + 1)) + reinterpret_cast<signed char>(ebx73->f2));
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) + 42) & *edx83);
    edi84 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi76) + reinterpret_cast<int32_t>(ebp85->f2));
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) + 42);
    *reinterpret_cast<int16_t*>(&v71) = ds86;
    *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx73) + 1)) + reinterpret_cast<signed char>(ebx73->f3));
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) + 42) & *edx88);
    edi89 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi84) + reinterpret_cast<int32_t>(ebp90->f3));
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) + 42);
    *reinterpret_cast<int16_t*>(&v91 + 1) = ds92;
    tmp8_93 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(tmp8_80) + reinterpret_cast<unsigned char>(eax68->f0));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_93) < reinterpret_cast<unsigned char>(tmp8_80))))))));
    *edx94 = reinterpret_cast<unsigned char>(*edx95 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    *reinterpret_cast<void**>(&ebx87) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx73)) - reinterpret_cast<unsigned char>(esi60->f0));
    *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)) + reinterpret_cast<unsigned char>(ebx87->f4));
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) + 42) & *edx96);
    edi97 = reinterpret_cast<struct s9*>(reinterpret_cast<int32_t>(edi89) + reinterpret_cast<uint32_t>(ebp98->f4));
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) + 42);
    tmp8_99 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(tmp8_93) + reinterpret_cast<unsigned char>(eax68->f0));
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = tmp8_99;
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_99) < reinterpret_cast<unsigned char>(tmp8_93))))))));
    *edx100 = reinterpret_cast<unsigned char>(*edx101 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    *reinterpret_cast<unsigned char*>(&edx102) = reinterpret_cast<unsigned char>(dl103 - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)));
    esi60->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi60->f0) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax68) + reinterpret_cast<uint32_t>(eax68)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax68) + reinterpret_cast<uint32_t>(eax68)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    *reinterpret_cast<void**>(&ebx87->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    tmp8_104 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    cf105 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_104) < reinterpret_cast<unsigned char>(eax68->f0));
    eax68->f0 = tmp8_104;
    esi60->f5 = esi60->f5 + reinterpret_cast<uint32_t>(edi97) + cf105;
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) + 40);
    ds106 = ds107;
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *edx102);
    edx108 = reinterpret_cast<struct s11*>(reinterpret_cast<uint32_t>(edx102) | reinterpret_cast<unsigned char>(esi60->f0));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) | 43);
    edi97->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi97->f0) & reinterpret_cast<uint32_t>(eax68));
    esi60->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi60->f0) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    ecx->f67e = reinterpret_cast<unsigned char>(ecx->f67e | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx108)));
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) + 8);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax68)) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&eax68) == 0))) {
        eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
        *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) + 0x8e);
        ebx87 = reinterpret_cast<struct s1*>(*reinterpret_cast<int32_t*>(ebp109 - 0x6f) * 0xdf2061);
    }
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    __asm__("popad ");
    __asm__("rcr byte [eax+ecx+0x80c5817], cl");
    __asm__("fldcw word [eax]");
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)));
    edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    esp110 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 - 2 - 2 - 2 - 2 - 2 + 2 - 2 - 2 + 2);
    __asm__("outsd ");
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) & reinterpret_cast<uint32_t>(eax68));
    edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    *reinterpret_cast<void**>(&ebx87) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)) - reinterpret_cast<unsigned char>(esi60->f0));
    tmp8_111 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) + reinterpret_cast<unsigned char>(eax68->f0));
    cf112 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_111) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = tmp8_111;
    *reinterpret_cast<void**>(&eax68) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax68)) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf112))))));
    edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)) - esi60->f72);
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<uint32_t>(eax68));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax68) + 0xffffff80) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax68) + 0xffffff80) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1)));
    eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax68) + 0x28040000);
    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    tmp8_114 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    cf115 = reinterpret_cast<unsigned char>(tmp8_114) < reinterpret_cast<unsigned char>(edx108->f0);
    edx108->f0 = tmp8_114;
    if (cf115) 
        goto addr_4021e5_10;
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    if (__intrinsic()) 
        goto addr_4021f5_12;
    eax116 = reinterpret_cast<struct s12*>(reinterpret_cast<unsigned char>(eax113) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    esi60->f0 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(esi60->f0)));
    tmp8_117 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx108) + reinterpret_cast<uint32_t>(ebp118)) + *reinterpret_cast<signed char*>(&eax116));
    cf119 = reinterpret_cast<uint1_t>(tmp8_117 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx108) + reinterpret_cast<uint32_t>(ebp120)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx108) + reinterpret_cast<uint32_t>(ebp121)) = tmp8_117;
    esi60 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(esi60) + reinterpret_cast<int32_t>(eax116->f0) + cf119);
    *reinterpret_cast<signed char*>(&eax116) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax116)));
    eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax116) + 1);
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<unsigned char>(eax113)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<unsigned char>(eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    ecx->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx108)));
    tmp8_122 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    cf123 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_122) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = tmp8_122;
    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf123))))));
    edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    edi97->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi97->f0) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    goto addr_4021a3_14;
    addr_40232e_15:
    __asm__("aaa ");
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    *reinterpret_cast<void**>(&edx108) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx108)) | reinterpret_cast<unsigned char>(ecx->f0));
    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 0x6f);
    edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) - 0x1115dec4);
    addr_40233c_16:
    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 0x75);
    eax124 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) & 0x13010000);
    tmp32_125 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax124) + 0x72c0511);
    tmp32_126 = g396f + reinterpret_cast<unsigned char>(tmp32_125) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_125) < reinterpret_cast<unsigned char>(eax124));
    g396f = tmp32_126;
    *reinterpret_cast<void**>(&ebx87) = reinterpret_cast<void*>(0xff);
    __asm__("ficomp word [edx]");
    tmp32_127 = reinterpret_cast<struct s1*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(tmp32_125) + reinterpret_cast<unsigned char>(esi60->f0))));
    eax113 = tmp32_127;
    if (reinterpret_cast<unsigned char>(tmp32_127) < reinterpret_cast<unsigned char>(tmp32_125)) 
        goto addr_40239f_17;
    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    if (!__intrinsic()) {
        esp110 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp110) - 2);
        __asm__("outsd ");
        edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
        edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
        __asm__("daa ");
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(&ebx87) = reinterpret_cast<void*>(0xff);
    }
    edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
    ecx->f34 = reinterpret_cast<unsigned char>(ecx->f34 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    tmp8_128 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    cf129 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_128) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    *reinterpret_cast<void**>(&eax113->f0) = tmp8_128;
    eax130 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax113) + 0x40000001 + cf129);
    *eax130 = reinterpret_cast<unsigned char>(*eax130 + *reinterpret_cast<signed char*>(&eax130));
    ebp131->f1 = reinterpret_cast<unsigned char>(ebp131->f1 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx108)));
    tmp8_132 = reinterpret_cast<unsigned char>(*eax130 + *reinterpret_cast<signed char*>(&eax130));
    cf133 = reinterpret_cast<uint1_t>(tmp8_132 < *eax130);
    *eax130 = tmp8_132;
    eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax130) + cf133);
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    goto addr_402392_21;
    addr_402494_22:
    addr_402495_23:
    tmp8_134 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    cf135 = reinterpret_cast<unsigned char>(tmp8_134) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113));
    *reinterpret_cast<void**>(&eax113) = tmp8_134;
    if (__intrinsic()) {
        while (1) {
            if (cf135) {
                addr_402501_25:
                __asm__("outsd ");
                *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) | reinterpret_cast<unsigned char>(esi60->f0))));
            } else {
                tmp8_136 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                cf137 = reinterpret_cast<unsigned char>(tmp8_136) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113));
                *reinterpret_cast<void**>(&eax113) = tmp8_136;
                if (__intrinsic()) 
                    break;
                eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) ^ 0x6f0a0000);
                edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                do {
                    ecx->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(ecx->f0) ^ reinterpret_cast<uint32_t>(esi60));
                    do {
                    } while (0);
                    eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                    of138 = __intrinsic();
                    do {
                        if (of138) 
                            break;
                        __asm__("outsd ");
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113))));
                        tmp8_139 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                        cf140 = reinterpret_cast<unsigned char>(tmp8_139) < reinterpret_cast<unsigned char>(edx108->f0);
                        edx108->f0 = tmp8_139;
                        of138 = __intrinsic();
                    } while (cf140);
                    goto addr_402527_33;
                    addr_402527_33:
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                    of141 = __intrinsic();
                    if (of141) 
                        goto addr_40259a_35;
                    eax142 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax113) ^ 0x160a0000);
                    __asm__("outsd ");
                    *eax142 = reinterpret_cast<unsigned char>(*eax142 + *reinterpret_cast<unsigned char*>(&eax142));
                    addr_402534_37:
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax142) + 1) = 0xff;
                    eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax142) - g3d6f);
                    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                    edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                    edi97->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi97->f0) - *reinterpret_cast<unsigned char*>(&eax113 + 1));
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    __asm__("outsd ");
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) | reinterpret_cast<unsigned char>(esi60->f0))));
                    tmp8_143 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                    cf144 = reinterpret_cast<unsigned char>(tmp8_143) < reinterpret_cast<unsigned char>(edx108->f0);
                    edx108->f0 = tmp8_143;
                    addr_402551_38:
                    if (cf144) 
                        break;
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                    if (__intrinsic()) 
                        goto addr_4025c6_40;
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi97) + reinterpret_cast<uint32_t>(esi60)));
                    __asm__("outsd ");
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113))));
                    tmp8_145 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                    cf146 = reinterpret_cast<unsigned char>(tmp8_145) < reinterpret_cast<unsigned char>(edx108->f0);
                    edx108->f0 = tmp8_145;
                } while (cf146);
                goto addr_402565_42;
            }
            tmp8_147 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            cf135 = reinterpret_cast<unsigned char>(tmp8_147) < reinterpret_cast<unsigned char>(edx108->f0);
            edx108->f0 = tmp8_147;
        }
    } else {
        eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) ^ 0x160a0000);
        goto addr_40249b_45;
    }
    addr_40257d_46:
    if (cf137) {
        addr_4025ab_47:
        *reinterpret_cast<void**>(&ebx87) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1)));
        edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
        ecx->f1c = reinterpret_cast<unsigned char>(ecx->f1c + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        __asm__("out 0x1, al");
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        __asm__("out 0x1, al");
        tmp8_148 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        cf149 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_148) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
        *reinterpret_cast<void**>(&eax113->f0) = tmp8_148;
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + cf149))));
    } else {
        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113))));
        if (!__intrinsic()) {
            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<uint32_t>(ebp131));
            eax113 = reinterpret_cast<struct s1*>(&eax113->pad3);
            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
            *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
            *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
            edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            edi97->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi97->f0) - *reinterpret_cast<unsigned char*>(&eax113 + 1));
            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
            *reinterpret_cast<void**>(&ebx87) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1)));
            *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx108) + reinterpret_cast<uint32_t>(esi60) * 2) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx108) + reinterpret_cast<uint32_t>(esi60) * 2)) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx108) + reinterpret_cast<uint32_t>(esi60) * 2)) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)))))));
        }
        edi97 = reinterpret_cast<struct s9*>(&edi97->f1);
        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
        of141 = __intrinsic();
        goto addr_40259a_35;
    }
    addr_4025c6_40:
    tmp8_150 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    cf151 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_150) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    *reinterpret_cast<void**>(&eax113->f0) = tmp8_150;
    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + cf151))));
    ecx->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    v91 = ds106;
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    ecx = reinterpret_cast<struct s0*>(&ecx->pad28);
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(0xff);
    esi60 = reinterpret_cast<struct s3*>(reinterpret_cast<int16_t>(v91) + reinterpret_cast<int32_t>(edx108->f59));
    goto addr_4025d8_51;
    addr_40259a_35:
    if (!of141) {
        __asm__("outsd ");
        edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
        edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    }
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    __asm__("daa ");
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    goto addr_4025ab_47;
    addr_402565_42:
    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    if (__intrinsic()) {
        addr_4025d8_51:
        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113))));
        if (__intrinsic()) {
            addr_40264b_54:
            *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113))));
            of152 = __intrinsic();
            if (of152) {
                addr_4026c0_55:
                if (of152) {
                    addr_402735_56:
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    __asm__("ficom word [edi]");
                } else {
                    esi60 = reinterpret_cast<struct s3*>(&esi60->pad5);
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1)) | ebx87->f47);
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    *reinterpret_cast<unsigned char*>(&eax113 + 1) = 0xff;
                    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | edi97->f49);
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) | reinterpret_cast<unsigned char>(edx108->f0));
                    if (__intrinsic()) {
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 0x6f);
                        edx108 = reinterpret_cast<struct s11*>(reinterpret_cast<uint32_t>(edx108) - 1);
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | edi97->f4b);
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    }
                    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)));
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(ecx->f0))));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<unsigned char>(eax113)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<unsigned char>(eax113)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | g2516023c);
                    *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)) | ebp131->f9);
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 2);
                    if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax113)) < reinterpret_cast<signed char>(0) != __intrinsic()) 
                        goto addr_402701_60;
                }
            } else {
                ebx87 = reinterpret_cast<struct s1*>(&ebx87->pad3);
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                *reinterpret_cast<unsigned char*>(&eax113 + 1) = 0xff;
                goto addr_402655_62;
            }
        } else {
            edx108 = reinterpret_cast<struct s11*>(&edx108->pad21);
            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
            *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1) = reinterpret_cast<void*>(0xff);
            *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113))));
            if (__intrinsic()) {
                addr_402655_62:
                cf153 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                esi60 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(esi60) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + cf153);
                *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                __asm__("aas ");
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                tmp8_154 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                cf155 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_154) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                *reinterpret_cast<void**>(&eax113->f0) = tmp8_154;
                edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<uint32_t>(edx108) + cf155);
                tmp8_156 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
                cf157 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_156) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                *reinterpret_cast<void**>(&eax113->f0) = tmp8_156;
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) - (reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax113) + cf157))));
                tmp8_158 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                cf159 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_158) < reinterpret_cast<unsigned char>(edx108->f0));
                edx108->f0 = tmp8_158;
                if (reinterpret_cast<signed char>(edx108->f0) < reinterpret_cast<signed char>(0) == __intrinsic()) {
                    addr_40267f_64:
                    tmp8_160 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0))) + cf159);
                    cf161 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_160) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    *reinterpret_cast<void**>(&eax113) = tmp8_160;
                    eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) + 0x117d + cf161);
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 18);
                    goto addr_402689_65;
                } else {
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 18);
                    *reinterpret_cast<void**>(&ebx87->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ebx87->f0)) < reinterpret_cast<signed char>(0) == __intrinsic()) {
                        addr_402689_65:
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx108) + reinterpret_cast<uint32_t>(edx108)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx108) + reinterpret_cast<uint32_t>(edx108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)));
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx108) + reinterpret_cast<uint32_t>(edx108)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx108) + reinterpret_cast<uint32_t>(edx108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
                        eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                        tmp8_162 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
                        cf163 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_162) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)));
                        *reinterpret_cast<void**>(&ebx87->f0) = tmp8_162;
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0))) + cf163);
                        if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax113)) < reinterpret_cast<signed char>(0) == __intrinsic()) {
                            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                            tmp8_164 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 40);
                            cf165 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_164) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                            *reinterpret_cast<void**>(&eax113) = tmp8_164;
                            eax166 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax113) - (reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax113) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + cf165))));
                            edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                            cf167 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax166)) < reinterpret_cast<unsigned char>(*eax166));
                            *reinterpret_cast<void**>(&eax166) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax166)) - reinterpret_cast<unsigned char>(*eax166));
                            esi60 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(esi60) - (reinterpret_cast<unsigned char>(*eax166) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esi60) < reinterpret_cast<unsigned char>(*eax166) + cf167)));
                            eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax166) + reinterpret_cast<unsigned char>(*eax166));
                            edx108 = reinterpret_cast<struct s11*>(0x9000000);
                            goto addr_4026ac_68;
                        }
                    } else {
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 18);
                        tmp8_168 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi97) * 2 + 0x4000013) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        cf159 = reinterpret_cast<uint1_t>(tmp8_168 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi97) * 2 + 0x4000013));
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi97) * 2 + 0x4000013) = tmp8_168;
                        goto addr_40267f_64;
                    }
                }
            } else {
                ebx87 = reinterpret_cast<struct s1*>(&ebx87->pad3);
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                *reinterpret_cast<unsigned char*>(&eax113 + 1) = 0xff;
                *reinterpret_cast<void**>(&edx108) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx108)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)));
                edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                edi97->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi97->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)));
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                edi97->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi97->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                tmp8_169 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                cf170 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_169) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                *reinterpret_cast<void**>(&eax113->f0) = tmp8_169;
                edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<uint32_t>(edx108) + cf170);
                tmp8_171 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
                cf172 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_171) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                *reinterpret_cast<void**>(&eax113->f0) = tmp8_171;
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) - (reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax113) + cf172))));
                tmp8_173 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                cf174 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_173) < reinterpret_cast<unsigned char>(edx108->f0));
                edx108->f0 = tmp8_173;
                if (reinterpret_cast<signed char>(edx108->f0) < reinterpret_cast<signed char>(0) == __intrinsic()) {
                    addr_40260f_71:
                    tmp8_175 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0))) + cf174);
                    cf176 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_175) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    *reinterpret_cast<void**>(&eax113) = tmp8_175;
                    eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) + 0xd7d + cf176);
                    goto addr_402619_72;
                } else {
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 18);
                    *reinterpret_cast<void**>(&ebx87->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ebx87->f0)) < reinterpret_cast<signed char>(0) == __intrinsic()) {
                        addr_402619_72:
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 18);
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi60) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi60) + reinterpret_cast<uint32_t>(ecx)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)));
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx108) + reinterpret_cast<uint32_t>(edx108)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx108) + reinterpret_cast<uint32_t>(edx108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                        tmp8_177 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
                        cf178 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_177) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)));
                        *reinterpret_cast<void**>(&ebx87->f0) = tmp8_177;
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0))) + cf178);
                        if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax113)) < reinterpret_cast<signed char>(0) == __intrinsic()) {
                            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                            tmp8_179 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 40);
                            cf180 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_179) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                            *reinterpret_cast<void**>(&eax113) = tmp8_179;
                            eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) - (reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax113) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + cf180))));
                            edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                            *reinterpret_cast<void**>(&ebx87) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)) - reinterpret_cast<unsigned char>(esi60->f0));
                            *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        }
                    } else {
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 18);
                        tmp8_181 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi97) * 2 + 0x400000f) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        cf174 = reinterpret_cast<uint1_t>(tmp8_181 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi97) * 2 + 0x400000f));
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi97) * 2 + 0x400000f) = tmp8_181;
                        goto addr_40260f_71;
                    }
                }
                *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | reinterpret_cast<unsigned char>(edx108->f0));
                esi60 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&v71) + 1)) + reinterpret_cast<int32_t>(edx108->f7b));
                *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113))));
                if (__intrinsic()) {
                    addr_4026b6_77:
                    cf182 = reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) < 90;
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) - 90);
                    if (!cf182) {
                        addr_402701_60:
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 2);
                        pf183 = __intrinsic();
                        if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax113)) < reinterpret_cast<signed char>(0) != __intrinsic()) {
                            addr_402711_78:
                            __asm__("ficom word [ebp+0x2]");
                            if (pf183) {
                                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 11);
                                tmp8_184 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi60) + reinterpret_cast<uint32_t>(edi97) * 8)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                cf185 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_184) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi60) + reinterpret_cast<uint32_t>(edi97) * 8)));
                                *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi60) + reinterpret_cast<uint32_t>(edi97) * 8) = tmp8_184;
                                eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) + 0x1b000005 + cf185);
                                goto addr_402723_80;
                            }
                        } else {
                            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                            *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 18);
                            edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(eax113));
                        }
                    } else {
                        addr_4026bc_82:
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        *reinterpret_cast<unsigned char*>(&eax113 + 1) = 0xff;
                        of152 = 0;
                        goto addr_4026c0_55;
                    }
                } else {
                    edx108 = reinterpret_cast<struct s11*>(&edx108->pad21);
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1) = reinterpret_cast<void*>(0xff);
                    goto addr_40264b_54;
                }
            }
        }
    } else {
        eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) ^ 0x160a0000);
        __asm__("outsd ");
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<unsigned char*>(&eax113 + 1) = 0xff;
        edi97->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi97->f0) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)));
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)));
        cf137 = 0;
        goto addr_40257d_46;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<unsigned char>(eax113)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<unsigned char>(eax113)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    *reinterpret_cast<void**>(&ebx87->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
    pf183 = __intrinsic();
    goto addr_402711_78;
    addr_4026ac_68:
    tmp8_186 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    cf187 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_186) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    *reinterpret_cast<void**>(&eax113->f0) = tmp8_186;
    edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(eax113) + cf187);
    if (!__intrinsic()) 
        goto addr_4026bc_82;
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 10);
    goto addr_4026b6_77;
    addr_402723_80:
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 18);
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<uint32_t>(ebp131));
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    goto addr_402735_56;
    addr_40249b_45:
    __asm__("outsd ");
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    while (1) {
        *reinterpret_cast<unsigned char*>(&eax113 + 1) = 0xff;
        eax142 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax113) - g3d6f);
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | *eax142);
        *reinterpret_cast<unsigned char*>(&eax142) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax142) - *eax142);
        addr_4024b1_88:
        do {
            edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            edi97->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi97->f0) - *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax142) + 1));
            *eax142 = reinterpret_cast<unsigned char>(*eax142 + *reinterpret_cast<unsigned char*>(&eax142));
            __asm__("outsd ");
            *reinterpret_cast<unsigned char*>(&eax142) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax142) | reinterpret_cast<unsigned char>(esi60->f0))));
            tmp8_188 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            cf189 = reinterpret_cast<unsigned char>(tmp8_188) < reinterpret_cast<unsigned char>(edx108->f0);
            edx108->f0 = tmp8_188;
        } while (cf189);
        *reinterpret_cast<unsigned char*>(&eax142) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax142) + *eax142);
        if (__intrinsic()) 
            goto addr_402534_37;
        eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax142) ^ 0x6f0a0000);
        edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
        do {
            ecx->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(ecx->f0) ^ reinterpret_cast<uint32_t>(esi60));
            if (0) 
                break;
            eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
            if (__intrinsic()) 
                goto addr_4024dd_94;
            __asm__("outsd ");
            *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113))));
            tmp8_190 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            cf191 = reinterpret_cast<unsigned char>(tmp8_190) < reinterpret_cast<unsigned char>(edx108->f0);
            edx108->f0 = tmp8_190;
        } while (cf191);
        goto addr_4024de_96;
    }
    addr_4024dd_94:
    addr_4024de_96:
    tmp8_192 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    cf144 = reinterpret_cast<unsigned char>(tmp8_192) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113));
    *reinterpret_cast<void**>(&eax113) = tmp8_192;
    if (__intrinsic()) 
        goto addr_402551_38;
    eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) ^ 0x160a0000);
    __asm__("outsd ");
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    addr_4024eb_98:
    *reinterpret_cast<unsigned char*>(&eax113 + 1) = 0xff;
    eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) - g3d6f);
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    edi97->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi97->f0) - *reinterpret_cast<unsigned char*>(&eax113 + 1));
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
    goto addr_402501_25;
    addr_402412_99:
    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    if (__intrinsic()) 
        goto addr_402485_100;
    eax113 = eax113 - 0x874000;
    do {
        *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)) + reinterpret_cast<signed char>(ebx87->f8));
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 0x6f)));
        tmp8_193 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
        cf194 = reinterpret_cast<unsigned char>(tmp8_193) < reinterpret_cast<unsigned char>(edx108->f0);
        edx108->f0 = tmp8_193;
    } while (cf194);
    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
    if (__intrinsic()) 
        goto addr_40249b_45; else 
        goto addr_40242c_104;
    addr_40248b_105:
    while (!of195) {
        __asm__("outsd ");
        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113))));
        tmp8_196 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
        cf197 = reinterpret_cast<unsigned char>(tmp8_196) < reinterpret_cast<unsigned char>(edx108->f0);
        edx108->f0 = tmp8_196;
        if (!cf197) 
            goto addr_402495_23;
        while (1) {
            *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113))));
            tmp8_198 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            cf199 = reinterpret_cast<unsigned char>(tmp8_198) < reinterpret_cast<unsigned char>(edx108->f0);
            edx108->f0 = tmp8_198;
            if (!cf199) {
                *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                if (__intrinsic()) 
                    goto addr_4024eb_98;
                eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) ^ 0x6f0a0000);
                edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                addr_402485_100:
                ecx->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(ecx->f0) ^ reinterpret_cast<uint32_t>(esi60));
                if (!0) 
                    break;
                addr_40242c_104:
                eax142 = reinterpret_cast<unsigned char*>(&(eax113 - 0x874000)->f0);
                *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)) + reinterpret_cast<signed char>(ebx87->f8));
                *eax142 = reinterpret_cast<unsigned char>(*eax142 + *reinterpret_cast<unsigned char*>(&eax142));
                do {
                    *reinterpret_cast<unsigned char*>(&eax142) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax142) + 0x6f)));
                    tmp8_200 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                    cf201 = reinterpret_cast<unsigned char>(tmp8_200) < reinterpret_cast<unsigned char>(edx108->f0);
                    edx108->f0 = tmp8_200;
                } while (cf201);
                *reinterpret_cast<unsigned char*>(&eax142) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax142) + *eax142);
                if (__intrinsic()) 
                    goto addr_4024b1_88;
                eax202 = eax142 - 0x260a0000;
                *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)) + reinterpret_cast<signed char>(ebx87->f8));
                *eax202 = reinterpret_cast<unsigned char>(*eax202 + *reinterpret_cast<unsigned char*>(&eax202));
                *reinterpret_cast<unsigned char*>(&eax202) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax202) + 0x6f);
                edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                *reinterpret_cast<unsigned char*>(&eax202) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax202) | reinterpret_cast<unsigned char>(esi60->f0));
                eax113 = reinterpret_cast<struct s1*>(eax202 - 0x301721a);
            }
            addr_402459_115:
            tmp8_203 = reinterpret_cast<unsigned char>(eax113->f3 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1)));
            cf204 = tmp8_203 < eax113->f3;
            eax113->f3 = tmp8_203;
            of195 = __intrinsic();
            if (cf204) 
                goto addr_40248b_105;
            eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
            if (__intrinsic()) 
                break;
            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
            edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            edi97->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi97->f0) - *reinterpret_cast<unsigned char*>(&eax113 + 1));
            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
            *reinterpret_cast<void**>(&ebx87) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(eax113));
            addr_40246f_118:
            esi60->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi60->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
            __asm__("outsd ");
        }
        eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
        of195 = __intrinsic();
    }
    goto addr_402494_22;
    while (1) {
        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) | reinterpret_cast<unsigned char>(edi97->f0));
        __asm__("outsd ");
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) ^ reinterpret_cast<unsigned char>(eax113));
        tmp8_205 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
        cf206 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_205) < reinterpret_cast<unsigned char>(edx108->f0));
        edx108->f0 = tmp8_205;
        eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx87) + reinterpret_cast<uint32_t>(ebp131))) + cf206);
        edx108 = reinterpret_cast<struct s11*>(reinterpret_cast<uint32_t>(edx108) ^ reinterpret_cast<unsigned char>(ecx->f0));
        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 0x6f);
        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
        edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
        zf207 = edx108->f0 == 0;
        addr_402306_121:
        while (!zf207) {
            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
            while (1) {
                addr_402309_123:
                tmp32_208 = g37720a2c + reinterpret_cast<unsigned char>(eax113);
                g37720a2c = tmp32_208;
                *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                of209 = __intrinsic();
                do {
                    if (of209) 
                        goto addr_40233c_16;
                    eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                    edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                    __asm__("outsd ");
                    do {
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113))));
                        tmp8_210 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                        cf211 = reinterpret_cast<unsigned char>(tmp8_210) < reinterpret_cast<unsigned char>(edx108->f0);
                        edx108->f0 = tmp8_210;
                        if (!cf211) 
                            goto addr_40231f_127;
                        addr_4022b8_128:
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | g30280312);
                        addr_4022bd_129:
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1)) | edx108->f1f);
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                        if (__intrinsic()) 
                            goto addr_4022f1_130;
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) | 7);
                        __asm__("outsd ");
                        __asm__("das ");
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        *reinterpret_cast<void**>(&edx108) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx108)) | reinterpret_cast<unsigned char>(edi97->f0));
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(eax113) + reinterpret_cast<uint32_t>(ecx)) ^ reinterpret_cast<uint32_t>(ecx);
                        if (0) 
                            goto addr_402309_123;
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                        zf207 = *reinterpret_cast<void**>(&eax113) == 0;
                        if (__intrinsic()) 
                            goto addr_402306_121;
                        al212 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                        edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(al212) | 8);
                    } while (0);
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                    of209 = __intrinsic();
                } while (of209);
                goto addr_4022ea_135;
            }
        }
        goto addr_40232e_15;
        addr_4022f1_130:
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        continue;
        addr_4022ea_135:
        al213 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
        edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(al213) | 8);
        edi97->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi97->f0) - *reinterpret_cast<unsigned char*>(&eax113 + 1));
        goto addr_4022f1_130;
    }
    addr_40231f_127:
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(eax113));
    if (__intrinsic()) {
        addr_402392_21:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<unsigned char>(eax113)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<unsigned char>(eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<unsigned char>(eax113)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<unsigned char>(eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
        goto addr_402399_136;
    } else {
        eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) ^ 0x160a0000);
        __asm__("outsd ");
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
        goto addr_40232e_15;
    }
    while (1) {
        addr_40224a_138:
        while (1) {
            addr_40224b_139:
            tmp32_214 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(eax113));
            cf215 = reinterpret_cast<unsigned char>(tmp32_214) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0));
            *reinterpret_cast<void**>(&eax113->f0) = tmp32_214;
            of216 = __intrinsic();
            if (of216) 
                goto addr_4021f1_140;
            ecx->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(ecx->f0) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
            *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | reinterpret_cast<unsigned char>(edx108->f0));
            eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) + 0x6972102c);
            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(eax113));
            if (!__intrinsic()) {
                edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
            }
            __asm__("daa ");
            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
            *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) | reinterpret_cast<unsigned char>(edx108->f0));
            if (__intrinsic()) {
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 6);
                __asm__("outsd ");
                eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            }
            *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)) + reinterpret_cast<signed char>(ebx87->f8));
            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
            *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 0x6f)));
            tmp8_217 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            cf215 = reinterpret_cast<unsigned char>(tmp8_217) < reinterpret_cast<unsigned char>(edx108->f0);
            edx108->f0 = tmp8_217;
            if (!cf215) 
                goto addr_402281_146;
            while (1) {
                while (1) {
                    addr_40221c_148:
                    if (cf215) 
                        goto addr_40224b_139;
                    while (1) {
                        addr_40221e_149:
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(eax113));
                        if (__intrinsic()) 
                            goto addr_40224a_138;
                        while (1) {
                            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                            edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                            *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)));
                            *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) - 27);
                            ebp131 = edi97;
                            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                            tmp32_218 = g13b7216 + reinterpret_cast<int32_t>(esp110);
                            g13b7216 = tmp32_218;
                            while (1) {
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax113) + 0xffffffa2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax113) + 0xffffffa2) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1)));
                                do {
                                    eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) & 0x25a20317);
                                    edx108->f57 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f57) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(edx108->f57) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1)))))));
                                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(eax113));
                                    if (!__intrinsic()) 
                                        goto addr_402243_153;
                                    addr_4021e5_10:
                                    while (cf219 = reinterpret_cast<unsigned char>(eax113) < reinterpret_cast<unsigned char>(0xf2d0412), eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) - 0xf2d0412), cf219) {
                                        addr_4021a3_14:
                                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                        esp110 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp110) - 2);
                                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) | reinterpret_cast<unsigned char>(edx108->f0));
                                        if (0) 
                                            goto addr_40221e_149;
                                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                        if (__intrinsic()) 
                                            goto addr_402221_155;
                                        __asm__("cdq ");
                                        tmp8_220 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                        cf221 = reinterpret_cast<unsigned char>(tmp8_220) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0));
                                        *reinterpret_cast<void**>(&eax113->f0) = tmp8_220;
                                        if (!__intrinsic()) {
                                            if (!cf221) {
                                                addr_4021da_158:
                                                tmp8_222 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 42);
                                                cf223 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_222) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                                *reinterpret_cast<void**>(&eax113) = tmp8_222;
                                                esi60 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(esi60) - (reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esi60) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + cf223)));
                                                *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113))));
                                                tmp32_224 = ecx->f0;
                                                ecx->f0 = eax113;
                                                eax225 = tmp32_224;
                                                *reinterpret_cast<void**>(&eax225->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax225->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax225)));
                                                eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax225) + 0x3110000);
                                                continue;
                                            } else {
                                                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                                *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)) | ebp131->f7);
                                            }
                                        }
                                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 2);
                                        if (__intrinsic()) {
                                            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                            *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 23);
                                            __asm__("outsd ");
                                            eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) & 0x20a0000);
                                        }
                                        bh226 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)) + reinterpret_cast<signed char>(ebx87->f7));
                                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 0x73);
                                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                        *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(bh226) | ebp131->f8);
                                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                        goto addr_4021da_158;
                                    }
                                    tmp8_227 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                    cf215 = reinterpret_cast<unsigned char>(tmp8_227) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0));
                                    *reinterpret_cast<void**>(&eax113->f0) = tmp8_227;
                                    of216 = __intrinsic();
                                    addr_4021f1_140:
                                    if (of216) 
                                        goto addr_40221c_148;
                                    __asm__("daa ");
                                    addr_4021f5_12:
                                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                    *reinterpret_cast<void**>(&ebx87) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
                                    if (!1) {
                                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                    }
                                    tmp8_228 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 45);
                                    cf229 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_228) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                                    *reinterpret_cast<void**>(&eax113) = tmp8_228;
                                    esi60 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(esi60) + reinterpret_cast<int32_t>(edx108->f15) + cf229);
                                    tmp32_230 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(eax113));
                                    cf231 = reinterpret_cast<unsigned char>(tmp32_230) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0));
                                    *reinterpret_cast<void**>(&eax113->f0) = tmp32_230;
                                    of232 = __intrinsic();
                                    if (of232) 
                                        break;
                                } while (cf231);
                                goto addr_402208_168;
                                addr_402209_169:
                                if (of232) 
                                    continue; else 
                                    goto addr_40220c_170;
                                addr_402208_168:
                                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(eax113));
                                of232 = __intrinsic();
                                goto addr_402209_169;
                            }
                            addr_402221_155:
                        }
                    }
                }
                addr_40220c_170:
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)));
                edx108 = reinterpret_cast<struct s11*>(&edx108->pad21);
                tmp32_233 = reinterpret_cast<struct s9*>(reinterpret_cast<uint32_t>(ebp131) + reinterpret_cast<uint32_t>(g1317213));
                ebp131 = tmp32_233;
                tmp8_234 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax113->f4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1)));
                cf215 = reinterpret_cast<unsigned char>(tmp8_234) < reinterpret_cast<unsigned char>(eax113->f4);
                eax113->f4 = tmp8_234;
            }
        }
        addr_402243_153:
        eax113 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax113) & 0x25a20419);
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1)) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(edx108->f63) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1)) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(edx108->f63))))));
    }
    addr_402281_146:
    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(eax113));
    if (!__intrinsic()) {
        eax113 = eax113 - 0x874000;
        *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)) + reinterpret_cast<signed char>(ebx87->f8));
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 0x6f);
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)));
        esp110 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp110) + 2);
        __asm__("outsd ");
        __asm__("das ");
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | g1b7720f);
        eax113->f28 = reinterpret_cast<unsigned char>(eax113->f28 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1)));
        __asm__("daa ");
        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        *reinterpret_cast<void**>(&ebx87) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
        __asm__("rol dword [eax], 0x0");
        tmp8_235 = reinterpret_cast<unsigned char>(g972452c + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
        g972452c = tmp8_235;
        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
        if (__intrinsic()) 
            goto addr_4022bd_129;
        __asm__("outsd ");
        __asm__("das ");
        goto addr_4022b8_128;
    }
    while (1) {
        addr_4023ce_173:
        while (1) {
            edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
            *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
            do {
                *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | edi97->f2b);
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) | reinterpret_cast<unsigned char>(edx108->f0));
                cf236 = 0;
                if (__intrinsic()) {
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 0x6f)));
                    tmp8_237 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                    cf236 = reinterpret_cast<unsigned char>(tmp8_237) < reinterpret_cast<unsigned char>(edx108->f0);
                    edx108->f0 = tmp8_237;
                }
                if (cf236) {
                    addr_402399_136:
                    edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)));
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    addr_40239f_17:
                    edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)));
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    *reinterpret_cast<void**>(&ebx87->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)) + reinterpret_cast<unsigned char>(ebx87));
                    *reinterpret_cast<void**>(&ebx87->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87->f0)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)));
                    *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(eax113));
                    esi60->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi60->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    tmp8_238 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                    cf239 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_238) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                    *reinterpret_cast<void**>(&eax113->f0) = tmp8_238;
                    tmp32_240 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp110) + reinterpret_cast<uint32_t>(ebp131)) + reinterpret_cast<unsigned char>(eax113) + cf239;
                    cf241 = reinterpret_cast<uint1_t>(tmp32_240 < *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp110) + reinterpret_cast<uint32_t>(ebp131)));
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp110) + reinterpret_cast<uint32_t>(ebp131)) = tmp32_240;
                    edx108->f67 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(edx108->f67 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx108) + 1))) + cf241);
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                    if (!__intrinsic()) 
                        goto addr_4023b9_178;
                } else {
                    *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                    if (__intrinsic()) 
                        goto addr_402459_115;
                    eax113 = eax113 - 0x874000;
                    do {
                        *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)) + reinterpret_cast<signed char>(ebx87->f8));
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 0x6f)));
                        tmp8_242 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                        cf243 = reinterpret_cast<unsigned char>(tmp8_242) < reinterpret_cast<unsigned char>(edx108->f0);
                        edx108->f0 = tmp8_242;
                        if (cf243) 
                            break;
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                        if (__intrinsic()) 
                            goto addr_40246f_118;
                        eax113 = eax113 - 0x874000;
                        *reinterpret_cast<void**>(&ebx87 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87 + 1)) + reinterpret_cast<signed char>(ebx87->f8));
                        *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                        *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 0x6f)));
                        tmp8_244 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                        cf245 = reinterpret_cast<unsigned char>(tmp8_244) < reinterpret_cast<unsigned char>(edx108->f0);
                        edx108->f0 = tmp8_244;
                    } while (cf245);
                    goto addr_402412_99;
                    continue;
                }
                addr_4023bc_185:
                *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
                __asm__("daa ");
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) | reinterpret_cast<unsigned char>(edx108->f0));
                if (!__intrinsic()) 
                    goto addr_4023ce_173; else 
                    continue;
                addr_4023b9_178:
                edx108->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx108->f0) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                goto addr_4023bc_185;
                *reinterpret_cast<void**>(&eax113->f0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)));
                *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + 0x72);
                tmp32_246 = ebx87;
                ebx87 = eax113;
                eax113 = tmp32_246;
                *reinterpret_cast<void**>(&eax113) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax113->f0)));
            } while (__intrinsic());
        }
    }
}

void fun_402743(signed char cl) {
    int1_t less2;
    signed char* eax3;
    signed char* eax4;
    signed char al5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char dl9;
    signed char* edx10;
    signed char* edx11;

    if (less2) {
        *eax3 = reinterpret_cast<signed char>(*eax4 + al5);
        *reinterpret_cast<signed char*>(&eax6) = reinterpret_cast<signed char>(al7 + 2);
        if (*reinterpret_cast<signed char*>(&eax6) < 0 != __intrinsic()) {
            addr_402755_3:
        } else {
            *eax6 = reinterpret_cast<signed char>(*eax6 + *reinterpret_cast<signed char*>(&eax6));
            *reinterpret_cast<signed char*>(&eax8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax6) + 8);
        }
    }
    *eax8 = reinterpret_cast<signed char>(*eax8 - dl9);
    *edx10 = reinterpret_cast<signed char>(*edx11 + cl);
    __asm__("ficom word [ebx]");
    goto addr_402755_3;
}

struct s13 {
    unsigned char f0;
    signed char[437715086] pad437715087;
    signed char f1a17008f;
};

struct s14 {
    signed char f0;
    signed char[17] pad18;
    uint32_t f12;
};

void fun_402759(int32_t ecx) {
    uint48_t v2;
    int1_t less3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    struct s13* eax7;
    signed char al8;
    int32_t edx9;
    int32_t* esi10;
    int32_t* esi11;
    int32_t esi12;
    struct s14* ebx13;
    signed char bh14;
    int32_t edx15;
    signed char* edx16;
    signed char* edx17;
    signed char dl18;
    signed char* edx19;
    signed char* edx20;
    int32_t eax21;
    signed char bl22;
    void** eax23;
    signed char* edx24;
    signed char* edx25;
    void* tmp8_26;
    uint1_t cf27;
    int32_t esi28;
    unsigned char* esi29;
    signed char* esi30;
    unsigned char tmp8_31;
    signed char* esi32;
    uint1_t cf33;
    unsigned char* esi34;
    unsigned char* esi35;
    uint32_t eax36;
    signed char* esi37;
    signed char* esi38;

    *reinterpret_cast<int32_t*>(&v2) = reinterpret_cast<int32_t>(__return_address());
    if (less3) {
        *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
        *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(al8 + 2);
        if (*reinterpret_cast<signed char*>(&eax7) < reinterpret_cast<signed char>(0) != __intrinsic()) {
            addr_40276b_3:
            *reinterpret_cast<unsigned char*>(eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax7) + edx9);
            *reinterpret_cast<unsigned char*>(eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax7) + *reinterpret_cast<unsigned char*>(&eax7));
            *reinterpret_cast<unsigned char*>(eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax7) + *reinterpret_cast<unsigned char*>(&eax7));
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax7) + 0x1a17008f) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax7) + 0x1a17008f) + *reinterpret_cast<signed char*>(&ecx));
            *reinterpret_cast<unsigned char*>(eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax7) + *reinterpret_cast<unsigned char*>(&eax7));
            *esi10 = *esi11 + esi12;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx13) + 1) = reinterpret_cast<signed char>(bh14 + *reinterpret_cast<signed char*>(edx15 + ecx));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebx13) + reinterpret_cast<int32_t>(eax7)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx13) + reinterpret_cast<int32_t>(eax7)) + *reinterpret_cast<unsigned char*>(&eax7));
            *edx16 = reinterpret_cast<signed char>(*edx17 - dl18);
            *edx19 = reinterpret_cast<signed char>(*edx20 + *reinterpret_cast<signed char*>(&ecx));
            *reinterpret_cast<unsigned char*>(&eax21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) - *reinterpret_cast<unsigned char*>(eax7));
            ebx13->f0 = reinterpret_cast<signed char>(ebx13->f0 + bl22);
            *reinterpret_cast<unsigned char*>(eax21 + eax21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax21 + eax21) ^ *reinterpret_cast<unsigned char*>(&eax21));
            eax23 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v2) + 2);
            *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
            *edx24 = reinterpret_cast<signed char>(*edx25 + *reinterpret_cast<signed char*>(&ecx));
            tmp8_26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
            cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_26) < reinterpret_cast<unsigned char>(*eax23));
            *eax23 = tmp8_26;
            ebx13->f12 = ebx13->f12 + esi28 + cf27;
            *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
            *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
            *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 0x6f);
            *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
            *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
            *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 0x6f);
            *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) | reinterpret_cast<uint32_t>(eax23));
            *esi29 = reinterpret_cast<unsigned char>(*esi30 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
            *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
            *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 0x6f)));
            tmp8_31 = reinterpret_cast<unsigned char>(*esi32 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
            cf33 = reinterpret_cast<uint1_t>(tmp8_31 < *esi34);
            *esi35 = tmp8_31;
            __asm__("outsd ");
            eax36 = reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<unsigned char>(*eax23) + cf33;
            *esi37 = reinterpret_cast<signed char>(*esi38 + *reinterpret_cast<signed char*>(&eax36));
            __asm__("ficom word [edi]");
        } else {
            *reinterpret_cast<unsigned char*>(eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax7) + *reinterpret_cast<unsigned char*>(&eax7));
            *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) + 40);
        }
    }
    *reinterpret_cast<unsigned char*>(eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax7) + *reinterpret_cast<unsigned char*>(&eax7));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1) = 0xff;
    *reinterpret_cast<unsigned char*>(eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax7) + *reinterpret_cast<unsigned char*>(&eax7));
    goto addr_40276b_3;
}

void fun_4027c9(unsigned char* ecx) {
    int1_t less2;
    signed char* eax3;
    signed char* eax4;
    signed char al5;
    signed char* eax6;
    signed char al7;
    int1_t less8;
    int32_t edx9;
    unsigned char* eax10;
    int32_t* esi11;
    int32_t* esi12;
    int32_t esi13;
    unsigned char* ebx14;
    signed char bh15;
    int32_t esi16;
    signed char* edx17;
    signed char* edx18;
    signed char dl19;
    signed char* edx20;
    signed char* edx21;
    signed char bl22;
    signed char* ebp23;
    signed char* ebp24;
    unsigned char tmp8_25;
    signed char dl26;
    int1_t cf27;
    unsigned char* esi28;
    signed char* esi29;
    unsigned char al30;
    unsigned char tmp8_31;
    signed char* esi32;
    uint1_t cf33;
    unsigned char* esi34;
    unsigned char* esi35;
    unsigned char* esi36;
    signed char* esi37;
    signed char* eax38;
    signed char dl39;
    signed char* edx40;
    signed char* edx41;

    if (less2) {
        *eax3 = reinterpret_cast<signed char>(*eax4 + al5);
        *reinterpret_cast<signed char*>(&eax6) = reinterpret_cast<signed char>(al7 + 2);
        less8 = *reinterpret_cast<signed char*>(&eax6) < 0 != __intrinsic();
        if (less8) {
            if (!less8) {
                addr_4027ee_4:
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1) = 0xff;
                *eax6 = reinterpret_cast<signed char>(*eax6 + edx9);
                *eax6 = reinterpret_cast<signed char>(*eax6 + *reinterpret_cast<signed char*>(&eax6));
                *eax6 = reinterpret_cast<signed char>(*eax6 + *reinterpret_cast<signed char*>(&eax6));
                goto addr_4027f5_5;
            } else {
                *eax6 = reinterpret_cast<signed char>(*eax6 + *reinterpret_cast<signed char*>(&eax6));
                *reinterpret_cast<signed char*>(&eax6) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax6) + 2);
                if (*reinterpret_cast<signed char*>(&eax6) < 0 != __intrinsic()) {
                    addr_4027f5_5:
                    *eax6 = reinterpret_cast<signed char>(*eax6 + *reinterpret_cast<signed char*>(&eax6));
                    eax10 = reinterpret_cast<unsigned char*>(eax6 - 0x1a17002d);
                    *eax10 = reinterpret_cast<unsigned char>(*eax10 + *reinterpret_cast<unsigned char*>(&eax10));
                    *esi11 = *esi12 + esi13;
                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx14) + 1) = reinterpret_cast<signed char>(bh15 + *reinterpret_cast<signed char*>(esi16 + reinterpret_cast<int32_t>(ecx)));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebx14) + reinterpret_cast<int32_t>(eax10)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx14) + reinterpret_cast<int32_t>(eax10)) + *reinterpret_cast<unsigned char*>(&eax10));
                    *edx17 = reinterpret_cast<signed char>(*edx18 - dl19);
                    *edx20 = reinterpret_cast<signed char>(*edx21 + *reinterpret_cast<signed char*>(&ecx));
                    *reinterpret_cast<unsigned char*>(&eax10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax10) - *eax10);
                    *ebx14 = reinterpret_cast<unsigned char>(*ebx14 + bl22);
                    *ebx14 = reinterpret_cast<unsigned char>(*ebx14 ^ *reinterpret_cast<unsigned char*>(&eax10));
                    *ebp23 = reinterpret_cast<signed char>(*ebp24 + *reinterpret_cast<signed char*>(&ecx));
                    *eax10 = reinterpret_cast<unsigned char>(*eax10 + *reinterpret_cast<unsigned char*>(&eax10));
                    *reinterpret_cast<unsigned char*>(&eax10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax10) | *eax10);
                    tmp8_25 = reinterpret_cast<unsigned char>(*ecx + dl26);
                    cf27 = tmp8_25 < *ecx;
                    *ecx = tmp8_25;
                    if (cf27) {
                        *eax10 = reinterpret_cast<unsigned char>(*eax10 + *reinterpret_cast<unsigned char*>(&eax10));
                        *eax10 = reinterpret_cast<unsigned char>(*eax10 + *reinterpret_cast<unsigned char*>(&eax10));
                        *reinterpret_cast<unsigned char*>(&eax10) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax10) + 0x6f)));
                        *esi28 = reinterpret_cast<unsigned char>(*esi29 + *reinterpret_cast<unsigned char*>(&eax10));
                        *eax10 = reinterpret_cast<unsigned char>(*eax10 + *reinterpret_cast<unsigned char*>(&eax10));
                    }
                } else {
                    *eax6 = reinterpret_cast<signed char>(*eax6 + *reinterpret_cast<signed char*>(&eax6));
                    *reinterpret_cast<signed char*>(&eax6) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax6) + 40);
                    *eax6 = reinterpret_cast<signed char>(*eax6 + *reinterpret_cast<signed char*>(&eax6));
                    goto addr_4027ee_4;
                }
            }
            al30 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax10) + 0x6f)));
            tmp8_31 = reinterpret_cast<unsigned char>(*esi32 + al30);
            cf33 = reinterpret_cast<uint1_t>(tmp8_31 < *esi34);
            *esi35 = tmp8_31;
            __asm__("outsd ");
            *esi36 = reinterpret_cast<unsigned char>(*esi37 + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(al30)) + cf33));
            __asm__("ficom word [edi]");
        } else {
            *eax6 = reinterpret_cast<signed char>(*eax6 + *reinterpret_cast<signed char*>(&eax6));
            *reinterpret_cast<signed char*>(&eax38) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax6) + 6);
            *eax38 = reinterpret_cast<signed char>(*eax38 - dl39);
        }
    }
    *edx40 = reinterpret_cast<signed char>(*edx41 + *reinterpret_cast<signed char*>(&ecx));
    __asm__("ficom word [ebx]");
}

struct s15 {
    void* f0;
    signed char[101169154] pad101169155;
    unsigned char f607b803;
};

struct s16 {
    unsigned char f0;
    signed char[101061635] pad101061636;
    unsigned char f6061404;
    signed char[67251711] pad168313348;
    unsigned char fa084204;
};

struct s17 {
    signed char[83] pad83;
    unsigned char f53;
};

struct s18 {
    signed char[83] pad83;
    signed char f53;
};

struct s19 {
    void* f0;
    signed char[23] pad24;
    unsigned char f18;
};

struct s20 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s21 {
    void* f0;
    signed char[1409286167] pad1409286168;
    unsigned char f54000018;
};

struct s22 {
    signed char[85] pad85;
    uint32_t f55;
};

void* ga090b;

struct s23 {
    unsigned char f0;
    signed char[102] pad103;
    int32_t f67;
    signed char[101049239] pad101049346;
    unsigned char f605e402;
    signed char[127743] pad101177090;
    unsigned char f607d702;
    signed char[8399107] pad109576198;
    unsigned char f6880006;
};

unsigned char g6c00;

struct s24 {
    unsigned char f0;
    signed char[101177091] pad101177092;
    signed char f607d704;
};

uint40_t g0;

unsigned char g607d705;

struct s25 {
    signed char[1] pad1;
    void* f1;
    signed char[1] pad3;
    unsigned char f3;
};

struct s26 {
    signed char[3] pad3;
    unsigned char f3;
};

struct s27 {
    signed char[3] pad3;
    signed char f3;
};

struct s28 {
    signed char[395383] pad395383;
    void* f60877;
};

struct s29 {
    void* f0;
    signed char[16793861] pad16793862;
    unsigned char f1004106;
    signed char[83969023] pad100762886;
    unsigned char f6018506;
};

struct s30 {
    void* f0;
    signed char[7] pad8;
    void* f8;
};

int16_t ga084201;

int16_t ga0841ff;

struct s31 {
    signed char[154075150] pad154075150;
    unsigned char f92f000e;
};

struct s32 {
    signed char[2561] pad2561;
    unsigned char fa01;
};

int16_t g141083fc;

int16_t g282107f7;

int16_t g282107f5;

int16_t g282107f3;

void fun_402842(struct s15* ecx) {
    void* esp2;
    int1_t less3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    void* al8;
    void** eax9;
    void* tmp8_10;
    uint1_t cf11;
    signed char* edx12;
    signed char* edx13;
    signed char ah14;
    void** eax15;
    void* esp16;
    unsigned char* eax17;
    struct s16* ebx18;
    void* bh19;
    int32_t edx20;
    int32_t edx21;
    signed char* edx22;
    signed char* edx23;
    signed char dl24;
    unsigned char* edx25;
    signed char* edx26;
    unsigned char* eax27;
    struct s17* edx28;
    struct s18* edx29;
    unsigned char* edx30;
    void* edx31;
    struct s19* eax32;
    void* tmp8_33;
    uint1_t cf34;
    signed char* eax35;
    signed char dl36;
    unsigned char* edx37;
    signed char* edx38;
    struct s20* edx39;
    int32_t ebp40;
    void* tmp8_41;
    uint1_t cf42;
    struct s21* eax43;
    struct s22* edi44;
    struct s23* esi45;
    void* tmp8_46;
    uint1_t cf47;
    unsigned char* esi48;
    unsigned char* esi49;
    uint32_t esi50;
    unsigned char tmp8_51;
    signed char bl52;
    unsigned char ah53;
    signed char ah54;
    int1_t zf55;
    struct s24* eax56;
    void* esp57;
    unsigned char tmp8_58;
    signed char bl59;
    unsigned char al60;
    void* bl61;
    void* bl62;
    struct s25* edx63;
    struct s26* edi64;
    struct s27* edi65;
    void* eax66;
    struct s28* eax67;
    struct s29* eax68;
    unsigned char* eax69;
    int32_t edi70;
    int32_t edi71;
    unsigned char* edi72;
    signed char* edi73;
    struct s30* edx74;
    void** eax75;
    int16_t cs76;
    int16_t es77;
    void** edi78;
    struct s31* eax79;
    struct s31* edi80;
    unsigned char* eax81;
    void* bl82;
    signed char* eax83;
    int16_t cs84;
    int16_t es85;
    signed char* tmp32_86;
    signed char* eax87;
    void** eax88;
    unsigned char tmp8_89;
    uint1_t cf90;
    void** tmp32_91;
    void** eax92;
    void* tmp8_93;
    uint1_t cf94;
    void* tmp32_95;
    uint1_t cf96;
    void* tmp32_97;
    uint1_t cf98;
    void* tmp8_99;
    uint1_t cf100;

    esp2 = __zero_stack_offset();
    if (!less3) {
        addr_402855_2:
    } else {
        *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
        *reinterpret_cast<void**>(&eax7) = reinterpret_cast<void*>(reinterpret_cast<signed char>(al8) + 2);
        if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax7)) < 0 != __intrinsic()) {
            *reinterpret_cast<void**>(&eax9) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax7)) + 2);
            if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax9)) < reinterpret_cast<signed char>(0) == __intrinsic()) {
                *eax9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax9) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax9)));
                *reinterpret_cast<void**>(&eax9) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax9)) + 40);
                esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4);
                *eax9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax9) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax9)));
                *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(0xff);
                *eax9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax9) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax9)));
                tmp8_10 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax9)));
                cf11 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_10) < reinterpret_cast<unsigned char>(ecx->f0));
                ecx->f0 = tmp8_10;
                *eax9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax9) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax9))) + cf11);
                *eax9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax9) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax9)));
                *eax9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax9) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax9)));
            }
            *edx12 = reinterpret_cast<signed char>(*edx13 + ah14);
            *reinterpret_cast<void**>(&eax15) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax9)) & reinterpret_cast<unsigned char>(*eax9));
            esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) + 2);
            *reinterpret_cast<void**>(&eax17) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax15)) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax15) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax15)) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax15))))));
            ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax17)));
            *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx18) + 1) = reinterpret_cast<void*>(reinterpret_cast<signed char>(bh19) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx20 + edx21)));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebx18) + reinterpret_cast<int32_t>(eax17)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx18) + reinterpret_cast<int32_t>(eax17)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax17)));
            *edx22 = reinterpret_cast<signed char>(*edx23 - dl24);
            *edx25 = reinterpret_cast<unsigned char>(*edx26 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            *reinterpret_cast<unsigned char*>(&eax27) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax17)) - *eax17);
            edx28->f53 = reinterpret_cast<unsigned char>(edx29->f53 + *reinterpret_cast<unsigned char*>(&eax27));
            edx30 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx31) - 1 + 1);
            *eax27 = reinterpret_cast<unsigned char>(*eax27 + reinterpret_cast<int32_t>(eax27));
            *eax27 = reinterpret_cast<unsigned char>(*eax27 + reinterpret_cast<int32_t>(eax27));
            *eax27 = reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<unsigned char*>(&eax27));
            *eax27 = reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<unsigned char*>(&eax27));
            *reinterpret_cast<void**>(&eax32) = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax27)));
            tmp8_33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
            cf34 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_33) < reinterpret_cast<unsigned char>(eax32->f0));
            eax32->f0 = tmp8_33;
            if (!(cf34 | reinterpret_cast<uint1_t>(eax32->f0 == 0))) 
                goto addr_40289e_8;
        } else {
            *eax7 = reinterpret_cast<signed char>(*eax7 + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax7)));
            *reinterpret_cast<signed char*>(&eax35) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax7)) + 6);
            *eax35 = reinterpret_cast<signed char>(*eax35 - dl36);
            *edx37 = reinterpret_cast<unsigned char>(*edx38 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            __asm__("ficom word [ebx]");
            goto addr_402855_2;
        }
    }
    addr_4028d2_10:
    eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
    edx39 = reinterpret_cast<struct s20*>(reinterpret_cast<uint32_t>(edx30) & *reinterpret_cast<uint32_t*>(ebp40 + 83));
    eax32->f18 = reinterpret_cast<unsigned char>(eax32->f18 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx18) + 1)));
    tmp8_41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
    cf42 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_41) < reinterpret_cast<unsigned char>(eax32->f0));
    eax32->f0 = tmp8_41;
    eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32))) + cf42);
    eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
    eax43 = reinterpret_cast<struct s21*>(reinterpret_cast<uint32_t>(eax32) & edi44->f55);
    ecx = reinterpret_cast<struct s15*>(reinterpret_cast<int32_t>(ecx) - 1);
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax43) + 0x54000018) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax43) + 0x54000018) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    *reinterpret_cast<void**>(&eax43) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43))));
    ebx18->f0 = reinterpret_cast<unsigned char>(ebx18->f0 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax43) + 1));
    edx30 = &edx39->f1;
    __asm__("insb ");
    __asm__("outsd ");
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    *reinterpret_cast<void**>(&eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)));
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    ga090b = *reinterpret_cast<void**>(&eax43);
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    __asm__("cli ");
    ebx18->f0 = reinterpret_cast<unsigned char>(ebx18->f0 + reinterpret_cast<uint32_t>(esi45));
    esi45->f0 = reinterpret_cast<unsigned char>(esi45->f0 + *reinterpret_cast<unsigned char*>(&edx30));
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<uint32_t>(eax43));
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    *reinterpret_cast<void**>(&eax43) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43))));
    tmp8_46 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    cf47 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_46) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)));
    *reinterpret_cast<void**>(eax43) = tmp8_46;
    *reinterpret_cast<void**>(&eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)))) + cf47);
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) + 1 - 4 + 2 - 2);
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    ebx18->f0 = reinterpret_cast<unsigned char>(ebx18->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    *edx30 = reinterpret_cast<unsigned char>(*edx30 + *reinterpret_cast<unsigned char*>(&edx30));
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    *reinterpret_cast<void**>(&eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)));
    *reinterpret_cast<void**>(eax43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax43)));
    eax32 = reinterpret_cast<struct s19*>(reinterpret_cast<uint32_t>(eax43) - 0xa000000);
    goto addr_402936_11;
    addr_40289e_8:
    *esi48 = reinterpret_cast<unsigned char>(*esi49 ^ 0xff);
    esi45 = reinterpret_cast<struct s23*>(esi50 ^ reinterpret_cast<unsigned char>(eax32->f0) ^ reinterpret_cast<unsigned char>(ecx->f0));
    eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
    tmp8_51 = reinterpret_cast<unsigned char>(g6c00 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
    g6c00 = tmp8_51;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(ecx)) + bl52);
    ebx18->f0 = reinterpret_cast<unsigned char>(ebx18->f0 + ah53);
    *reinterpret_cast<void**>(&eax32) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) | reinterpret_cast<uint32_t>(eax32));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax32) + 1) = reinterpret_cast<unsigned char>(ah54 + *reinterpret_cast<unsigned char*>(&edx30));
    eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) | reinterpret_cast<uint32_t>(eax32));
    ebx18->f0 = reinterpret_cast<unsigned char>(ebx18->f0 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax32) + 1));
    zf55 = ebx18->f0 == 0;
    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4);
    if (zf55) {
        addr_402936_11:
        eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        ebx18->f0 = reinterpret_cast<unsigned char>(ebx18->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax32) + reinterpret_cast<uint32_t>(eax32)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax32) + reinterpret_cast<uint32_t>(eax32)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        esi45->f0 = reinterpret_cast<unsigned char>(esi45->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax32) + reinterpret_cast<uint32_t>(eax32)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax32) + reinterpret_cast<uint32_t>(eax32)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        eax32->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
        eax56 = reinterpret_cast<struct s24*>(reinterpret_cast<uint32_t>(eax32) + reinterpret_cast<unsigned char>(eax32->f0));
        eax56->f0 = reinterpret_cast<unsigned char>(eax56->f0 + *reinterpret_cast<unsigned char*>(&eax56));
        *reinterpret_cast<unsigned char*>(&eax56) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax56)));
        eax56->f0 = reinterpret_cast<unsigned char>(eax56->f0 + *reinterpret_cast<unsigned char*>(&eax56));
        eax56->f0 = reinterpret_cast<unsigned char>(eax56->f0 + *reinterpret_cast<unsigned char*>(&eax56));
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&g0) + 1) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&g0) + 1) ^ reinterpret_cast<uint32_t>(eax56);
        eax56->f0 = reinterpret_cast<unsigned char>(eax56->f0 + *reinterpret_cast<unsigned char*>(&eax56));
        esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 2 - 2);
        eax56->f607d704 = reinterpret_cast<signed char>(eax56->f607d704 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax56) + 1));
        tmp8_58 = reinterpret_cast<unsigned char>(g607d705 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
        g607d705 = tmp8_58;
        *reinterpret_cast<unsigned char*>(ebp40 + 3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp40 + 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx18) + 1)));
        if (!__intrinsic()) {
            __asm__("lldt word [eax]");
            eax56->f0 = reinterpret_cast<unsigned char>(eax56->f0 | *reinterpret_cast<unsigned char*>(&eax56));
            esi45->f0 = reinterpret_cast<unsigned char>(esi45->f0 + *reinterpret_cast<unsigned char*>(&eax56));
        }
    } else {
        ebp40 = esi45->f67 * 0x73;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx18) + reinterpret_cast<uint32_t>(edx30) + 0x4dc0000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx18) + reinterpret_cast<uint32_t>(edx30) + 0x4dc0000) + bl59);
        goto addr_4028d2_10;
    }
    *reinterpret_cast<signed char*>(ebp40 + 0x6061403) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp40 + 0x6061403) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax56) + 1));
    ebx18->f6061404 = reinterpret_cast<unsigned char>(ebx18->f6061404 + *reinterpret_cast<unsigned char*>(&eax56));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp57) + reinterpret_cast<uint32_t>(eax56) + 20) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp57) + reinterpret_cast<uint32_t>(eax56) + 20) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax56) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax56) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax56) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx30) + 1));
    al60 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax56) + 20);
    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) + reinterpret_cast<unsigned char>(bl61));
    *reinterpret_cast<unsigned char*>(&eax56) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al60 + al60) + 20) + 20);
    *reinterpret_cast<void**>(&ebx18) = reinterpret_cast<void*>(reinterpret_cast<signed char>(bl62) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx18) + 1)));
    edx63 = reinterpret_cast<struct s25*>(reinterpret_cast<uint32_t>(edx30) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi45) + reinterpret_cast<uint32_t>(eax56))));
    ecx->f607b803 = reinterpret_cast<unsigned char>(ecx->f607b803 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx63)));
    edi64->f3 = reinterpret_cast<unsigned char>(edi65->f3 + 0xff);
    esi45->f0 = reinterpret_cast<unsigned char>(esi45->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx63)));
    eax66 = reinterpret_cast<void*>(0x501c0679);
    __asm__("in al, 0x5");
    *reinterpret_cast<void**>(&edx63) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx63)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx18)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax66) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax66) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax66) + 1));
    eax67 = reinterpret_cast<struct s28*>(reinterpret_cast<int32_t>(eax66) + 0x3ca0006);
    __asm__("xlatb ");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx63) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx63) + 1) + *reinterpret_cast<signed char*>(&eax67));
    eax68 = reinterpret_cast<struct s29*>(&eax67->f60877);
    __asm__("daa ");
    __asm__("xlatb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebx18) + reinterpret_cast<int32_t>(eax68) - 41) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx18) + reinterpret_cast<int32_t>(eax68) - 41) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx63)));
    esi45->f605e402 = reinterpret_cast<unsigned char>(esi45->f605e402 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx18) + 1)));
    esi45->f607d702 = reinterpret_cast<unsigned char>(esi45->f607d702 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    esi45->f0 = reinterpret_cast<unsigned char>(esi45->f0 + 0xff);
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx18) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx18) + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx63)));
    *reinterpret_cast<unsigned char*>(&eax68) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax68) | reinterpret_cast<unsigned char>(eax68->f0));
    eax69 = &esi45->f6880006;
    __asm__("in al, 0x5");
    *reinterpret_cast<unsigned char*>(edi70 + 0x607d706) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(edi71 + 0x607d706) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax69) + 1)));
    *edi72 = reinterpret_cast<unsigned char>(*edi73 + 0xff);
    *reinterpret_cast<unsigned char*>(&eax69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax69) + 0x70);
    *reinterpret_cast<unsigned char*>(&eax69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax69) | *eax69);
    edx63->f3 = reinterpret_cast<unsigned char>(edx63->f3 + *reinterpret_cast<unsigned char*>(&eax69));
    edx74 = reinterpret_cast<struct s30*>(&edx63->f1);
    edx74->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx74->f0) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    ebx18->fa084204 = reinterpret_cast<unsigned char>(ebx18->fa084204 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<void*>(0xff + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax69) + 1)));
    eax75 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax69) + reinterpret_cast<int32_t>(edx74->f8));
    ga084201 = cs76;
    *reinterpret_cast<unsigned char*>(ebp40 + 0xe07f709) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp40 + 0xe07f709) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx18) + 1)));
    *reinterpret_cast<unsigned char*>(&eax75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax75) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
    ga0841ff = es77;
    edi78 = eax75;
    eax79 = edi80;
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) | *reinterpret_cast<unsigned char*>(&eax79));
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx74) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx74) + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx74)));
    eax81 = &eax79->f92f000e;
    __asm__("in al, 0x5");
    *reinterpret_cast<unsigned char*>(&eax81) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax81) | *eax81);
    *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s32**>(&edi78))->fa01) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s32**>(&edi78))->fa01) + *reinterpret_cast<unsigned char*>(&eax81));
    eax68->f6018506 = reinterpret_cast<unsigned char>(eax68->f6018506 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx18) + 1)));
    bl82 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx18)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
    __asm__("insb ");
    eax83 = reinterpret_cast<signed char*>(eax81 + 0x6053e + 0x54f0006);
    ecx->f0 = *reinterpret_cast<void**>(&ecx);
    g141083fc = cs84;
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
    es85 = g141083fc;
    g141083fc = es85;
    *reinterpret_cast<void**>(&edx74) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx74)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax83) + 1)));
    tmp32_86 = eax83 + 0x58f0006;
    eax87 = tmp32_86;
    __asm__("in al, 0x5");
    *reinterpret_cast<unsigned char*>(&eax87) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax87) + *eax87) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_86) < reinterpret_cast<uint32_t>(eax83)));
    g282107f7 = es85;
    *eax87 = reinterpret_cast<signed char>(*eax87 + 1);
    g282107f5 = es85;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax87) + reinterpret_cast<uint32_t>(eax87) - 28) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax87) + reinterpret_cast<uint32_t>(eax87) - 28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    eax88 = edi78;
    eax68->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax68->f0) | *reinterpret_cast<unsigned char*>(&eax88));
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx74) + 1)));
    __asm__("in al, 0x5");
    *reinterpret_cast<unsigned char*>(&eax88) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax88) | reinterpret_cast<unsigned char>(*eax88));
    __asm__("out 0x8, al");
    __asm__("insd ");
    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) + reinterpret_cast<unsigned char>(edx74->f0));
    edx74->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx74->f0) + reinterpret_cast<unsigned char>(bl82));
    *reinterpret_cast<unsigned char*>(ebp40 + 2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp40 + 2) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
    g282107f3 = es85;
    tmp8_89 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(ecx) + 0x60614) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax88) + 1));
    cf90 = reinterpret_cast<uint1_t>(tmp8_89 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(ecx) + 0x60614));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(ecx) + 0x60614) = tmp8_89;
    tmp32_91 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax88) + reinterpret_cast<unsigned char>(*eax88) + cf90);
    eax92 = tmp32_91;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_91) < reinterpret_cast<uint32_t>(eax88)) | reinterpret_cast<uint1_t>(eax92 == 0))) {
        addr_402ac8_16:
        *eax92 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax92)));
        *eax92 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<uint32_t>(eax92));
        *eax92 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<uint32_t>(eax92));
        tmp8_93 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax92)));
        cf94 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_93) < reinterpret_cast<unsigned char>(*eax92));
        *eax92 = tmp8_93;
        *eax92 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax92))) + cf94);
        __asm__("rol dword [0x41069e], cl");
        *eax92 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<uint32_t>(eax92));
        *eax92 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<uint32_t>(eax92));
        tmp32_95 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<uint32_t>(eax92));
        cf96 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_95) < reinterpret_cast<unsigned char>(*eax92));
        *eax92 = tmp32_95;
        *eax92 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax92))) + cf96);
        __asm__("xlatb ");
        eax68->f1004106 = reinterpret_cast<unsigned char>(eax68->f1004106 | reinterpret_cast<unsigned char>(bl82));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax92) + reinterpret_cast<uint32_t>(eax92)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax92) + reinterpret_cast<uint32_t>(eax92)) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax92)));
        tmp32_97 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<uint32_t>(eax92));
        cf98 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_97) < reinterpret_cast<unsigned char>(*eax92));
        *eax92 = tmp32_97;
        *eax92 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax92))) + cf98);
    } else {
        *eax92 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax92)));
        tmp8_99 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax92)));
        cf100 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_99) < reinterpret_cast<unsigned char>(*eax92));
        *eax92 = tmp8_99;
    }
    *eax92 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax92) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax92)));
    goto addr_402ac8_16;
}

void fun_402858() {
    int1_t less1;
    signed char* eax2;
    signed char* eax3;
    signed char al4;

    if (!less1) 
        goto 0x40286b;
    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
}

struct s33 {
    signed char f0;
    void* f1;
    signed char[1090952710] pad1090952712;
    signed char f41069e08;
};

struct s34 {
    signed char[1] pad1;
    unsigned char f1;
};

unsigned char gf00;

struct s35 {
    void* f0;
    unsigned char f1;
    signed char[6] pad8;
    signed char f8;
    signed char[100798207] pad100798216;
    signed char f6020f08;
    signed char[2047] pad100800264;
    signed char f6021708;
};

unsigned char g10000100;

signed char g101e401;

struct s36 {
    void* f0;
    unsigned char f1;
    signed char[101147414] pad101147416;
    unsigned char f6076318;
    signed char[16490223] pad117637640;
    unsigned char f7030208;
    signed char[150929663] pad268567304;
    unsigned char f10020308;
    signed char[536877567] pad268573960;
    unsigned char f10021d08;
    signed char[620818687] pad352521736;
    unsigned char f15030e08;
    signed char[855548663] pad671199488;
    unsigned char f2801b100;
    signed char[671614463] pad805943040;
    unsigned char f3009b700;
};

struct s37 {
    void* f0;
    signed char[31] pad32;
    void* f20;
    signed char[2158047] pad2158080;
    void* f20ee00;
    signed char[31536127] pad33694208;
    unsigned char f2022200;
};

struct s38 {
    void* f0;
    void* f1;
};

struct s39 {
    void* f0;
    signed char[7] pad8;
    signed char f8;
    signed char[4] pad13;
    unsigned char fd;
};

struct s40 {
    void* f0;
    signed char[6] pad7;
    unsigned char f7;
};

struct s41 {
    void* f0;
    signed char[32] pad33;
    unsigned char f21;
};

struct s42 {
    void* f0;
    signed char[6] pad7;
    unsigned char f7;
    signed char[25] pad33;
    signed char f21;
};

unsigned char g20f700;

void* gec000c02;

void* g58001002;

struct s43 {
    void* f0;
    void* f1;
    signed char[7] pad9;
    uint32_t f9;
};

struct s44 {
    unsigned char f0;
    signed char[352329729] pad352329730;
    int32_t f15002002;
    signed char[553648124] pad369106946;
    int32_t f16002002;
};

void** g14002002;

void* g10000;

unsigned char g280000;

struct s45 {
    void* f0;
    signed char[65535] pad65536;
    void* f10000;
};

struct s47 {
    struct s47* f0;
    signed char[101285631] pad101285632;
    unsigned char f6097f00;
    signed char[435757567] pad537043200;
    unsigned char f2002a100;
};

struct s46 {
    void* f0;
    signed char[65535] pad65536;
    struct s47* f10000;
};

struct s48 {
    unsigned char* f0;
    int16_t f4;
};

void fun_402aef(struct s33* ecx) {
    int32_t v2;
    int32_t esi3;
    int32_t esi4;
    unsigned char bl5;
    signed char* edi6;
    signed char* edi7;
    signed char al8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char dl12;
    signed char bh13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    signed char al18;
    void** eax19;
    unsigned char al20;
    void** tmp8_21;
    uint1_t cf22;
    unsigned char* edi23;
    struct s34* edi24;
    void** ecx25;
    unsigned char tmp8_26;
    void* dl27;
    int32_t ebp28;
    int32_t ebp29;
    signed char* edx30;
    signed char* edx31;
    signed char dl32;
    void* dl33;
    struct s35* edx34;
    void* dl35;
    void* bh36;
    unsigned char tmp8_37;
    unsigned char* ebx38;
    signed char* ebx39;
    void* bl40;
    unsigned char* ebx41;
    signed char* ebx42;
    void* bl43;
    unsigned char* eax44;
    unsigned char* tmp32_45;
    unsigned char* eax46;
    void* bl47;
    unsigned char* eax48;
    struct s35* ecx49;
    void* esp50;
    signed char bl51;
    signed char tmp8_52;
    signed char bl53;
    int32_t ebp54;
    int32_t ebp55;
    signed char bh56;
    struct s36* esi57;
    void* esi58;
    uint32_t ebp59;
    int32_t ebx60;
    int32_t ebx61;
    void* dh62;
    void* edi63;
    signed char bl64;
    signed char bl65;
    signed char bl66;
    unsigned char** esp67;
    signed char dh68;
    struct s37* eax69;
    unsigned char** esp70;
    void* dh71;
    void* edi72;
    unsigned char* ebx73;
    unsigned char** esp74;
    signed char bh75;
    signed char bh76;
    void* dh77;
    struct s38* edi78;
    void** ebx79;
    unsigned char** esp80;
    struct s39* edx81;
    struct s37* ecx82;
    void* tmp8_83;
    uint1_t cf84;
    unsigned char** esp85;
    struct s40* eax86;
    struct s40* ebx87;
    void** eax88;
    void** ecx89;
    struct s37* eax90;
    void* tmp8_91;
    void* tmp8_92;
    void* ecx93;
    void* tmp8_94;
    void* tmp8_95;
    uint1_t cf96;
    void* tmp8_97;
    struct s41* ecx98;
    struct s42* eax99;
    unsigned char tmp8_100;
    void* tmp8_101;
    unsigned char** esp102;
    signed char dh103;
    void* tmp8_104;
    uint1_t cf105;
    struct s42* ecx106;
    struct s41* eax107;
    unsigned char* es108;
    void* tmp8_109;
    unsigned char** esp110;
    void* tmp8_111;
    void* tmp8_112;
    void* tmp8_113;
    void* tmp8_114;
    void** eax115;
    void* dh116;
    void* tmp8_117;
    void* tmp8_118;
    void* tmp8_119;
    unsigned char** esp120;
    void* tmp8_121;
    void* tmp8_122;
    void* tmp8_123;
    void* tmp8_124;
    void* tmp8_125;
    void* tmp8_126;
    unsigned char tmp8_127;
    uint1_t cf128;
    void* tmp32_129;
    struct s43* edi130;
    unsigned char* esi131;
    void* tmp8_132;
    void* tmp8_133;
    uint1_t zf134;
    int1_t sf135;
    struct s44* ecx136;
    unsigned char* ecx137;
    void* tmp8_138;
    int1_t sf139;
    unsigned char** esp140;
    void* ebp141;
    void* ebp142;
    signed char dh143;
    void* tmp32_144;
    int1_t cf145;
    void* tmp8_146;
    void* tmp8_147;
    uint1_t zf148;
    unsigned char tmp8_149;
    void* eax150;
    void* eax151;
    uint1_t cf152;
    void** eax153;
    void* tmp8_154;
    uint1_t cf155;
    void* tmp8_156;
    unsigned char* edx157;
    struct s45* eax158;
    unsigned char** esp159;
    void** tmp32_160;
    struct s46* eax161;
    unsigned char* ecx162;
    struct s47* eax163;
    unsigned char al164;
    unsigned char* ebp165;
    struct s47* tmp32_166;
    uint1_t cf167;
    unsigned char** esp168;
    uint1_t cf169;
    unsigned char tmp8_170;
    uint1_t cf171;
    unsigned char tmp8_172;
    uint1_t cf173;
    struct s48* esp174;
    unsigned char tmp8_175;
    uint1_t cf176;
    unsigned char* ecx177;
    int16_t* esp178;
    unsigned char tmp8_179;
    uint1_t cf180;
    unsigned char tmp8_181;
    uint1_t cf182;
    struct s47* tmp32_183;
    struct s47* eax184;
    int16_t es185;
    struct s47* tmp8_186;
    uint1_t cf187;
    struct s47* tmp8_188;
    uint1_t cf189;
    unsigned char* eax190;
    unsigned char tmp8_191;
    uint1_t cf192;
    unsigned char tmp8_193;
    uint1_t cf194;
    unsigned char tmp8_195;
    uint1_t cf196;
    unsigned char* tmp32_197;
    unsigned char* eax198;

    v2 = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<unsigned char*>(esi3 + 0x2004106) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi4 + 0x2004106) | bl5);
    *edi6 = reinterpret_cast<signed char>(*edi7 + al8);
    ecx->f0 = reinterpret_cast<signed char>(ecx->f0 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + dl12);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 0x41069e08) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 0x41069e08) + bh13);
    *reinterpret_cast<signed char*>(eax14 + eax15) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax16 + eax17) + al18);
    *reinterpret_cast<void**>(&eax19) = reinterpret_cast<void*>(static_cast<uint32_t>(al20));
    tmp8_21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax19)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax19)));
    cf22 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_21) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax19)));
    *reinterpret_cast<void***>(eax19) = tmp8_21;
    *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax19)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax19))) + cf22);
    __asm__("int 0x0");
    edi23 = &edi24->f1;
    ecx25 = &ecx->f1;
    tmp8_26 = reinterpret_cast<unsigned char>(gf00 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax19)));
    gf00 = tmp8_26;
    *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax19)) + reinterpret_cast<signed char>(dl27));
    *reinterpret_cast<signed char*>(ebp28 + 0x4107a609) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp29 + 0x4107a609) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx25) + 1));
    *edi23 = reinterpret_cast<unsigned char>(*edi23 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax19)));
    *edx30 = reinterpret_cast<signed char>(*edx31 + dl32);
    *ecx25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ecx25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax19)));
    *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax19)) + reinterpret_cast<signed char>(dl33));
    *reinterpret_cast<void**>(&edx34) = reinterpret_cast<void*>(reinterpret_cast<signed char>(dl35) + reinterpret_cast<unsigned char>(bh36));
    *edi23 = reinterpret_cast<unsigned char>(*edi23 + 6);
    *ecx25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ecx25) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx25)));
    tmp8_37 = reinterpret_cast<unsigned char>(g10000100 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx34)));
    g10000100 = tmp8_37;
    *ebx38 = reinterpret_cast<unsigned char>(*ebx39 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax19)));
    *edi23 = reinterpret_cast<unsigned char>(*edi23 + 10);
    *ecx25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ecx25) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx25)));
    *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax19)) + reinterpret_cast<signed char>(bl40));
    *ebx41 = reinterpret_cast<unsigned char>(*ebx42 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax19)));
    *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax19)) + reinterpret_cast<uint32_t>(edx34));
    *ecx25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ecx25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax19)));
    *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax19)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax19)));
    *ecx25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ecx25) + reinterpret_cast<signed char>(bl43));
    *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax19)) | reinterpret_cast<unsigned char>(eax19));
    eax44 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax19) - (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax19)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax19) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax19)))));
    tmp32_45 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax44) + reinterpret_cast<unsigned char>(*ecx25));
    eax46 = tmp32_45;
    *eax46 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax46 + *reinterpret_cast<signed char*>(&eax46)) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_45) < reinterpret_cast<uint32_t>(eax44)));
    *eax46 = reinterpret_cast<unsigned char>(*eax46 + *reinterpret_cast<signed char*>(&eax46));
    *ecx25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ecx25) + reinterpret_cast<signed char>(bl47));
    eax48 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax46) | 0x3001d00);
    *eax48 = reinterpret_cast<unsigned char>(*eax48 + reinterpret_cast<uint32_t>(edx34));
    edx34->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx34->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx34)));
    *eax48 = reinterpret_cast<unsigned char>(*eax48 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax48)));
    ecx49 = edx34;
    esp50 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 2 - 2 + 2 - 4 + 4);
    ecx49->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx49->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx34)));
    *edi23 = reinterpret_cast<unsigned char>(*edi23 + bl51);
    ecx49->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx49->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax48)));
    tmp8_52 = reinterpret_cast<signed char>(g101e401 + bl53);
    g101e401 = tmp8_52;
    ecx49->f1 = reinterpret_cast<unsigned char>(ecx49->f1 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx34)));
    __asm__("in al, 0x1");
    *eax48 = reinterpret_cast<unsigned char>(*eax48 + reinterpret_cast<uint32_t>(eax48));
    __asm__("aaa ");
    ecx49->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx49->f0) + reinterpret_cast<uint32_t>(eax48));
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx49) + reinterpret_cast<uint32_t>(eax48) + 0xffffffe7) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx49) + reinterpret_cast<uint32_t>(eax48) + 0xffffffe7) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx49) + 1));
    ecx49->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx49->f0) + reinterpret_cast<uint32_t>(edx34));
    *reinterpret_cast<signed char*>(ebp54 + 0x1101e401) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp55 + 0x1101e401) + bh56);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx49) + reinterpret_cast<uint32_t>(ecx49) + 0x101ea) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx49) + reinterpret_cast<uint32_t>(ecx49) + 0x101ea) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx34)));
    esi57 = reinterpret_cast<struct s36*>(reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esi58) + 1) | ebp59);
    ecx49->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx49->f0) + reinterpret_cast<uint32_t>(eax48));
    *reinterpret_cast<signed char*>(ebx60 + 0x601f307) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx61 + 0x601f307) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax48) + 1));
    ecx49->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx49->f0) + reinterpret_cast<unsigned char>(dh62));
    edi63 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi23) + reinterpret_cast<uint32_t>(eax48));
    *reinterpret_cast<void**>(esi57) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(esi57)) + reinterpret_cast<uint32_t>(eax48));
    bl64 = reinterpret_cast<signed char>(bl65 + bl66);
    esp67 = reinterpret_cast<unsigned char**>(reinterpret_cast<int32_t>(esp50) + reinterpret_cast<int32_t>(esp50) - 2);
    *esp67 = *reinterpret_cast<unsigned char**>(&v2);
    __asm__("sti ");
    *reinterpret_cast<void**>(esi57) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(esi57)) + reinterpret_cast<uint32_t>(eax48));
    edx34->f8 = reinterpret_cast<signed char>(edx34->f8 + dh68);
    ecx49->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx49->f0) + 1);
    *eax48 = reinterpret_cast<unsigned char>(*eax48 + reinterpret_cast<uint32_t>(eax48));
    *reinterpret_cast<void**>(&eax48) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax48))));
    eax69 = reinterpret_cast<struct s37*>(reinterpret_cast<uint32_t>(eax48) + reinterpret_cast<unsigned char>(edx34->f0));
    esp70 = esp67 - 1;
    *esp70 = *reinterpret_cast<unsigned char**>(&v2);
    ecx49->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx49->f0) + reinterpret_cast<unsigned char>(dh71));
    edi72 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi63) + reinterpret_cast<uint32_t>(eax69));
    *reinterpret_cast<void**>(esi57) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(esi57)) + reinterpret_cast<uint32_t>(eax69));
    *reinterpret_cast<signed char*>(&ebx73) = reinterpret_cast<signed char>(bl64 + bl64);
    esp74 = esp70 - 1;
    *esp74 = *reinterpret_cast<unsigned char**>(&v2);
    __asm__("sti ");
    *reinterpret_cast<void**>(esi57) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(esi57)) + reinterpret_cast<uint32_t>(eax69));
    edx34->f6020f08 = reinterpret_cast<signed char>(edx34->f6020f08 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx49) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx73) + 1) = reinterpret_cast<signed char>(bh75 + bh76);
    *ebx73 = reinterpret_cast<unsigned char>(*ebx73 | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx34)));
    *reinterpret_cast<void**>(&eax69) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax69)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(esi57)));
    ecx49->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx49->f0) + reinterpret_cast<unsigned char>(dh77));
    edi78 = reinterpret_cast<struct s38*>(reinterpret_cast<uint32_t>(edi72) + reinterpret_cast<uint32_t>(eax69));
    *reinterpret_cast<void**>(esi57) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(esi57)) + reinterpret_cast<uint32_t>(eax69));
    *reinterpret_cast<signed char*>(&ebx79) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ebx73) + *reinterpret_cast<signed char*>(&ebx73));
    esp80 = esp74 - 1;
    *esp80 = *reinterpret_cast<unsigned char**>(&v2);
    __asm__("sti ");
    *reinterpret_cast<void**>(esi57) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(esi57)) + reinterpret_cast<uint32_t>(eax69));
    edx34->f6021708 = reinterpret_cast<signed char>(edx34->f6021708 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx49) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx79) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx73) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx73) + 1));
    *ebx79 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ebx79) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx34)));
    *reinterpret_cast<void**>(&edx81) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx34)) + reinterpret_cast<unsigned char>(eax69->f20));
    eax69->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax69->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax69)));
    eax69->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax69->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax69)));
    ecx82 = eax69;
    tmp8_83 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi78->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx82)));
    cf84 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_83) < reinterpret_cast<unsigned char>(edi78->f0));
    edi78->f0 = tmp8_83;
    esp85 = esp80 - 1;
    *esp85 = *reinterpret_cast<unsigned char**>(&v2);
    eax86 = reinterpret_cast<struct s40*>(reinterpret_cast<uint32_t>(ecx49) - (reinterpret_cast<unsigned char>(edx81->f0) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(ecx49) < reinterpret_cast<unsigned char>(edx81->f0) + cf84)));
    eax86->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax86->f0) + reinterpret_cast<uint32_t>(eax86));
    ebx87 = eax86;
    eax88 = ebx79;
    *eax88 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax88) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax88)));
    *eax88 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax88) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax88)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x6076318) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x6076318) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax88)));
    edx81->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx81->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax88)));
    *eax88 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax88) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)));
    ecx89 = eax88;
    eax90 = ecx82;
    eax90->f2022200 = reinterpret_cast<unsigned char>(eax90->f2022200 | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    eax90->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax90->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx87) + 1)));
    tmp8_91 = eax90->f0;
    eax90->f0 = *reinterpret_cast<void**>(&ecx89);
    ebx87->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx87->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax90) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax90) + 1) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    eax90->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax90->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    eax90->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax90->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x10020308) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x10020308) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    ebx87->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx87->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx89) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx89) + 1) + reinterpret_cast<unsigned char>(tmp8_91));
    eax90->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax90->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    eax90->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax90->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x6076318) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x6076318) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax90) + reinterpret_cast<uint32_t>(eax90)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax90) + reinterpret_cast<uint32_t>(eax90)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    __asm__("aad 0x20");
    eax90->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax90->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    eax90->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax90->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    tmp8_92 = eax90->f0;
    eax90->f0 = tmp8_91;
    *reinterpret_cast<void**>(&ecx89) = tmp8_92;
    ecx93 = reinterpret_cast<void*>(ecx89 - 1);
    *reinterpret_cast<void**>(&eax90) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)) - reinterpret_cast<unsigned char>(edx81->f0))));
    __asm__("frstor [eax]");
    eax90->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax90->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    eax90->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax90->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    tmp8_94 = eax90->f0;
    eax90->f0 = *reinterpret_cast<void**>(&ecx93);
    eax90->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax90->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90))) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(edx81->f0) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90))));
    *reinterpret_cast<void**>(&eax90) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90))));
    __asm__("out 0x20, al");
    eax90->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax90->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    tmp8_95 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax90->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
    cf96 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_95) < reinterpret_cast<unsigned char>(eax90->f0));
    eax90->f0 = tmp8_95;
    tmp8_97 = eax90->f0;
    eax90->f0 = tmp8_94;
    *reinterpret_cast<void**>(&ecx93) = tmp8_97;
    edx81->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(edx81->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90))) + cf96);
    ecx98 = reinterpret_cast<struct s41*>(reinterpret_cast<int32_t>(ecx93) - 1);
    eax99 = reinterpret_cast<struct s42*>(&eax90->f20ee00);
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x10021d08) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x10021d08) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    tmp8_100 = reinterpret_cast<unsigned char>(g20f700 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    g20f700 = tmp8_100;
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x6076318) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x6076318) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    *reinterpret_cast<void**>(esi57) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(esi57)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx87) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx87) + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx87) + 1)));
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x7030208) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x7030208) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    *reinterpret_cast<void**>(esi57) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(esi57)) + reinterpret_cast<uint32_t>(eax99));
    edi78->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi78->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) & reinterpret_cast<uint32_t>(eax99));
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x15030e08) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x15030e08) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    *reinterpret_cast<void**>(esi57) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(esi57)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx81)));
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) & reinterpret_cast<uint32_t>(eax99));
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x6076318) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x6076318) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    edi78->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi78->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)));
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) & reinterpret_cast<uint32_t>(eax99));
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x2801b100) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x2801b100) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx81)));
    *reinterpret_cast<void**>(&eax99) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)) + reinterpret_cast<unsigned char>(edi78->f0));
    eax99->f21 = reinterpret_cast<signed char>(eax99->f21 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx98) + 1));
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    tmp8_101 = eax99->f0;
    eax99->f0 = *reinterpret_cast<void**>(&ebx87);
    *reinterpret_cast<void**>(&ebx87) = tmp8_101;
    __asm__("arpl [edi], ax");
    esp102 = esp85 - 1;
    *esp102 = *reinterpret_cast<unsigned char**>(&v2);
    edi78->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi78->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    eax99->f21 = reinterpret_cast<signed char>(eax99->f21 + dh103);
    eax99->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    tmp8_104 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax99->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax99)));
    cf105 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_104) < reinterpret_cast<unsigned char>(eax99->f0));
    eax99->f0 = tmp8_104;
    ecx106 = eax99;
    eax107 = ecx98;
    ecx106->f7 = reinterpret_cast<unsigned char>(ecx106->f7 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx106) + 1) + reinterpret_cast<uint1_t>(ecx106->f7 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx106) + 1) + cf105))));
    *reinterpret_cast<void**>(&eax107) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax107)) - 2);
    es108 = *esp102;
    eax107->f21 = reinterpret_cast<unsigned char>(eax107->f21 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx81)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x6076318) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x6076318) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax107)));
    edi78->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi78->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax107)));
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax107) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax107) + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)));
    eax107->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax107->f0) & reinterpret_cast<uint32_t>(eax107));
    eax107->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax107->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax107)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x3009b700) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 0x3009b700) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax107)));
    *reinterpret_cast<void**>(&eax107) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax107)) + reinterpret_cast<unsigned char>(edi78->f0));
    ebx87->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx87->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax107) + 1)));
    eax107->f0 = *reinterpret_cast<void**>(&eax107);
    __asm__("aaa ");
    *reinterpret_cast<void**>(&ecx106) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx106)) + reinterpret_cast<unsigned char>(edx81->f0));
    tmp8_109 = *reinterpret_cast<void**>(&g0);
    *reinterpret_cast<void**>(&g0) = *reinterpret_cast<void**>(&ebx87);
    __asm__("arpl [edi], ax");
    esp110 = esp102 + 1 - 1;
    *esp110 = es108;
    tmp8_111 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx106)));
    *reinterpret_cast<void**>(&g0) = tmp8_111;
    __asm__("aam 0x25");
    tmp8_112 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0))));
    *reinterpret_cast<void**>(&g0) = tmp8_112;
    tmp8_113 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0))));
    *reinterpret_cast<void**>(&g0) = tmp8_113;
    *reinterpret_cast<void**>(&g0) = reinterpret_cast<void*>(0xdf);
    tmp8_114 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx87) + 1)) + reinterpret_cast<unsigned char>(gec000c02));
    eax115 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void**>(&g0) = reinterpret_cast<void*>(0xa5);
    *reinterpret_cast<unsigned char*>(&edx81->f0 + 13) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx81->f0 + 13)));
    edi78->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi78->f0) + reinterpret_cast<unsigned char>(dh116));
    tmp8_117 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0))));
    *reinterpret_cast<void**>(&g0) = tmp8_117;
    tmp8_118 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0))));
    *reinterpret_cast<void**>(&g0) = tmp8_118;
    tmp8_119 = *reinterpret_cast<void**>(&g0);
    *reinterpret_cast<void**>(&g0) = tmp8_109;
    *reinterpret_cast<void**>(&ebx87) = tmp8_119;
    __asm__("arpl [edi], ax");
    esp120 = esp110 - 1;
    *esp120 = es108;
    tmp8_121 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx81)));
    *reinterpret_cast<void**>(&g0) = tmp8_121;
    edi78->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi78->f0) + reinterpret_cast<unsigned char>(tmp8_114));
    tmp8_122 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0))));
    *reinterpret_cast<void**>(&g0) = tmp8_122;
    tmp8_123 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0))));
    *reinterpret_cast<void**>(&g0) = tmp8_123;
    *reinterpret_cast<void**>(&g0) = reinterpret_cast<void*>(0xdf);
    tmp8_124 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(tmp8_114) + reinterpret_cast<unsigned char>(g58001002));
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx87) + 1) = tmp8_124;
    tmp8_125 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0))));
    *reinterpret_cast<void**>(&g0) = tmp8_125;
    tmp8_126 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0))));
    *reinterpret_cast<void**>(&g0) = tmp8_126;
    *reinterpret_cast<void**>(&g0) = reinterpret_cast<void*>(0xa5);
    tmp8_127 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g0) + 2) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx81)));
    cf128 = reinterpret_cast<uint1_t>(tmp8_127 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g0) + 2));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g0) + 2) = tmp8_127;
    tmp32_129 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0)))) + cf128);
    *reinterpret_cast<void**>(&g0) = tmp32_129;
    edi78->f0 = *reinterpret_cast<void**>(esi57);
    edi130 = reinterpret_cast<struct s43*>(&edi78->f1);
    esi131 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi57) + 1);
    tmp8_132 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0))));
    *reinterpret_cast<void**>(&g0) = tmp8_132;
    tmp8_133 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0))));
    *reinterpret_cast<void**>(&g0) = tmp8_133;
    zf134 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&g0) == 0);
    sf135 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(&g0)) < reinterpret_cast<signed char>(0);
    ecx136 = reinterpret_cast<struct s44*>(reinterpret_cast<uint32_t>(ecx106) - 1);
    if (reinterpret_cast<uint1_t>(!!ecx136) & zf134) {
        goto addr_402d56_11;
    }
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(sf135 != __intrinsic()) | zf134)) {
        addr_402d5f_13:
        ecx137 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx136) - 1);
        if (!(reinterpret_cast<uint1_t>(!!ecx137) & zf134)) {
            eax115 = g14002002;
        }
    } else {
        addr_402d56_11:
        --esp120;
        *esp120 = es108;
        tmp8_138 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx81)));
        *reinterpret_cast<void**>(&g0) = tmp8_138;
        sf139 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(&g0)) < reinterpret_cast<signed char>(0);
        if (sf139 != __intrinsic()) {
            addr_402d83_15:
            *eax115 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax115) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx81)));
            *eax115 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax115) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax115)));
            *eax115 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax115) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax115)));
            edi130->f9 = edi130->f9 + reinterpret_cast<uint32_t>(edi130);
            esp140 = esp120 - 1;
            *esp140 = es108;
            *esi131 = reinterpret_cast<unsigned char>(*esi131 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx81)));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax115) + reinterpret_cast<uint32_t>(ebp141)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax115) + reinterpret_cast<uint32_t>(ebp142)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx87) + 1)));
            *eax115 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax115) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax115)));
            *reinterpret_cast<signed char*>(&ecx136) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx136) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax115) + 1)) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax115) + 1));
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx136) + 0x16002002) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx136) + 0x16002002) + reinterpret_cast<int32_t>(esp140);
            *eax115 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax115) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax115)));
            *reinterpret_cast<unsigned char*>(ecx136) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx136) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax115)));
            edx81->f8 = reinterpret_cast<signed char>(edx81->f8 + dh143);
            *eax115 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax115) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax115)));
            tmp32_144 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax115) + reinterpret_cast<uint32_t>(eax115));
            cf145 = reinterpret_cast<unsigned char>(tmp32_144) < reinterpret_cast<unsigned char>(*eax115);
            *eax115 = tmp32_144;
            if (!cf145) {
                *eax115 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax115) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax115)));
                *eax115 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax115) + reinterpret_cast<uint32_t>(eax115));
                eax115 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax115) - reinterpret_cast<uint32_t>(g10000));
                goto addr_402db4_17;
            }
        } else {
            tmp8_146 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0))));
            *reinterpret_cast<void**>(&g0) = tmp8_146;
            tmp8_147 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&g0))));
            *reinterpret_cast<void**>(&g0) = tmp8_147;
            zf134 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&g0) == 0);
            goto addr_402d5f_13;
        }
    }
    edi130->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi130->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx137)));
    zf148 = reinterpret_cast<uint1_t>(edi130->f0 == 0);
    ecx136 = reinterpret_cast<struct s44*>(ecx137 - 1);
    if (reinterpret_cast<uint1_t>(!!ecx136) & zf148) {
        goto addr_402d72_21;
    } else {
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi130->f0) < reinterpret_cast<signed char>(0) != __intrinsic()) | zf148)) {
            addr_402d7b_23:
            *reinterpret_cast<signed char*>(&ecx136) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx136) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax115) + 1));
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx136) + 0x15002002) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx136) + 0x15002002) + reinterpret_cast<int32_t>(esp120);
            goto addr_402d83_15;
        } else {
            addr_402d72_21:
            --esp120;
            *esp120 = es108;
            tmp8_149 = reinterpret_cast<unsigned char>(g280000 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx81)));
            g280000 = tmp8_149;
            *eax115 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax115) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax115)));
            goto addr_402d7b_23;
        }
    }
    addr_402db4_17:
    eax150 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax115) - reinterpret_cast<uint32_t>(g10000));
    eax151 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax150) - reinterpret_cast<uint32_t>(g10000));
    cf152 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax151) < reinterpret_cast<uint32_t>(g10000));
    eax153 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax151) - reinterpret_cast<uint32_t>(g10000));
    if (reinterpret_cast<int32_t>(eax153) >= reinterpret_cast<int32_t>(0)) {
        addr_402dd3_24:
        *reinterpret_cast<void**>(&eax153) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax153)) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ebx87->f0) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax153)) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ebx87->f0) + cf152))));
        *eax153 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax153) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax153)));
        *eax153 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax153) + reinterpret_cast<uint32_t>(eax153));
        goto addr_402dd9_25;
    } else {
        *eax153 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax153) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax153)));
        tmp8_154 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax153)) + reinterpret_cast<unsigned char>(*eax153));
        cf155 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_154) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax153)));
        *reinterpret_cast<void**>(&eax153) = tmp8_154;
        if (!*reinterpret_cast<void**>(&eax153)) {
            addr_402dd9_25:
            tmp8_156 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx81)) + reinterpret_cast<unsigned char>(*eax153));
            *reinterpret_cast<void**>(&edx157) = tmp8_156;
            *edx157 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*edx157 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax153))) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_156) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx81))));
            *edx157 = reinterpret_cast<unsigned char>(*edx157 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)));
            eax158 = reinterpret_cast<struct s45*>(reinterpret_cast<uint32_t>(eax153) + reinterpret_cast<unsigned char>(*eax153));
            *reinterpret_cast<unsigned char*>(ecx136) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx136) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax158)));
            *reinterpret_cast<void**>(&eax158) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax158)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax158) + 1)));
            esp159 = esp140 - 1;
            *esp159 = es108;
            eax158->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax158->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax158)));
            eax158->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax158->f0) + reinterpret_cast<uint32_t>(eax158));
            eax158->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax158->f0) - 1);
            eax158->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax158->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax158)));
            *reinterpret_cast<void**>(&eax158) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax158)) + reinterpret_cast<unsigned char>(eax158->f0));
        } else {
            *eax153 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax153) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx81))) + cf155);
            tmp32_160 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax153) + reinterpret_cast<unsigned char>(*eax153));
            cf152 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_160) < reinterpret_cast<uint32_t>(eax153));
            eax153 = tmp32_160;
            goto addr_402dd3_24;
        }
    }
    edi130->f0 = *reinterpret_cast<void**>(&eax158);
    eax158->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax158->f0) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax158)));
    ebx87->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx87->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax158)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx136) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx136) + 1) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx87) + 1)));
    eax161 = reinterpret_cast<struct s46*>(&eax158->f10000);
    ecx162 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx136) - 1);
    if (!(reinterpret_cast<uint1_t>(!!ecx162) & reinterpret_cast<uint1_t>(!!eax161))) {
        eax161->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax161->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax161)));
        eax161->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax161->f0) + reinterpret_cast<uint32_t>(eax161));
        eax161->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax161->f0) - 1);
    }
    eax161->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax161->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax161)));
    *reinterpret_cast<void**>(&eax161) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax161)) + reinterpret_cast<unsigned char>(eax161->f0));
    edi130->f1 = *reinterpret_cast<void**>(&eax161);
    eax161->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax161->f0) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax161)));
    ebx87->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx87->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax161)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx162) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx162) + 1) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx87) + 1)));
    eax163 = reinterpret_cast<struct s47*>(&eax161->f10000);
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) + reinterpret_cast<unsigned char>(eax163));
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) + reinterpret_cast<unsigned char>(eax163));
    *reinterpret_cast<void**>(&ecx162) = reinterpret_cast<void*>(2);
    al164 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)));
    ebp165 = *esp159;
    ebx87->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx87->f0) + 2);
    *ebp165 = reinterpret_cast<unsigned char>(*ebp165 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)));
    *reinterpret_cast<void**>(&eax163) = reinterpret_cast<void*>(static_cast<uint32_t>(al164));
    *ecx162 = reinterpret_cast<unsigned char>(*ecx162 + 2);
    ebx87->f7 = reinterpret_cast<unsigned char>(ebx87->f7 + *reinterpret_cast<signed char*>(&eax163 + 1));
    tmp32_166 = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) + reinterpret_cast<unsigned char>(eax163));
    cf167 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_166) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)));
    *reinterpret_cast<struct s47**>(&eax163->f0) = tmp32_166;
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) + reinterpret_cast<unsigned char>(eax163) + cf167);
    __asm__("arpl [edi], ax");
    esp168 = esp159 + 2 + 2 - 1;
    *esp168 = es108;
    *ecx162 = reinterpret_cast<unsigned char>(*ecx162 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx87)));
    ebx87->f7 = reinterpret_cast<unsigned char>(ebx87->f7 + *reinterpret_cast<signed char*>(&eax163 + 1));
    *reinterpret_cast<void**>(&eax163) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)));
    cf169 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) < reinterpret_cast<unsigned char>(eax163));
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) - reinterpret_cast<unsigned char>(eax163));
    __asm__("arpl [edi], ax");
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163))) + cf169);
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) ^ reinterpret_cast<unsigned char>(eax163));
    __asm__("arpl [edi], ax");
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)))));
    __asm__("arpl [edi], ax");
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163))) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) < reinterpret_cast<unsigned char>(eax163)));
    tmp8_170 = reinterpret_cast<unsigned char>(ebx87->f7 + *reinterpret_cast<signed char*>(&eax163 + 1));
    cf171 = reinterpret_cast<uint1_t>(tmp8_170 < ebx87->f7);
    ebx87->f7 = tmp8_170;
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163))) + cf171);
    tmp8_172 = reinterpret_cast<unsigned char>(ebx87->f7 + *reinterpret_cast<signed char*>(&eax163 + 1));
    cf173 = reinterpret_cast<uint1_t>(tmp8_172 < ebx87->f7);
    ebx87->f7 = tmp8_172;
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163))) + cf173);
    esp174 = reinterpret_cast<struct s48*>(esp168 - 2);
    esp174->f0 = ecx162 + 1 - 1;
    tmp8_175 = reinterpret_cast<unsigned char>(ebx87->f7 + *reinterpret_cast<signed char*>(&eax163 + 1));
    cf176 = reinterpret_cast<uint1_t>(tmp8_175 < ebx87->f7);
    ebx87->f7 = tmp8_175;
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163))) + cf176);
    ecx177 = esp174->f0;
    esp178 = &esp174->f4;
    tmp8_179 = reinterpret_cast<unsigned char>(ebx87->f7 + *reinterpret_cast<signed char*>(&eax163 + 1));
    cf180 = reinterpret_cast<uint1_t>(tmp8_179 < ebx87->f7);
    ebx87->f7 = tmp8_179;
    *reinterpret_cast<struct s47**>(&eax163->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax163->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163))) + cf180);
    __asm__("popad ");
    tmp8_181 = reinterpret_cast<unsigned char>(ebx87->f7 + *reinterpret_cast<signed char*>(&eax163 + 1));
    cf182 = reinterpret_cast<uint1_t>(tmp8_181 < ebx87->f7);
    ebx87->f7 = tmp8_181;
    tmp32_183 = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(eax163) + 0x63006900 + cf182);
    eax184 = tmp32_183;
    es185 = *esp178;
    tmp8_186 = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax184->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax184))) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_183) < reinterpret_cast<unsigned char>(eax163)));
    cf187 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_186) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax184->f0)));
    *reinterpret_cast<struct s47**>(&eax184->f0) = tmp8_186;
    __asm__("arpl [edi], ax");
    tmp8_188 = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax184->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax184))) + cf187);
    cf189 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_188) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax184->f0)));
    *reinterpret_cast<struct s47**>(&eax184->f0) = tmp8_188;
    __asm__("arpl [edi], ax");
    *reinterpret_cast<struct s47**>(&eax184->f0) = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s47**>(&eax184->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax184))) + cf189);
    eax190 = ecx177;
    tmp8_191 = reinterpret_cast<unsigned char>(ebx87->f7 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax190) + 1));
    cf192 = reinterpret_cast<uint1_t>(tmp8_191 < ebx87->f7);
    ebx87->f7 = tmp8_191;
    *reinterpret_cast<unsigned char*>(&eax190) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax190) - reinterpret_cast<unsigned char>(*eax190 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax190) < reinterpret_cast<unsigned char>(*eax190 + cf192))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax184) + 0x6097f00) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax184) + 0x6097f00) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx87) + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax184) + 0x2002a100) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax184) + 0x2002a100) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx87) + 1)));
    ebx87->f7 = reinterpret_cast<unsigned char>(ebx87->f7 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax190) + 1));
    *(esp178 + 1 - 1) = es185;
    tmp8_193 = reinterpret_cast<unsigned char>(ebx87->f7 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax190) + 1));
    cf194 = reinterpret_cast<uint1_t>(tmp8_193 < ebx87->f7);
    ebx87->f7 = tmp8_193;
    *eax190 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax190 + *reinterpret_cast<unsigned char*>(&eax190)) + cf194);
    __asm__("int1 ");
    tmp8_195 = reinterpret_cast<unsigned char>(ebx87->f7 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax190) + 1));
    cf196 = reinterpret_cast<uint1_t>(tmp8_195 < ebx87->f7);
    ebx87->f7 = tmp8_195;
    tmp32_197 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax190 + 0x6300f900) + cf196);
    eax198 = tmp32_197;
    *eax198 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax198 + *reinterpret_cast<signed char*>(&eax198)) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_197) < reinterpret_cast<uint32_t>(eax190)));
}

struct s49 {
    void* f0;
    unsigned char f1;
    signed char[6] pad8;
    int32_t f8;
    signed char[101268468] pad101268480;
    signed char f6093c00;
    signed char[369054208] pad470322689;
    signed char f1c088e01;
    signed char[1778296062] pad1711747840;
    signed char f66073300;
};

struct s50 {
    signed char[7] pad7;
    int32_t f7;
};

struct s51 {
    signed char[7] pad7;
    int32_t f7;
};

struct s53 {
    struct s53* f0;
    signed char[18415831] pad18415832;
    signed char f11900d8;
};

struct s52 {
    signed char[8454236] pad8454236;
    struct s53* f81005c;
};

struct s54 {
    signed char[9] pad9;
    signed char f9;
};

struct s55 {
    signed char[9] pad9;
    signed char f9;
};

struct s56 {
    struct s56* f0;
    unsigned char f1;
    int32_t f2;
    struct s56* f4;
    signed char[2] pad9;
    unsigned char f9;
    signed char[38] pad48;
    unsigned char f30;
    signed char[13] pad62;
    int32_t f3e;
    signed char[18] pad84;
    int32_t f54;
    int32_t f56;
    signed char[3] pad95;
    uint32_t f5f;
    void* f61;
    unsigned char f62;
    int32_t f63;
    void* f64;
    void* f65;
    unsigned char f66;
    int32_t f67;
    void* f69;
    int32_t f6c;
    void* f6e;
    unsigned char f6f;
    int32_t f70;
    void* f72;
    void* f73;
    unsigned char f74;
    void* f75;
    unsigned char f77;
    unsigned char f79;
    signed char[8389504] pad8389633;
    uint32_t f800401;
    signed char[58719233] pad67108870;
    unsigned char f4000006;
    signed char[939535354] pad1006644225;
    unsigned char f3c002c01;
};

int32_t g7900c109;

int32_t g1100c709;

struct s57 {
    signed char f0;
    struct s56* f1;
    signed char[604073726] pad604073728;
    unsigned char f24016f00;
};

struct s58 {
    signed char[7] pad7;
    int32_t f7;
};

struct s59 {
    signed char[7] pad7;
    int32_t f7;
};

struct s60 {
    struct s60* f0;
    signed char f1;
    signed char[1] pad3;
    uint32_t f3;
};

struct s61 {
    signed char[469852681] pad469852681;
    uint32_t f1c016209;
};

struct s62 {
    signed char[2] pad2;
    uint32_t f2;
};

struct s63 {
    signed char[2] pad2;
    int32_t f2;
};

struct s64 {
    unsigned char f0;
    signed char[2] pad3;
    unsigned char f3;
    signed char[221948] pad221952;
    unsigned char f36300;
    signed char[536870911] pad537092864;
    int32_t f20036300;
    signed char[687865852] pad688087808;
    unsigned char f29036300;
    signed char[536899071] pad688115968;
    signed char f2903d100;
    signed char[536874495] pad688119552;
    unsigned char f2903df00;
    signed char[620758527] pad772007168;
    unsigned char f2e03e500;
    signed char[620513537] pad855649794;
    unsigned char f33002e02;
    signed char[1207959551] pad989867522;
    unsigned char f3b002e02;
    signed char[1157838077] pad1073963776;
    int32_t f40036300;
    signed char[1123863294] pad1124085250;
    unsigned char f43002e02;
    signed char[1073951997] pad1124295424;
    int32_t f43036300;
    signed char[1476184830] pad1526738434;
    unsigned char f5b002e02;
    signed char[1711525885] pad1627651584;
    unsigned char f6103fe00;
    signed char[1643917313] pad1660956162;
    unsigned char f63002e02;
    signed char[1610822909] pad1661166336;
    int32_t f63036300;
    signed char[1711276028] pad1761829632;
    unsigned char f69036300;
    signed char[1610656511] pad1761873408;
    unsigned char f69040e00;
};

int32_t gc00e2;

struct s65 {
    unsigned char f0;
    int32_t f1;
    signed char[101147388] pad101147393;
    signed char f6076301;
    signed char[167413503] pad268560897;
    signed char f1001ea01;
};

struct s66 {
    struct s64* f0;
    signed char[2] pad4;
    int16_t f4;
};

struct s67 {
    signed char[1258302978] pad1258302978;
    unsigned char f4b002e02;
};

struct s68 {
    signed char[117453825] pad117453825;
    uint32_t f7003401;
};

struct s69 {
    void* f0;
    signed char[33562625] pad33562626;
    signed char f2002002;
    signed char[1358958079] pad1392520706;
    unsigned char f53002e02;
};

signed char g201e200;

unsigned char g2001e200;

struct s70 {
    signed char[2] pad2;
    unsigned char f2;
};

struct s71 {
    signed char[2] pad2;
    signed char f2;
};

int32_t* g4903f300;

struct s72 {
    void* f0;
    signed char[1023] pad1024;
    void* f400;
};

struct s73 {
    void* f0;
    signed char[1] pad2;
    void* f2;
};

struct s74 {
    uint32_t f0;
    signed char[33555196] pad33555200;
    void* f2000300;
};

unsigned char g8000100;

unsigned char g9000200;

unsigned char g3a000b00;

struct s75 {
    signed char[1] pad1;
    struct s56* f1;
};

signed char g3b003100;

unsigned char g7;

struct s76 {
    signed char[103] pad103;
    int32_t f67;
};

struct s77 {
    unsigned char f0;
    signed char f1;
    signed char[89] pad91;
    unsigned char f5b;
};

struct s78 {
    struct s56* f0;
    signed char[1] pad2;
    void** f2;
    struct s56* f4;
};

unsigned char g20005d00;

unsigned char g69006600;

unsigned char g281b0000;

unsigned char g290b0000;

unsigned char g29050000;

struct s79 {
    unsigned char* f0;
    int32_t* f4;
};

struct s80 {
    int32_t* f0;
    unsigned char* f4;
};

struct s81 {
    signed char f0;
    unsigned char f1;
};

struct s82 {
    unsigned char* f0;
    int32_t f4;
};

struct s83 {
    signed char f0;
    signed char[7209074] pad7209075;
    int32_t f6e0073;
};

unsigned char g61004c;

struct s84 {
    uint32_t f0;
    signed char f1;
};

unsigned char g6f0043;

void* g9addcb19;

signed char g12010120;

void* g8014918;

struct s85 {
    struct s60* f0;
    signed char[16850949] pad16850950;
    unsigned char f1012006;
    signed char[218490633] pad235341584;
    signed char fe070710;
};

struct s86 {
    void** f0;
    int16_t f2;
};

void* g8051d05;

void* g9addcb05;

struct s87 {
    void* f0;
    unsigned char f1;
    signed char[113] pad115;
    uint32_t f73;
    signed char[234891148] pad234891267;
    signed char fe002803;
    signed char[67303431] pad302194699;
    unsigned char f1203200b;
    signed char[546988037] pad312311825;
    unsigned char f129d8011;
};

unsigned char g1aefcb25;

signed char gbae1d9d2;

struct s88 {
    void* f0;
    signed char[537266841] pad537266845;
    uint32_t f20060a9d;
};

struct s89 {
    int16_t f0;
    struct s60* f2;
};

struct s90 {
    unsigned char f0;
    signed char[18876128] pad18876129;
    signed char f12006e1;
};

unsigned char g12150b0e;

struct s91 {
    void* f0;
    signed char[486605055] pad486605056;
    void* f1d010100;
};

void* ge010220;

unsigned char g31303734;

unsigned char g55080001;

unsigned char g73726966;

int32_t _CorExeMain = 0x4629;

void* ga0000045;

unsigned char g75080001;

struct s56* gfffffffc;

void fun_402eb9(struct s49* ecx) {
    uint64_t v2;
    void* al3;
    struct s50* ebx4;
    struct s51* ebx5;
    struct s52* eax6;
    signed char al7;
    signed char* ebx8;
    void** edx9;
    void* edx10;
    struct s54* esi11;
    struct s55* esi12;
    signed char ah13;
    struct s56* edi14;
    void* edi15;
    signed char bl16;
    signed char bl17;
    struct s53* eax18;
    struct s53* es19;
    signed char bl20;
    unsigned char tmp8_21;
    signed char bl22;
    int1_t cf23;
    void* ebp24;
    void* ebp25;
    int1_t sf26;
    void* ebp27;
    struct s53* tmp32_28;
    struct s53* eax29;
    int32_t ebp30;
    int32_t eflags31;
    int32_t tmp32_32;
    int32_t tmp32_33;
    uint32_t tmp32_34;
    int32_t* esi35;
    uint1_t cf36;
    uint32_t* esi37;
    uint32_t* esi38;
    struct s53* tmp8_39;
    uint1_t cf40;
    void* tmp32_41;
    uint1_t cf42;
    struct s57* eax43;
    struct s56* esi44;
    uint32_t esi45;
    uint32_t ebx46;
    void* bl47;
    struct s58* ebp48;
    struct s59* ebp49;
    struct s57** esp50;
    void* v51;
    struct s60** esp52;
    uint32_t ebp53;
    struct s60* ds54;
    void* esp55;
    signed char bl56;
    void* ebp57;
    struct s61* edx58;
    struct s62* ebp59;
    struct s63* ebp60;
    struct s64** esp61;
    struct s64* ss62;
    int32_t tmp32_63;
    struct s64* es64;
    struct s64** esp65;
    struct s65* ecx66;
    struct s57* edx67;
    struct s61* eax68;
    struct s64** esp69;
    uint1_t cf70;
    struct s66* esp71;
    signed char bl72;
    struct s64* ebx73;
    int16_t* esp74;
    struct s67** ecx75;
    int32_t ebp76;
    int32_t ebp77;
    int16_t es78;
    struct s67* eax79;
    struct s68* ecx80;
    struct s69* ecx81;
    int32_t ebp82;
    int32_t ebp83;
    int16_t* esp84;
    signed char tmp8_85;
    unsigned char tmp8_86;
    struct s56* edx87;
    void* esp88;
    struct s70* ebp89;
    struct s71* ebp90;
    int32_t* eax91;
    int32_t* ebp92;
    struct s56* ecx93;
    void** esp94;
    struct s72* eax95;
    struct s56* ebx96;
    struct s73* eax97;
    void* bl98;
    void* esp99;
    struct s56* esp100;
    struct s74* eax101;
    void** eax102;
    unsigned char tmp8_103;
    unsigned char tmp8_104;
    unsigned char* eax105;
    unsigned char tmp8_106;
    struct s75* eax107;
    struct s56* eax108;
    signed char tmp8_109;
    struct s56* tmp32_110;
    unsigned char tmp8_111;
    unsigned char* eax112;
    void* eax113;
    struct s56* eax114;
    struct s56* ebp115;
    uint1_t cf116;
    uint1_t zf117;
    int1_t sf118;
    int1_t of119;
    uint1_t below_or_equal120;
    int1_t zf121;
    int1_t zf122;
    int1_t of123;
    void* tmp8_124;
    void* tmp8_125;
    void* tmp8_126;
    void* tmp8_127;
    void* tmp8_128;
    int1_t zf129;
    void* tmp8_130;
    void* tmp8_131;
    uint1_t zf132;
    unsigned char tmp8_133;
    unsigned char tmp8_134;
    unsigned char tmp8_135;
    void* tmp8_136;
    void* tmp8_137;
    void* tmp8_138;
    int1_t sf139;
    void* tmp8_140;
    uint1_t zf141;
    void* tmp8_142;
    void* tmp8_143;
    int1_t cf144;
    unsigned char tmp8_145;
    void* tmp8_146;
    unsigned char tmp8_147;
    unsigned char tmp8_148;
    void* tmp8_149;
    void* tmp8_150;
    void* tmp8_151;
    void* tmp8_152;
    unsigned char tmp8_153;
    void* tmp8_154;
    unsigned char tmp8_155;
    int1_t zf156;
    void* tmp8_157;
    void* tmp8_158;
    int1_t zf159;
    void* tmp8_160;
    void* tmp8_161;
    void* tmp8_162;
    struct s56* tmp8_163;
    int1_t sf164;
    int1_t of165;
    void* tmp8_166;
    unsigned char tmp8_167;
    struct s56* tmp8_168;
    uint1_t cf169;
    struct s56* tmp8_170;
    uint1_t cf171;
    uint1_t below_or_equal172;
    unsigned char tmp8_173;
    uint1_t cf174;
    int1_t sf175;
    unsigned char tmp8_176;
    void** eax177;
    struct s77* ecx178;
    struct s56* esp179;
    unsigned char tmp8_180;
    int1_t cf181;
    struct s78* esp182;
    unsigned char tmp8_183;
    unsigned char tmp8_184;
    struct s56* tmp8_185;
    int1_t cf186;
    unsigned char* eax187;
    int32_t* eax188;
    void** eax189;
    void*** esp190;
    unsigned char tmp8_191;
    uint1_t cf192;
    struct s56* esi193;
    unsigned char tmp8_194;
    void** eax195;
    unsigned char tmp8_196;
    unsigned char tmp8_197;
    void** ebx198;
    struct s56* tmp8_199;
    int1_t cf200;
    void* tmp8_201;
    uint1_t cf202;
    void** eax203;
    struct s56* ebp204;
    unsigned char tmp8_205;
    struct s56* tmp8_206;
    int1_t cf207;
    struct s56* tmp8_208;
    int1_t cf209;
    int32_t* eax210;
    unsigned char* eax211;
    unsigned char* eax212;
    struct s79* esp213;
    unsigned char tmp8_214;
    uint1_t cf215;
    void** eax216;
    unsigned char* ebp217;
    struct s80* esp218;
    void* tmp8_219;
    int1_t cf220;
    void* cr0_221;
    unsigned char* esi222;
    int32_t* ebx223;
    unsigned char** esp224;
    unsigned char tmp8_225;
    unsigned char* eax226;
    unsigned char* ebx227;
    struct s77* edi228;
    int1_t zf229;
    unsigned char* eax230;
    unsigned char tmp8_231;
    int1_t cf232;
    struct s81* ecx233;
    unsigned char* ecx234;
    unsigned char** esp235;
    unsigned char tmp8_236;
    int1_t cf237;
    unsigned char tmp8_238;
    uint1_t cf239;
    struct s82* esp240;
    struct s83* eax241;
    int32_t* eax242;
    void** eax243;
    unsigned char* ebx244;
    int32_t* esp245;
    unsigned char tmp8_246;
    unsigned char tmp8_247;
    int1_t cf248;
    int1_t cf249;
    unsigned char* eax250;
    unsigned char tmp8_251;
    int1_t cf252;
    int1_t zf253;
    struct s84* esi254;
    unsigned char tmp8_255;
    unsigned char tmp8_256;
    int1_t cf257;
    int1_t zf258;
    unsigned char** esp259;
    unsigned char tmp8_260;
    uint1_t cf261;
    int32_t* esp262;
    unsigned char* eax263;
    signed char* esi264;
    unsigned char tmp8_265;
    int1_t cf266;
    struct s81* edi267;
    int32_t* eax268;
    void** eax269;
    unsigned char tmp8_270;
    int1_t cf271;
    unsigned char** esp272;
    uint32_t ecx273;
    void* tmp32_274;
    unsigned char* edi275;
    struct s60* esi276;
    struct s60* edx277;
    void* esp278;
    void* tmp8_279;
    void** tmp32_280;
    void** eax281;
    void* tmp32_282;
    void** esp283;
    void* cs284;
    void* tmp32_285;
    signed char tmp8_286;
    void* ebp287;
    unsigned char* eax288;
    int16_t* esp289;
    int16_t cs290;
    void* tmp32_291;
    uint1_t cf292;
    uint1_t cf293;
    unsigned char* tmp32_294;
    void* tmp8_295;
    void* tmp8_296;
    uint1_t cf297;
    unsigned char* tmp32_298;
    unsigned char* eax299;
    void* tmp32_300;
    void* tmp8_301;
    void* tmp32_302;
    uint1_t cf303;
    void* tmp32_304;
    struct s85* ebp305;
    void* tmp32_306;
    void*** esp307;
    void* tmp8_308;
    struct s86* esp309;
    int16_t* esp310;
    int16_t es311;
    struct s60* tmp32_312;
    struct s60* ebx313;
    int16_t* esp314;
    int16_t cs315;
    uint32_t eax316;
    int16_t* esp317;
    int16_t cs318;
    uint1_t cf319;
    uint32_t eax320;
    uint32_t eax321;
    int16_t* esp322;
    int16_t* esp323;
    int16_t cs324;
    int16_t* esp325;
    int16_t cs326;
    int16_t* esp327;
    void* tmp32_328;
    void* tmp8_329;
    int16_t* esp330;
    int16_t* esp331;
    int16_t cs332;
    int16_t* esp333;
    int16_t cs334;
    int16_t* esp335;
    int16_t cs336;
    int16_t* esp337;
    int16_t cs338;
    int16_t* esp339;
    int16_t cs340;
    int16_t* esp341;
    int16_t cs342;
    struct s60* eax343;
    int16_t cs344;
    struct s87* ecx345;
    unsigned char* eax346;
    unsigned char tmp8_347;
    struct s60* ebp348;
    int16_t* esp349;
    unsigned char tmp8_350;
    void* tmp32_351;
    uint1_t cf352;
    int16_t es353;
    struct s60* tmp32_354;
    struct s60* edx355;
    struct s88* eax356;
    int16_t* esp357;
    int16_t cs358;
    struct s89* esp359;
    void* tmp8_360;
    uint1_t cf361;
    struct s60** esp362;
    struct s60* es363;
    struct s87* tmp32_364;
    struct s87* ecx365;
    struct s88* tmp32_366;
    struct s88* eax367;
    struct s90* eax368;
    struct s60* tmp32_369;
    uint1_t cf370;
    struct s60* tmp32_371;
    uint1_t cf372;
    unsigned char tmp8_373;
    uint1_t cf374;
    struct s90* tmp32_375;
    unsigned char* eax376;
    unsigned char tmp8_377;
    unsigned char* tmp32_378;
    unsigned char* eax379;
    unsigned char* eax380;
    struct s60* tmp8_381;
    uint1_t cf382;
    unsigned char* tmp32_383;
    unsigned char* eax384;
    unsigned char tmp8_385;
    uint1_t cf386;
    void* tmp8_387;
    uint1_t cf388;
    struct s60** esp389;
    unsigned char* tmp32_390;
    unsigned char* eax391;
    unsigned char tmp8_392;
    uint1_t cf393;
    struct s60* tmp8_394;
    uint1_t cf395;
    unsigned char* tmp32_396;
    unsigned char* eax397;
    struct s87** eax398;
    struct s60* esp399;
    int1_t less_or_equal400;
    struct s60* edi401;
    struct s60* esp402;
    struct s60** esp403;
    struct s60** esp404;
    struct s60* cs405;
    struct s60* al406;
    struct s60* tmp8_407;
    struct s60** esp408;
    uint32_t tmp32_409;
    uint1_t cf410;
    struct s60** esp411;
    uint1_t cf412;
    struct s91* eax413;
    unsigned char tmp32_414;
    uint1_t cf415;
    struct s91* tmp32_416;
    struct s91* eax417;
    unsigned char tmp8_418;
    uint1_t cf419;
    struct s60* esp420;
    void* dl421;
    struct s91* tmp32_422;
    struct s91* eax423;
    void* tmp8_424;
    struct s60** esp425;
    void* tmp8_426;
    uint1_t cf427;
    struct s60** esp428;
    struct s60* cs429;
    void** eax430;
    struct s60* esp431;
    struct s60* cs432;
    void** eax433;
    struct s60* eax434;
    struct s60** esp435;
    struct s60** esp436;
    struct s60* cs437;
    void* tmp8_438;
    void* al439;
    void* tmp8_440;
    uint1_t cf441;
    uint1_t cf442;
    void* dl443;
    struct s60* esp444;
    struct s60* esp445;
    void* tmp8_446;
    struct s60* esp447;
    struct s60* tmp8_448;
    uint1_t cf449;
    uint1_t below_or_equal450;
    struct s60* tmp8_451;
    struct s60* tmp8_452;
    unsigned char tmp8_453;
    int1_t zf454;
    int1_t cf455;
    int1_t sf456;
    int1_t zf457;
    struct s60* cs458;
    int1_t cf459;
    uint1_t cf460;
    unsigned char tmp8_461;
    int1_t zf462;
    unsigned char tmp8_463;
    uint1_t below_or_equal464;
    struct s60* tmp32_465;
    uint1_t cf466;
    void* tmp8_467;
    struct s60* tmp32_468;
    uint1_t cf469;
    struct s60* tmp8_470;
    int1_t cf471;
    struct s60* esp472;
    struct s60* tmp32_473;
    unsigned char tmp8_474;
    struct s60* esp475;
    struct s60* tmp8_476;
    uint1_t cf477;
    struct s60* esp478;
    struct s60* esp479;
    void* tmp8_480;
    uint1_t cf481;
    struct s60* esp482;
    unsigned char tmp8_483;
    uint32_t tmp32_484;
    struct s60* tmp8_485;
    struct s60* esp486;
    struct s60* cs487;
    unsigned char tmp8_488;
    void* tmp8_489;
    struct s56* esp490;
    uint1_t cf491;
    void* tmp8_492;
    void* tmp8_493;
    struct s56* esp494;
    unsigned char tmp8_495;
    struct s56* esp496;
    void* tmp8_497;
    void* tmp8_498;
    void* tmp8_499;
    int1_t cf500;
    int1_t sf501;
    unsigned char tmp8_502;
    void* tmp8_503;
    void* tmp8_504;
    void* tmp8_505;
    void* tmp8_506;
    void* tmp8_507;
    struct s56* esp508;
    void* tmp8_509;
    struct s78* esp510;
    int32_t* ebx511;
    int32_t* ebx512;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 2) = reinterpret_cast<int32_t>(__return_address());
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<signed char>(al3));
    ebx4->f7 = ebx5->f7 + reinterpret_cast<int32_t>(__zero_stack_offset());
    __asm__("fld dword [eax]");
    *reinterpret_cast<signed char*>(&eax6) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(static_cast<int32_t>(al7)) - *ebx8);
    edx9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx10) - 1);
    esi11->f9 = reinterpret_cast<signed char>(esi12->f9 + ah13);
    edi14 = reinterpret_cast<struct s56*>(reinterpret_cast<int32_t>(edi15) - 1);
    *reinterpret_cast<signed char*>(&ecx) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx) + bl16) + bl17);
    *reinterpret_cast<signed char*>(&edx9) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx9) + *reinterpret_cast<signed char*>(&eax6));
    eax18 = reinterpret_cast<struct s53*>(&eax6->f81005c);
    __asm__("arpl [edi], ax");
    *reinterpret_cast<struct s53**>(&v2) = es19;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 0x66073300) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 0x66073300) + bl20);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 0x6093c00) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 0x6093c00) + *reinterpret_cast<signed char*>(&eax18 + 1));
    tmp8_21 = reinterpret_cast<unsigned char>(ecx->f1 + bl22);
    cf23 = tmp8_21 < ecx->f1;
    ecx->f1 = tmp8_21;
    if (cf23) {
        addr_402eed_2:
        ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) | reinterpret_cast<unsigned char>(edi14));
        __asm__("popad ");
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp24) + reinterpret_cast<unsigned char>(eax18) + 0x161007f) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp25) + reinterpret_cast<unsigned char>(eax18) + 0x161007f) + reinterpret_cast<int32_t>(ecx);
        sf26 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp27) + reinterpret_cast<unsigned char>(eax18) + 0x161007f) < 0;
        tmp32_28 = *reinterpret_cast<struct s53**>(&eax18->f0);
        *reinterpret_cast<struct s53**>(&eax18->f0) = eax18;
        eax29 = tmp32_28;
    } else {
        if (!cf23) 
            goto addr_402eea_4; else 
            goto addr_402eea_4;
    }
    __asm__("popad ");
    ecx->f8 = ecx->f8 + ebp30;
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) | reinterpret_cast<unsigned char>(eax29));
    __asm__("arpl [edi], ax");
    *reinterpret_cast<struct s53**>(&eax29->f0) = *reinterpret_cast<struct s53**>(&v2);
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) | reinterpret_cast<unsigned char>(eax29));
    __asm__("enter 0x9602, 0x0");
    ecx->f0 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(eax29))));
    __asm__("arpl [edi], ax");
    eflags31 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 4);
    ecx->f1 = reinterpret_cast<unsigned char>(ecx->f1 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx9) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1) = 0;
    if (reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(*edx9) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29))) < reinterpret_cast<signed char>(0)) {
        eax29 = reinterpret_cast<struct s53*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax29) + 0x7900ba09)));
    }
    tmp32_32 = g7900c109 + reinterpret_cast<int32_t>(edx9);
    g7900c109 = tmp32_32;
    tmp32_33 = g1100c709 + reinterpret_cast<int32_t>(edx9);
    g1100c709 = tmp32_33;
    tmp32_34 = *esi35 + reinterpret_cast<unsigned char>(edi14);
    cf36 = reinterpret_cast<uint1_t>(tmp32_34 < *esi37);
    *esi38 = tmp32_34;
    tmp8_39 = reinterpret_cast<struct s53*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s53**>(&eax29->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29))) + cf36);
    cf40 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_39) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s53**>(&eax29->f0)));
    *reinterpret_cast<struct s53**>(&eax29->f0) = tmp8_39;
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(eax29) + cf40);
    *reinterpret_cast<signed char*>(&eax29 + 1) = 0;
    __asm__("int 0x0");
    tmp32_41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + 0xd300c9);
    cf42 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_41) < reinterpret_cast<unsigned char>(ecx->f0));
    ecx->f0 = tmp32_41;
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(eax29) + cf42);
    __asm__("retf ");
    eax43 = reinterpret_cast<struct s57*>(&eax29->f11900d8);
    esi44 = reinterpret_cast<struct s56*>(esi45 | ebx46);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) - 0x1dfa7cff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) - 0x1dfa7cff) + *reinterpret_cast<signed char*>(&ecx));
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<signed char>(bl47));
    ebp48->f7 = ebp49->f7 + reinterpret_cast<int32_t>(edx9);
    __asm__("out 0x0, al");
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) & reinterpret_cast<uint32_t>(eax43));
    esp50 = reinterpret_cast<struct s57**>(reinterpret_cast<int32_t>(v51) + 4 - 4);
    *esp50 = eax43;
    esp52 = reinterpret_cast<struct s60**>(reinterpret_cast<uint32_t>(esp50) | ebp53);
    ecx->f1 = reinterpret_cast<unsigned char>(ecx->f1 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx9) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1) = 0;
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) ^ reinterpret_cast<uint32_t>(eax43));
    ds54 = *esp52;
    esp55 = reinterpret_cast<void*>(esp52 + 2);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) - 0x9fa24ff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) - 0x9fa24ff) + *reinterpret_cast<signed char*>(&edx9));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) - 0x2fa24ff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) - 0x2fa24ff) + bl56);
    ecx->f1 = reinterpret_cast<unsigned char>(ecx->f1 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx9) + 1));
    *reinterpret_cast<unsigned char*>(&eax43) = reinterpret_cast<unsigned char>(1 - reinterpret_cast<unsigned char>(ecx->f0));
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) & reinterpret_cast<uint32_t>(eax43));
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(ecx->f0 == 0))) {
        esp55 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp55) + 2);
        ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<int32_t>(ebp57));
        *edx9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*edx9) + reinterpret_cast<uint32_t>(esp55));
        eax43 = reinterpret_cast<struct s57*>(reinterpret_cast<uint32_t>(eax43) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)));
        *reinterpret_cast<signed char*>(&ecx) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx) + *reinterpret_cast<signed char*>(&edx9));
    }
    *reinterpret_cast<signed char*>(&edx9) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx9) + *reinterpret_cast<signed char*>(&ecx));
    edx58 = reinterpret_cast<struct s61*>(reinterpret_cast<int32_t>(edx9) + reinterpret_cast<uint32_t>(esp55));
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&edx58)));
    ebp59->f2 = ebp60->f2 + reinterpret_cast<uint32_t>(esp55);
    esp61 = reinterpret_cast<struct s64**>(reinterpret_cast<uint32_t>(esp55) - 2);
    *esp61 = ss62;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx) - 0x21f6a3ff) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx) - 0x21f6a3ff) + reinterpret_cast<uint32_t>(esp61);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) - 0x1dfa7d00) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) - 0x1dfa7d00) + *reinterpret_cast<unsigned char*>(&eax43));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 0x1c088e01) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 0x1c088e01) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&edx58)));
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<unsigned char>(edi14));
    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi14) + 2) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi14) + 2) + reinterpret_cast<int32_t>(ecx);
    ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) & reinterpret_cast<uint32_t>(eax43));
    tmp32_63 = gc00e2 + 99;
    gc00e2 = tmp32_63;
    es64 = *esp61;
    esp65 = esp61 + 1 - 1;
    *esp65 = es64;
    ecx->f1 = reinterpret_cast<unsigned char>(ecx->f1 + *reinterpret_cast<signed char*>(&ecx));
    ecx66 = reinterpret_cast<struct s65*>(&ecx->f1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx66) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx66) + 1) + eax43->f0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx66) + 1) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx66) + 1) + reinterpret_cast<int32_t>(ecx66);
    edx67 = eax43;
    eax68 = edx58;
    esp69 = esp65 - 1;
    *esp69 = es64;
    cf70 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ecx66) < *reinterpret_cast<unsigned char*>(&eax68));
    *reinterpret_cast<unsigned char*>(ecx66) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx66) - *reinterpret_cast<unsigned char*>(&eax68));
    *reinterpret_cast<unsigned char*>(&eax68) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax68))) + cf70);
    __asm__("arpl [edi], ax");
    esp71 = reinterpret_cast<struct s66*>(esp69 - 1);
    esp71->f0 = es64;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx66) + 0x6076301) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx66) + 0x6076301) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx67) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx66) + 0x1001ea01) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx66) + 0x1001ea01) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx67) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax68) + reinterpret_cast<uint32_t>(eax68)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax68) + reinterpret_cast<uint32_t>(eax68)) + bl72);
    __asm__("arpl [edi], ax");
    ebx73 = esp71->f0;
    esp74 = &esp71->f4;
    ecx75 = reinterpret_cast<struct s67**>(reinterpret_cast<int32_t>(ecx66) + reinterpret_cast<uint32_t>(eax68));
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax68) + 0x1c016209) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax68) + 0x1c016209) + reinterpret_cast<uint16_t>(ebx73);
    *reinterpret_cast<signed char*>(ebp76 + 0x1c016807) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp77 + 0x1c016807) + *reinterpret_cast<signed char*>(&edx67));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx67) + 0x24016f00) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx67) + 0x24016f00) + *reinterpret_cast<unsigned char*>(&ebx73));
    *reinterpret_cast<unsigned char*>(&ebx73->f0) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx73->f0) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx67) + 1));
    es78 = *esp74;
    eax79 = *ecx75;
    *reinterpret_cast<void**>(&eax79) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax79))));
    __asm__("out dx, al");
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax79)));
    ecx80 = reinterpret_cast<struct s68*>(reinterpret_cast<uint32_t>(ecx75) + reinterpret_cast<uint16_t>(ebx73));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx73) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx73) + 1) + *reinterpret_cast<signed char*>(&edx67));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi14) + 0x3c002c01) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi14) + 0x3c002c01) + *reinterpret_cast<unsigned char*>(&ebx73));
    ecx80->f7003401 = ecx80->f7003401 | reinterpret_cast<unsigned char>(edi14);
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) | reinterpret_cast<uint32_t>(eax79));
    ecx81 = reinterpret_cast<struct s69*>(reinterpret_cast<uint32_t>(ecx80) + reinterpret_cast<uint16_t>(ebx73));
    *reinterpret_cast<unsigned char*>(ebp82 - 0x26fe3afa) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(ebp83 - 0x26fe3afa) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax79)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi44) + 9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi44) + 9) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax79)));
    esp84 = esp74 + 1 - 1;
    *esp84 = es78;
    *reinterpret_cast<unsigned char*>(&ecx81) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx81) + *reinterpret_cast<unsigned char*>(&ebx73));
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx81) + 0x2002002) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx81) + 0x2002002) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax79) + 1));
    tmp8_85 = reinterpret_cast<signed char>(g201e200 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax79) + 1));
    g201e200 = tmp8_85;
    tmp8_86 = reinterpret_cast<unsigned char>(g2001e200 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx81) + 1));
    g2001e200 = tmp8_86;
    *reinterpret_cast<unsigned char*>(&ebx73->f0) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx73->f0) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx73) + 1));
    edx87 = reinterpret_cast<struct s56*>(&edx67->f1);
    esp88 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp84) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx81)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x29036300) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x29036300) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax79)));
    *reinterpret_cast<signed char*>(reinterpret_cast<uint16_t>(ebx73) + 0x2903d100) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint16_t>(ebx73) + 0x2903d100) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax79) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x2903df00) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x2903df00) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx81) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x2e03e500) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x2e03e500) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *reinterpret_cast<unsigned char*>(&ebx73->f0) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx73->f0) + *reinterpret_cast<unsigned char*>(&ecx81));
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx87) + reinterpret_cast<uint32_t>(eax79) + 46) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx87) + reinterpret_cast<uint32_t>(eax79) + 46) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax79) + 1));
    *reinterpret_cast<unsigned char*>(&ebx73->f0) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx73->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
    ebp89->f2 = reinterpret_cast<unsigned char>(ebp90->f2 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx81) + 1));
    *reinterpret_cast<unsigned char*>(&ebx73->f0) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx73->f0) + *reinterpret_cast<unsigned char*>(&ebx73));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx87) + reinterpret_cast<uint32_t>(eax79) + 0x23002e) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx87) + reinterpret_cast<uint32_t>(eax79) + 0x23002e) + *reinterpret_cast<unsigned char*>(&ecx81));
    eax91 = ebp92;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx81) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx81) + 1) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)));
    *reinterpret_cast<unsigned char*>(&ebx73->f0) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx73->f0) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx81) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x33002e02) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x33002e02) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax91) + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x3b002e02) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x3b002e02) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax91) + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x43002e02) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x43002e02) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax91) + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax79) + 0x4b002e02) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax79) + 0x4b002e02) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx81) + 0x53002e02) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx81) + 0x53002e02) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx81) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x5b002e02) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x5b002e02) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax91) + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x63002e02) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x63002e02) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax91) + 1)));
    *reinterpret_cast<unsigned char*>(&ecx81) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx81) + *reinterpret_cast<unsigned char*>(&eax91));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx81) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx81) + 1) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)));
    *reinterpret_cast<unsigned char*>(&ebx73->f0) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx73->f0) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx81) + 1));
    *reinterpret_cast<unsigned char*>(&eax91) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax91) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx81)));
    *eax91 = *eax91 + 99;
    ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<uint32_t>(ecx81) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx81)));
    g4903f300 = eax91;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x6103fe00) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x6103fe00) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x69036300) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x69036300) + *reinterpret_cast<unsigned char*>(&eax91));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x69040e00) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x69040e00) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax91) + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x80041800) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x80041800) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x81036300) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x81036300) + *reinterpret_cast<unsigned char*>(&eax91));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x89036300) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x89036300) + *reinterpret_cast<unsigned char*>(&eax91));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x89042700) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0x89042700) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx73) + 1));
    *reinterpret_cast<unsigned char*>(&ebx73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx73) + *reinterpret_cast<unsigned char*>(&eax91));
    *reinterpret_cast<struct s56**>(esi44) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *reinterpret_cast<unsigned char*>(&eax91) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax91) - 0x77);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0xa0043d00) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0xa0043d00) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0xe0036300) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0xe0036300) + *reinterpret_cast<unsigned char*>(&eax91));
    ebx73->f36300 = reinterpret_cast<unsigned char>(ebx73->f36300 + *reinterpret_cast<unsigned char*>(&eax91));
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0x20036300) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0x20036300) + reinterpret_cast<int32_t>(eax91);
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0x40036300) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0x40036300) + reinterpret_cast<int32_t>(eax91);
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0x43036300) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0x43036300) + reinterpret_cast<int32_t>(eax91);
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0x63036300) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0x63036300) + reinterpret_cast<int32_t>(eax91);
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0x80036300) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0x80036300) + reinterpret_cast<int32_t>(eax91);
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0x83036300) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0x83036300) + reinterpret_cast<int32_t>(eax91);
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0xa0036300) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebx73) + 0xa0036300) + reinterpret_cast<int32_t>(eax91);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0xe0036300) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + 0xe0036300) + reinterpret_cast<int32_t>(eax91));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx73) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx73) + 1) + *reinterpret_cast<unsigned char*>(&ebx73->f0));
    esp94 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp88) - 4);
    *esp94 = reinterpret_cast<void*>(0x7b034003);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax79) - 0x64fc7ffd) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax79) - 0x64fc7ffd) + *reinterpret_cast<unsigned char*>(&ebx73));
    ebx73->f3 = reinterpret_cast<unsigned char>(ebx73->f3 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax91) + 1)));
    __asm__("rol byte [ebx], 0x9b");
    ebx73->f3 = reinterpret_cast<unsigned char>(ebx73->f3 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax91) + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + reinterpret_cast<uint16_t>(ebx73) * 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebx73) + reinterpret_cast<uint16_t>(ebx73) * 4) + *reinterpret_cast<unsigned char*>(&eax91));
    ebx73->f3 = reinterpret_cast<unsigned char>(ebx73->f3 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax91) + 1)));
    *reinterpret_cast<struct s56**>(ecx93) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ecx93)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax91) + 1)));
    eax95 = reinterpret_cast<struct s72*>(*eax91 * 0xffffff8b);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax95) + reinterpret_cast<uint32_t>(eax95) + 0x12f010b) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax95) + reinterpret_cast<uint32_t>(eax95) + 0x12f010b) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax95) + 1));
    ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<uint32_t>(&ebx73->pad3) + reinterpret_cast<unsigned char>(ecx93));
    *reinterpret_cast<struct s56**>(ebx96) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebx96)) + reinterpret_cast<uint32_t>(eax95));
    *reinterpret_cast<struct s56**>(ecx93) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ecx93)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax95)));
    *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax95) + reinterpret_cast<uint32_t>(eax95)) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax95) + reinterpret_cast<uint32_t>(eax95))) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax95)));
    *reinterpret_cast<void**>(&eax95) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax95)) + reinterpret_cast<unsigned char>(eax95->f0));
    eax97 = reinterpret_cast<struct s73*>(&eax95->f400);
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    bl98 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + reinterpret_cast<uint32_t>(eax97))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx87) + reinterpret_cast<uint32_t>(eax97)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx87) + reinterpret_cast<uint32_t>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96 + 1)));
    esp99 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(*esp94) + 4);
    *reinterpret_cast<void**>(&eax97) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)) + reinterpret_cast<unsigned char>(eax97->f0));
    *reinterpret_cast<struct s56**>(ecx93) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ecx93)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax97) + 1)));
    *reinterpret_cast<void**>(&ebx96) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(bl98) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + reinterpret_cast<uint32_t>(eax97))));
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<int32_t>(esp99) + reinterpret_cast<uint32_t>(eax97->f2));
    *reinterpret_cast<void**>(&eax97) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)) + reinterpret_cast<unsigned char>(eax97->f0))));
    eax101 = reinterpret_cast<struct s74*>(reinterpret_cast<uint32_t>(eax97) + reinterpret_cast<unsigned char>(eax97->f0));
    eax101->f0 = eax101->f0 + reinterpret_cast<uint32_t>(eax101);
    eax102 = &eax101->f2000300;
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax102)));
    tmp8_103 = reinterpret_cast<unsigned char>(g8000100 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax102)));
    g8000100 = tmp8_103;
    tmp8_104 = reinterpret_cast<unsigned char>(g9000200 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax102)));
    g9000200 = tmp8_104;
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax102)));
    *reinterpret_cast<struct s56**>(ecx93) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ecx93)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax102)));
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93)));
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax102)));
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax102)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax102) + reinterpret_cast<uint32_t>(eax102)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax102) + reinterpret_cast<uint32_t>(eax102)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93)));
    *eax102 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*eax102) | reinterpret_cast<uint32_t>(eax102));
    *eax102 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*eax102) + reinterpret_cast<uint32_t>(eax102));
    eax105 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax102) | 0xa000900);
    *reinterpret_cast<struct s56**>(esi44) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *reinterpret_cast<struct s56**>(ebx96) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebx96)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax105) + 1)));
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93)));
    *eax105 = reinterpret_cast<unsigned char>(*eax105 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96 + 1)));
    tmp8_106 = reinterpret_cast<unsigned char>(g3a000b00 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax105) + 1)));
    g3a000b00 = tmp8_106;
    *reinterpret_cast<struct s56**>(ebx96) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebx96)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax105) + 1)));
    *reinterpret_cast<struct s56**>(ebx96) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebx96)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax105) + reinterpret_cast<uint32_t>(eax105)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax105) + reinterpret_cast<uint32_t>(eax105)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96 + 1)));
    eax107 = reinterpret_cast<struct s75*>(reinterpret_cast<uint32_t>(eax105) & 0x3e000c00);
    *reinterpret_cast<struct s56**>(ebx96) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebx96)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax107) + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax107) + reinterpret_cast<uint32_t>(eax107)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax107) + reinterpret_cast<uint32_t>(eax107)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93)));
    eax108 = reinterpret_cast<struct s56*>(&eax107->f1);
    tmp8_109 = reinterpret_cast<signed char>(g3b003100 + *reinterpret_cast<signed char*>(&eax108 + 1));
    g3b003100 = tmp8_109;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 1) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx96) + 1) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 1) == 0))) {
        tmp32_110 = esp100;
        esp100 = eax108;
        eax108 = tmp32_110;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(esi44) + 0x800401) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(esi44) + 0x800401) + reinterpret_cast<unsigned char>(edi14);
    *reinterpret_cast<struct s56**>(ecx93) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ecx93)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi44) + 0x4000006) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi44) + 0x4000006) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<void**>(&eax108) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
    *reinterpret_cast<struct s56**>(ecx93) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ecx93)) + reinterpret_cast<unsigned char>(edx87));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    tmp8_111 = reinterpret_cast<unsigned char>(g7 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
    g7 = tmp8_111;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax108) + reinterpret_cast<unsigned char>(eax108)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax108) + reinterpret_cast<unsigned char>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    __asm__("fld dword [ecx]");
    *reinterpret_cast<void**>(&eax108) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108))));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    __asm__("rol byte [ecx], 1");
    __asm__("in al, 0x5");
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<struct s56**>(eax108) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)));
    *reinterpret_cast<void**>(&eax108) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)));
    *reinterpret_cast<void**>(&eax108) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax108)) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)));
    eax112 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax108) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax108)));
    *eax112 = reinterpret_cast<unsigned char>(*eax112 | *reinterpret_cast<unsigned char*>(&eax112));
    *reinterpret_cast<unsigned char*>(&eax112) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax112)));
    *eax112 = reinterpret_cast<unsigned char>(*eax112 | reinterpret_cast<uint32_t>(eax112));
    eax113 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax112) ^ 0x35005700);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx93) + reinterpret_cast<uint32_t>(eax113)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx93) + reinterpret_cast<uint32_t>(eax113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    eax114 = reinterpret_cast<struct s56*>(reinterpret_cast<uint32_t>(eax113) ^ 0x9b013e00);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx87) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx87) + 1) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93 + 1)));
    *reinterpret_cast<struct s56**>(eax114) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
    __asm__("popad ");
    ebp115 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi44) + 62) * 0x305f5f64);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi44) + reinterpret_cast<unsigned char>(edi14)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi44) + reinterpret_cast<unsigned char>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96 + 1)));
    if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi44) + reinterpret_cast<unsigned char>(edi14))) {
        addr_4032c3_13:
        *reinterpret_cast<void**>(&eax114) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)));
        cf116 = 0;
        ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) - 1);
        __asm__("outsb ");
        if (!ecx93) {
            addr_4032ff_14:
            ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
            zf117 = reinterpret_cast<uint1_t>(ecx93 == 0);
            sf118 = reinterpret_cast<signed char>(ecx93) < reinterpret_cast<signed char>(0);
            of119 = __intrinsic();
            below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
            if (!cf116) 
                goto addr_40337e_15;
        } else {
            *reinterpret_cast<void**>(&eax114) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114))));
            zf121 = reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax114) == 77);
            __asm__("outsd ");
            if (!zf121) 
                goto addr_40333d_17;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx93) * 2 + 0x3e6e6961) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx93) * 2 + 0x3e6e6961) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96 + 1)));
            goto addr_4032d6_19;
        }
    } else {
        edi14 = *reinterpret_cast<struct s56**>(esp100);
        *reinterpret_cast<struct s56**>(eax114) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)) ^ reinterpret_cast<unsigned char>(eax114));
        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) + 4 - 4);
        *reinterpret_cast<struct s56**>(esp100) = esp100;
        __asm__("popad ");
        if (1) {
            addr_4032d6_19:
            goto addr_4032d7_21;
        } else {
            __asm__("pushad ");
            *reinterpret_cast<struct s56**>(eax114) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)) ^ reinterpret_cast<unsigned char>(eax114));
            ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
            __asm__("outsd ");
            __asm__("insd ");
            __asm__("insd ");
            __asm__("popad ");
            __asm__("outsb ");
            esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 1);
            ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x65)) * 0x73726150);
            if (__intrinsic()) {
                addr_4032e0_23:
                *reinterpret_cast<struct s56**>(reinterpret_cast<unsigned char>(esp100) - 4) = ebx96;
                ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
                ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx93) - 1) - 1);
                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x73) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93 + 1)));
                __asm__("arpl [edi+0x72], bp");
                goto addr_4032ea_24;
            } else {
                *reinterpret_cast<struct s56**>(eax114) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)) ^ reinterpret_cast<unsigned char>(eax114));
                cf116 = 0;
                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                *reinterpret_cast<struct s56**>(esp100) = esp100;
                __asm__("popad ");
                if (1) {
                    addr_4032f1_26:
                    ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
                    zf122 = ecx93 == 0;
                    if (!cf116) {
                        addr_40336f_27:
                        if (!cf116) {
                            addr_4033da_28:
                            if (zf122) 
                                goto addr_403451_29; else 
                                goto addr_4033dd_30;
                        } else {
                            if (cf116) 
                                goto addr_4033c5_32; else 
                                goto addr_403377_33;
                        }
                    } else {
                        __asm__("outsb ");
                        __asm__("arpl [eax], ax");
                        edi14 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edi14) - 1);
                        __asm__("outsb ");
                        ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebp115) + 1);
                        of123 = __intrinsic();
                        if (reinterpret_cast<signed char>(ebp115) < reinterpret_cast<signed char>(0)) {
                            addr_403363_35:
                            if (!cf116) {
                                addr_403393_36:
                                __asm__("popad ");
                                __asm__("arpl [ebx+0x69], bp");
                                __asm__("outsb ");
                                goto addr_4033a5_37;
                            } else {
                                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                                *reinterpret_cast<struct s56**>(esp100) = ebx96;
                                if (of123) {
                                    addr_4033cd_39:
                                    __asm__("popad ");
                                    __asm__("arpl [ebx+0x69], bp");
                                    __asm__("outsb ");
                                    esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esi44) + 1);
                                    esp100 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebp115) + 0x6c) * 0x614d0064);
                                    cf116 = __intrinsic();
                                    zf122 = __undefined();
                                    goto addr_4033da_28;
                                } else {
                                    __asm__("arpl [ecx+0x61], bp");
                                    goto addr_40336b_41;
                                }
                            }
                        } else {
                            addr_4032fe_42:
                            __asm__("arpl [ebp+0x74], si");
                            goto addr_4032ff_14;
                        }
                    }
                } else {
                    ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
                    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(ecx93 == 0)))) 
                        goto addr_4032ea_24;
                    esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x72)) * 0x49003160);
                    cf116 = __intrinsic();
                    of119 = __intrinsic();
                    sf118 = __undefined();
                    zf117 = __undefined();
                    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                    *reinterpret_cast<struct s56**>(esp100) = eax114;
                    __asm__("popad ");
                    if (cf116) 
                        goto addr_403308_45; else 
                        goto addr_403295_46;
                }
            }
        }
    }
    __asm__("outsb ");
    __asm__("arpl [eax], ax");
    addr_403308_45:
    if (zf117) {
        addr_40336b_41:
        __asm__("insb ");
        edi14 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65)) * 0x553c0064);
        cf116 = __intrinsic();
        zf122 = __undefined();
        goto addr_40336f_27;
    } else {
        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
        *reinterpret_cast<struct s56**>(esp100) = eax114;
        if (cf116) {
            addr_40337e_15:
            __asm__("popad ");
            __asm__("arpl [ebx+0x69], bp");
            __asm__("outsb ");
            esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esi44) + 1);
            esp100 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebp115) + 0x6c) * 0x4c3c0064);
            cf116 = __intrinsic();
            of119 = __intrinsic();
            sf118 = __undefined();
            zf117 = __undefined();
            below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
            goto addr_403387_49;
        } else {
            if (!of119) {
                addr_403311_52:
                if (cf116) {
                    addr_403387_49:
                    goto addr_40338b_53;
                } else {
                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x73)) * 0x6f4c6f54);
                    __asm__("popad ");
                    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 100) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 100)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                    tmp8_124 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax114) + 0x72)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                    cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_124) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax114) + 0x72)));
                    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax114) + 0x72) = tmp8_124;
                    zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax114) + 0x72) == 0);
                    sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax114) + 0x72)) < reinterpret_cast<signed char>(0);
                    of119 = __intrinsic();
                    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                    __asm__("outsd ");
                    if (zf117) {
                        addr_40338b_53:
                        goto addr_40338c_55;
                    } else {
                        __asm__("arpl [ebp+0x64], si");
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx93) + 0x77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx93) + 0x77) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                        goto addr_40332c_57;
                    }
                }
            }
        }
    }
    addr_403377_33:
    __asm__("popad ");
    __asm__("insd ");
    ebx96 = reinterpret_cast<struct s56*>(*reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(edi14) + 95) * 66);
    goto addr_40337e_15;
    addr_40332c_57:
    __asm__("popad ");
    esi44 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebp115) + reinterpret_cast<unsigned char>(edx87) * 2 + 0x6e) * 0x65666173);
    edi14 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edi14) - 1);
    __asm__("outsb ");
    ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
    zf121 = ebx96 == 0;
    __asm__("outsd ");
    __asm__("insd ");
    if (__intrinsic()) {
        addr_4033a9_58:
        ebx96 = reinterpret_cast<struct s56*>(*reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(edi14) + 95) * 66);
        __asm__("popad ");
        goto addr_4033b5_59;
    } else {
        addr_40333d_17:
        if (zf121) 
            goto addr_4033a5_37;
    }
    addr_403340_60:
    tmp8_125 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
    cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_125) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)));
    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) = tmp8_125;
    if (!*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) {
        addr_4033a5_37:
        esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x73)) * 0x6d614e74);
        goto addr_4033a9_58;
    } else {
        ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) - 1);
        zf117 = reinterpret_cast<uint1_t>(ecx93 == 0);
        sf118 = reinterpret_cast<signed char>(ecx93) < reinterpret_cast<signed char>(0);
        of119 = __intrinsic();
        below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
        if (!cf116) {
            addr_40338c_55:
            __asm__("popad ");
            if (!cf116) {
                addr_403404_62:
                if (zf117) {
                    addr_403459_63:
                    if (zf117) {
                        addr_4034ba_64:
                        edi14 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edi14) - 1);
                        __asm__("outsb ");
                        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 97) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93)));
                        zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 97) == 0);
                        goto addr_4034c3_65;
                    } else {
                        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                        *reinterpret_cast<struct s56**>(esp100) = ebp115;
                        if (!cf116) {
                            addr_4034c3_65:
                            if (zf117) {
                                addr_403539_67:
                                tmp8_126 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                                cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_126) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65)));
                                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65) = tmp8_126;
                                __asm__("popad ");
                                goto addr_403542_68;
                            } else {
                                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                                *reinterpret_cast<struct s56**>(esp100) = reinterpret_cast<struct s56*>(0x72615769);
                                goto addr_4034c7_70;
                            }
                        } else {
                            if (cf116) {
                                addr_4034ae_72:
                                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) + 1);
                                __asm__("popad ");
                                if (!esp100) {
                                    goto addr_40351a_74;
                                } else {
                                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                                    *reinterpret_cast<struct s56**>(esp100) = esp100;
                                }
                            } else {
                                __asm__("popad ");
                                __asm__("insd ");
                                tmp8_127 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
                                cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_127) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)));
                                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) = tmp8_127;
                                if (!*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) {
                                    addr_4034c7_70:
                                    ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
                                    __asm__("outsd ");
                                    __asm__("insd ");
                                    __asm__("insd ");
                                    __asm__("popad ");
                                    __asm__("outsb ");
                                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 1);
                                    goto addr_4034d4_77;
                                } else {
                                    addr_403468_78:
                                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 1);
                                    zf117 = reinterpret_cast<uint1_t>(esp100 == 0);
                                    sf118 = reinterpret_cast<signed char>(esp100) < reinterpret_cast<signed char>(0);
                                    of119 = __intrinsic();
                                    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                                    __asm__("popad ");
                                    if (!cf116) {
                                        addr_4034e0_79:
                                        goto addr_4034e1_80;
                                    } else {
                                        esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esi44) - 1);
                                        __asm__("popad ");
                                        __asm__("insd ");
                                        tmp8_128 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
                                        cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_128) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)));
                                        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) = tmp8_128;
                                        if (!*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) {
                                            addr_4034d4_77:
                                            ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x65)) * 0x69725700);
                                            cf116 = __intrinsic();
                                            if (__undefined()) {
                                                addr_403542_68:
                                                edi14 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edi14) - 1);
                                                zf129 = edi14 == 0;
                                                __asm__("outsb ");
                                                __asm__("insb ");
                                                if (reinterpret_cast<signed char>(edi14) >= reinterpret_cast<signed char>(0)) {
                                                    goto addr_40358c_83;
                                                } else {
                                                    __asm__("outsd ");
                                                    __asm__("insb ");
                                                    __asm__("insb ");
                                                    __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                                                    goto addr_40354c_85;
                                                }
                                            } else {
                                                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 1);
                                                ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x65)) * 0x73414900);
                                                cf116 = __intrinsic();
                                                of119 = __intrinsic();
                                                sf118 = __undefined();
                                                zf117 = __undefined();
                                                below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                                                goto addr_4034e0_79;
                                            }
                                        } else {
                                            addr_403475_87:
                                            esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 1);
                                            __asm__("popad ");
                                            if (!cf116) 
                                                goto addr_4034ed_88;
                                        }
                                    }
                                }
                                esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esi44) - 1);
                                __asm__("popad ");
                                __asm__("insd ");
                                tmp8_130 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
                                cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_130) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)));
                                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) = tmp8_130;
                                zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) == 0);
                                sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) < reinterpret_cast<signed char>(0);
                                of119 = __intrinsic();
                                below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                                goto addr_40347d_90;
                            }
                        }
                    }
                } else {
                    __asm__("popad ");
                    if (!cf116) {
                        addr_40347f_92:
                        if (zf117) {
                            addr_4034e1_80:
                            if (!sf118) 
                                goto addr_403555_93; else 
                                goto addr_4034e7_94;
                        } else {
                            addr_403482_95:
                            esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x73)) * 0x6d614e74);
                            goto addr_40348a_96;
                        }
                    } else {
                        if (!below_or_equal120) {
                            addr_40347d_90:
                            goto addr_40347f_92;
                        } else {
                            if (cf116) {
                                goto addr_403475_87;
                            }
                            tmp8_131 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x6e)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
                            cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_131) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x6e)));
                            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x6e) = tmp8_131;
                            zf132 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x6e) == 0);
                            __asm__("arpl [edi+0x70], bx");
                            __asm__("popad ");
                            if (!cf116) 
                                goto addr_40348c_101; else 
                                goto addr_403419_102;
                        }
                    }
                }
            } else {
                __asm__("popad ");
                __asm__("insd ");
                goto addr_403393_36;
            }
        } else {
            __asm__("outsd ");
            __asm__("insd ");
            if (of119) {
                addr_4033b9_105:
                esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esi44) + 1);
                esp100 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebp115) + 0x6c) * 0x563c0064);
                cf116 = __intrinsic();
                if (cf116) {
                    addr_403427_106:
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx96) + *reinterpret_cast<int16_t*>(&edi14)) + 68) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx96) + *reinterpret_cast<int16_t*>(&edi14)) + 68) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93)));
                    goto addr_40342b_107;
                } else {
                    addr_4033c5_32:
                    __asm__("outsd ");
                    if (!cf116) {
                        addr_40342d_108:
                        __asm__("insb ");
                        tmp8_133 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                        cf116 = reinterpret_cast<uint1_t>(tmp8_133 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f));
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) = tmp8_133;
                        __asm__("outsb ");
                        if (!cf116) {
                            addr_4034aa_109:
                            goto addr_4034ad_110;
                        } else {
                            __asm__("insb ");
                            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
                            if (!*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) 
                                goto addr_4034a1_112;
                            ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
                            if (!__intrinsic()) 
                                goto addr_403445_114;
                        }
                    } else {
                        ebx96 = reinterpret_cast<struct s56*>(*reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(edi14) + 95) * 66);
                        goto addr_4033ca_116;
                    }
                }
            } else {
                if (zf117) {
                    addr_4033b5_59:
                    __asm__("arpl [ebx+0x69], bp");
                    __asm__("outsb ");
                    goto addr_4033b9_105;
                } else {
                    tmp8_134 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                    cf116 = reinterpret_cast<uint1_t>(tmp8_134 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79) = tmp8_134;
                    if (!cf116) {
                        addr_4033ca_116:
                        goto addr_4033cd_39;
                    } else {
                        __asm__("insd ");
                        ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
                        of123 = __intrinsic();
                        __asm__("outsd ");
                        __asm__("insb ");
                        __asm__("insb ");
                        __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                        __asm__("outsb ");
                        goto addr_403363_35;
                    }
                }
            }
        }
    }
    ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x65)) * 0x6e694600);
    goto addr_4034b6_121;
    addr_4034e7_94:
    __asm__("arpl [ebx+0x74], dx");
    __asm__("popad ");
    if (zf117) {
        addr_403552_122:
        __asm__("popad ");
        if (!cf116) {
            addr_4035ba_123:
            if (zf117) {
                addr_403630_124:
                if (zf117) {
                    addr_4036a6_125:
                    goto addr_4036aa_126;
                } else {
                    if (cf116) {
                        addr_40369d_128:
                        if (cf116) {
                            __asm__("insd ");
                            ebp115 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebp115) + 86) * 0x69737265);
                            cf116 = __intrinsic();
                            goto addr_4036a6_125;
                        }
                    } else {
                        tmp8_135 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp115) + 0x66) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                        cf116 = reinterpret_cast<uint1_t>(tmp8_135 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp115) + 0x66));
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp115) + 0x66) = tmp8_135;
                        zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp115) + 0x66) == 0);
                        __asm__("popad ");
                        goto addr_40363d_132;
                    }
                }
            } else {
                if (cf116) {
                    goto addr_403628_135;
                } else {
                    goto addr_4035c0_137;
                }
            }
        } else {
            addr_403555_93:
            tmp8_136 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
            cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_136) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)));
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) = tmp8_136;
            zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) == 0);
            sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) < reinterpret_cast<signed char>(0);
            of119 = __intrinsic();
            below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
            if (zf117) {
                addr_4035b9_138:
                goto addr_4035ba_123;
            } else {
                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                *reinterpret_cast<struct s56**>(esp100) = esi44;
                if (cf116) {
                    addr_4035c0_137:
                    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x75) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x75)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                    goto addr_4035c5_140;
                } else {
                    addr_40355e_141:
                    __asm__("outsd ");
                    if (!cf116) {
                        addr_4035c6_142:
                        goto addr_4035cc_143;
                    } else {
                        tmp8_137 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
                        cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_137) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)));
                        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) = tmp8_137;
                        zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) == 0);
                        goto addr_403562_145;
                    }
                }
            }
        }
    } else {
        addr_4034ed_88:
        ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebp115) - 1);
        __asm__("popad ");
        goto addr_4034ef_146;
    }
    addr_403705_147:
    if (zf117) {
        addr_403770_148:
        esi44 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx93) + reinterpret_cast<unsigned char>(edi14) * 2 + 65) * 0x69727474);
        goto addr_403778_149;
    } else {
        __asm__("outsd ");
        __asm__("outsb ");
        if (!cf116) {
            addr_40374c_151:
            __asm__("insd ");
            goto addr_40374e_152;
        } else {
            if (zf117) {
                addr_403781_154:
                __asm__("insb ");
                if (!zf117) {
                    addr_4037e9_155:
                    if (zf117) {
                        addr_403857_156:
                        __asm__("insb ");
                        goto addr_403858_157;
                    } else {
                        edx87 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 97)) * 0x432e6572);
                        goto addr_4037f6_159;
                    }
                } else {
                    tmp8_138 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                    cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_138) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x73)));
                    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x73) = tmp8_138;
                    sf139 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x73)) < reinterpret_cast<signed char>(0);
                    goto addr_403785_161;
                }
            } else {
                if (cf116) {
                    addr_403778_149:
                    goto addr_40377d_163;
                } else {
                    tmp8_140 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                    cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_140) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)));
                    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) = tmp8_140;
                    zf141 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) == 0);
                    sf139 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) < reinterpret_cast<signed char>(0);
                    if (!cf116) {
                        addr_40377d_163:
                        tmp8_142 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
                        cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_142) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 97)));
                        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 97) = tmp8_142;
                        zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 97) == 0);
                        sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 97)) < reinterpret_cast<signed char>(0);
                        of119 = __intrinsic();
                        below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                        goto addr_403781_154;
                    } else {
                        __asm__("insd ");
                        goto addr_40371c_166;
                    }
                }
            }
        }
    }
    addr_403562_145:
    if (zf117) {
        addr_4035c5_140:
        esp100 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx93) + reinterpret_cast<unsigned char>(eax114) * 2 + 0x74) * 0x62697274);
        cf116 = __intrinsic();
        zf117 = __undefined();
        goto addr_4035c6_142;
    } else {
        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
        *reinterpret_cast<struct s56**>(esp100) = esi44;
        if (cf116) {
            addr_4035cc_143:
            if (!zf117) {
                addr_403643_168:
                if (!zf117) {
                    addr_4036aa_126:
                    goto addr_4036ab_169;
                } else {
                    ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
                    if (!ecx93) {
                        addr_4036bc_171:
                        __asm__("insd ");
                        __asm__("outsd ");
                        __asm__("outsb ");
                        *reinterpret_cast<uint16_t*>(&esp100) = reinterpret_cast<uint16_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x75)) * 0x6172);
                        cf116 = __intrinsic();
                        of119 = __intrinsic();
                        sf118 = __undefined();
                        zf117 = __undefined();
                        below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                        if (zf117) {
                            addr_403734_172:
                            __asm__("outsd ");
                            if (of119) {
                                addr_4037b2_173:
                                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                                *reinterpret_cast<struct s56**>(esp100) = edx87;
                                if (!zf117) {
                                    addr_403824_174:
                                    __asm__("insb ");
                                    __asm__("insb ");
                                    tmp8_143 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax114) + 0x72)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                                    cf144 = reinterpret_cast<unsigned char>(tmp8_143) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax114) + 0x72));
                                    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax114) + 0x72) = tmp8_143;
                                    __asm__("outsd ");
                                    if (cf144) {
                                        addr_40388e_175:
                                        __asm__("outsd ");
                                        __asm__("insb ");
                                        __asm__("insb ");
                                        __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                                        goto addr_403892_176;
                                    } else {
                                        __asm__("insd ");
                                        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
                                        if (!*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) {
                                            addr_403892_176:
                                            __asm__("outsb ");
                                            tmp8_145 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x74) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                                            cf116 = reinterpret_cast<uint1_t>(tmp8_145 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x74));
                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x74) = tmp8_145;
                                            if (cf116) {
                                                addr_403905_178:
                                                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                                                *reinterpret_cast<struct s56**>(esp100) = reinterpret_cast<struct s56*>(0x7542646f);
                                                ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esp100) + 0x65)) * 0x43490072);
                                                goto addr_403911_179;
                                            } else {
                                                addr_40389c_180:
                                                __asm__("outsb ");
                                                ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
                                                __asm__("outsd ");
                                                __asm__("insb ");
                                                __asm__("insb ");
                                                __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                                                __asm__("outsb ");
                                                tmp8_146 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                                                cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_146) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)));
                                                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) = tmp8_146;
                                                zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) == 0);
                                                __asm__("popad ");
                                                if (cf116) {
                                                    addr_403911_179:
                                                    goto addr_403912_181;
                                                } else {
                                                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                                                    *reinterpret_cast<struct s56**>(esp100) = reinterpret_cast<struct s56*>(0x75736552);
                                                    goto addr_4038b0_183;
                                                }
                                            }
                                        } else {
                                            addr_403833_184:
                                            ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) - 1);
                                            if (!ecx93) {
                                                goto addr_40389c_180;
                                            } else {
                                                __asm__("insd ");
                                                tmp8_147 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                                                cf116 = reinterpret_cast<uint1_t>(tmp8_147 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79));
                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79) = tmp8_147;
                                                zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79) == 0);
                                                goto addr_403838_187;
                                            }
                                        }
                                    }
                                } else {
                                    addr_4037b6_188:
                                    if (zf117) {
                                        addr_403821_189:
                                        __asm__("outsb ");
                                        ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
                                        goto addr_403824_174;
                                    } else {
                                        __asm__("insd ");
                                        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                                        *reinterpret_cast<struct s56**>(esp100) = esi44;
                                        if (cf116) {
                                            goto addr_403833_184;
                                        } else {
                                            ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x6e)) * 0x676e69);
                                            cf116 = __intrinsic();
                                        }
                                    }
                                }
                            } else {
                                if (cf116) {
                                    addr_4037a4_194:
                                    __asm__("outsd ");
                                    ebp115 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi44) + 0x67) * 0x73795300);
                                    cf116 = __intrinsic();
                                    of119 = __intrinsic();
                                    sf118 = __undefined();
                                    zf117 = __undefined();
                                    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                                    goto addr_4037ac_195;
                                } else {
                                    addr_40373b_196:
                                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                                    *reinterpret_cast<struct s56**>(esp100) = reinterpret_cast<struct s56*>(0x74744174);
                                    goto addr_403740_197;
                                }
                            }
                        } else {
                            addr_4036cb_198:
                            __asm__("outsd ");
                            __asm__("outsb ");
                            ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
                            zf117 = reinterpret_cast<uint1_t>(ecx93 == 0);
                            sf118 = reinterpret_cast<signed char>(ecx93) < reinterpret_cast<signed char>(0);
                            of119 = __intrinsic();
                            below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                            goto addr_4036ce_199;
                        }
                    } else {
                        if (cf116) 
                            goto addr_4036b3_201; else 
                            goto addr_40364a_202;
                    }
                }
            } else {
                tmp8_148 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp115) + 98) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                cf116 = reinterpret_cast<uint1_t>(tmp8_148 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp115) + 98));
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp115) + 98) = tmp8_148;
                zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp115) + 98) == 0);
                goto addr_4035d2_204;
            }
        } else {
            __asm__("outsd ");
            if (!cf116) {
                addr_4035d2_204:
                goto addr_4035d4_206;
            } else {
                tmp8_149 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
                cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_149) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x65)));
                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x65) = tmp8_149;
                zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x65) == 0);
                goto addr_40356f_208;
            }
        }
    }
    addr_4037c5_209:
    esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esi44) + 1);
    zf117 = reinterpret_cast<uint1_t>(esi44 == 0);
    if (cf116) {
        addr_403838_187:
        if (!cf116) {
            addr_4038b0_183:
            goto addr_4038b2_210;
        } else {
            addr_40383c_211:
            __asm__("insd ");
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 97) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
            zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 97) == 0);
            __asm__("outsb ");
            __asm__("arpl [ebp+0x6c], sp");
            goto addr_403845_212;
        }
    } else {
        __asm__("insd ");
        edx87 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edx87) + 1);
        __asm__("popad ");
        if (!cf116) 
            goto addr_403833_184; else 
            goto addr_4037ce_214;
    }
    addr_40364a_202:
    tmp8_150 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
    cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_150) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)));
    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) = tmp8_150;
    zf141 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) == 0);
    if (!cf116) {
        addr_4036b8_215:
        if (!cf116) {
            goto addr_403722_217;
        }
    } else {
        addr_403653_218:
        __asm__("insd ");
        if (cf116) {
            goto addr_4036bc_171;
        } else {
            __asm__("insd ");
            goto addr_40365d_221;
        }
    }
    addr_40348c_101:
    if (zf132) {
        addr_4034ef_146:
        __asm__("arpl [eax+0x69], bp");
        __asm__("outsb ");
        tmp8_151 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
        cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_151) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)));
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) = tmp8_151;
        zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) == 0);
        if (zf117) {
            addr_40354c_85:
            __asm__("outsb ");
            edx87 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edx87) + 1);
            zf117 = reinterpret_cast<uint1_t>(edx87 == 0);
            sf118 = reinterpret_cast<signed char>(edx87) < reinterpret_cast<signed char>(0);
            of119 = __intrinsic();
            below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
            goto addr_403552_122;
        } else {
            if (zf117) {
                goto addr_40355e_141;
            }
            if (zf117) 
                goto addr_403562_145;
        }
    } else {
        esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x73)) * 0x6d614e74);
        tmp8_152 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
        cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_152) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x73)));
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x73) = tmp8_152;
        goto addr_403499_226;
    }
    ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebp115) - 1);
    __asm__("popad ");
    __asm__("arpl [eax+0x69], bp");
    __asm__("outsb ");
    tmp8_153 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x74) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    cf116 = reinterpret_cast<uint1_t>(tmp8_153 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x74));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x74) = tmp8_153;
    zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x74) == 0);
    __asm__("popad ");
    if (zf117) {
        addr_40356f_208:
        if (cf116) {
            addr_4035d4_206:
            if (!zf117) {
                addr_40363d_132:
                if (!zf117) {
                    addr_4036ab_169:
                    __asm__("outsd ");
                    __asm__("outsb ");
                    ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
                    zf141 = reinterpret_cast<uint1_t>(ecx93 == 0);
                    sf139 = reinterpret_cast<signed char>(ecx93) < reinterpret_cast<signed char>(0);
                    if (zf141) {
                        goto addr_403726_229;
                    }
                } else {
                    if (zf117) {
                        addr_403697_231:
                        tmp8_154 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                        cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_154) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)));
                        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) = tmp8_154;
                        zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) == 0);
                        sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) < reinterpret_cast<signed char>(0);
                        of119 = __intrinsic();
                        below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                        goto addr_40369d_128;
                    } else {
                        __asm__("popad ");
                        __asm__("insb ");
                        goto addr_403643_168;
                    }
                }
            } else {
                __asm__("a16 popad ");
                goto addr_4035da_234;
            }
        } else {
            __asm__("outsd ");
            if (!cf116) {
                addr_4035da_234:
                if (zf117) {
                    goto addr_403653_218;
                }
            } else {
                tmp8_155 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx93) + reinterpret_cast<unsigned char>(ebp115) * 2 + 0x73) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                cf116 = reinterpret_cast<uint1_t>(tmp8_155 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx93) + reinterpret_cast<unsigned char>(ebp115) * 2 + 0x73));
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx93) + reinterpret_cast<unsigned char>(ebp115) * 2 + 0x73) = tmp8_155;
                zf156 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx93) + reinterpret_cast<unsigned char>(ebp115) * 2 + 0x73) == 0;
                if (__intrinsic()) {
                    addr_4035ea_238:
                    if (zf156) {
                        addr_403666_239:
                        tmp8_157 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x72)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                        cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_157) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x72)));
                        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x72) = tmp8_157;
                        zf141 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x72) == 0);
                        of119 = __intrinsic();
                        if (zf141) {
                            addr_4036b7_240:
                            goto addr_4036b8_215;
                        } else {
                            if (cf116) 
                                goto addr_4036d4_242;
                            __asm__("insd ");
                            if (!reinterpret_cast<uint1_t>(cf116 | zf141)) {
                                goto addr_4036e7_245;
                            }
                            if (cf116) 
                                goto addr_4036e4_247; else 
                                goto addr_403679_248;
                        }
                    } else {
                        if (cf116) {
                            addr_40365d_221:
                            __asm__("popad ");
                            if (cf116) 
                                goto addr_4036cb_198; else 
                                goto addr_403660_250;
                        } else {
                            addr_4035f4_251:
                            tmp8_158 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                            cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_158) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)));
                            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) = tmp8_158;
                            zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) == 0);
                            sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) < reinterpret_cast<signed char>(0);
                            of119 = __intrinsic();
                            below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                            goto addr_4035f8_252;
                        }
                    }
                } else {
                    if (!cf116) {
                        addr_4035e2_254:
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                        __asm__("insd ");
                        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                        *reinterpret_cast<struct s56**>(esp100) = esi44;
                        goto addr_4035e9_255;
                    } else {
                        addr_40357d_256:
                        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x72) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x72)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                        zf159 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x72) == 0;
                        goto addr_40357f_257;
                    }
                }
            }
        }
    } else {
        ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebp115) - 1);
        __asm__("popad ");
        __asm__("arpl [eax+0x69], bp");
        goto addr_40350d_259;
    }
    if (cf116) {
        addr_40371c_166:
        if (cf116) {
            goto addr_403791_262;
        }
    } else {
        addr_4036b3_201:
        tmp8_160 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
        cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_160) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)));
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) = tmp8_160;
        zf141 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) == 0);
        goto addr_4036b7_240;
    }
    if (!zf141) {
        addr_403785_161:
        if (cf116) 
            goto addr_4037d3_264;
    } else {
        addr_403722_217:
        if (zf141) {
            goto addr_403766_266;
        }
    }
    __asm__("outsb ");
    __asm__("outsw ");
    if (sf139) {
        addr_4037f6_159:
        __asm__("outsd ");
        __asm__("insd ");
        __asm__("insd ");
        __asm__("popad ");
        __asm__("outsb ");
        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 1);
        ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x65)) * 0x7362412e);
        cf116 = __intrinsic();
        of119 = __intrinsic();
        sf118 = __undefined();
        zf117 = __undefined();
        below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
        if (zf117) {
            addr_403878_268:
            __asm__("outsb ");
            tmp8_161 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
            cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_161) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65)));
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65) = tmp8_161;
            zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65) == 0);
            sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65)) < reinterpret_cast<signed char>(0);
            of119 = __intrinsic();
            below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
            if (!cf116) {
                addr_4038f3_269:
                if (cf116) {
                    addr_403940_270:
                    goto addr_403941_271;
                } else {
                    __asm__("outsb ");
                    __asm__("outsw ");
                    goto addr_4038f9_273;
                }
            } else {
                __asm__("insb ");
                if (zf117) {
                    addr_4038d1_275:
                    __asm__("insb ");
                    __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                    __asm__("outsb ");
                    tmp8_162 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                    cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_162) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)));
                    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) = tmp8_162;
                    zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) == 0);
                    sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) < reinterpret_cast<signed char>(0);
                    of119 = __intrinsic();
                    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                    if (zf117) {
                        addr_403922_276:
                        if (zf117) {
                            addr_40398e_277:
                            goto addr_403992_278;
                        } else {
                            __asm__("outsd ");
                            __asm__("outsb ");
                            edx87 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edx87) + 1);
                            if (edx87) {
                                addr_403993_280:
                                edi14 = *reinterpret_cast<struct s56**>(esp100);
                                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) + 4);
                                esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esi44) + 1);
                                ebp115 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esp100) + reinterpret_cast<unsigned char>(esi44) * 2 + 0x65) * 0x45490072);
                                cf116 = __intrinsic();
                                zf117 = __undefined();
                                goto addr_403999_281;
                            } else {
                                __asm__("insb ");
                            }
                            cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)) < 62);
                            zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&eax114) == 62);
                            goto addr_403930_284;
                        }
                    } else {
                        if (sf118) {
                            addr_403942_286:
                            if (!sf118) {
                                addr_403999_281:
                                __asm__("outsb ");
                                if (zf117) {
                                    if (cf116) {
                                        goto addr_403a07_290;
                                    } else {
                                        if (zf117) {
                                            addr_403a16_292:
                                            if (zf117) {
                                                addr_403a81_293:
                                                goto addr_403a84_294;
                                            } else {
                                                __asm__("insd ");
                                                ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) - 1);
                                                zf117 = reinterpret_cast<uint1_t>(ecx93 == 0);
                                                sf118 = reinterpret_cast<signed char>(ecx93) < reinterpret_cast<signed char>(0);
                                                of119 = __intrinsic();
                                                below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                                                __asm__("outsb ");
                                                goto addr_403a1d_296;
                                            }
                                        } else {
                                            edi14 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edi14) + 1);
                                            zf117 = reinterpret_cast<uint1_t>(edi14 == 0);
                                            sf118 = reinterpret_cast<signed char>(edi14) < reinterpret_cast<signed char>(0);
                                            of119 = __intrinsic();
                                            below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                                            if (zf117) {
                                                addr_4039f2_299:
                                                __asm__("outsd ");
                                                __asm__("insd ");
                                                __asm__("insd ");
                                                __asm__("popad ");
                                                __asm__("outsb ");
                                                if (!cf116) 
                                                    goto addr_4039fa_300; else 
                                                    goto addr_4039fa_300;
                                            } else {
                                                addr_4039ad_301:
                                                __asm__("outsb ");
                                                if (!zf117) {
                                                    addr_403a1d_296:
                                                    if (zf117) {
                                                        addr_403a84_294:
                                                        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                                                        *reinterpret_cast<struct s56**>(esp100) = reinterpret_cast<struct s56*>(0x69746e65);
                                                        __asm__("arpl [ecx+0x74], sp");
                                                        ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x6e)) * 0x65707954);
                                                        cf116 = __intrinsic();
                                                        goto addr_403a90_302;
                                                    } else {
                                                        if (cf116) {
                                                            addr_403a90_302:
                                                            if (!cf116) 
                                                                goto addr_403a96_304; else 
                                                                goto addr_403a96_304;
                                                        } else {
                                                            if (of119) {
                                                                goto addr_403a77_307;
                                                            }
                                                            if (cf116) 
                                                                goto addr_403a9c_309; else 
                                                                goto addr_403a26_310;
                                                        }
                                                    }
                                                } else {
                                                    addr_4039b0_311:
                                                    if (cf116) {
                                                        addr_403a14_312:
                                                        if (!zf117) 
                                                            goto addr_403a84_294; else 
                                                            goto addr_403a16_292;
                                                    } else {
                                                        if (zf117) {
                                                            goto addr_403a25_315;
                                                        }
                                                        __asm__("arpl [cs:edi+ebp*2+0x72], si");
                                                        tmp8_163 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93 + 1)));
                                                        cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_163) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)));
                                                        *reinterpret_cast<struct s56**>(esi44) = tmp8_163;
                                                        zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<struct s56**>(esi44) == 0);
                                                        sf164 = reinterpret_cast<signed char>(*reinterpret_cast<struct s56**>(esi44)) < reinterpret_cast<signed char>(0);
                                                        of165 = __intrinsic();
                                                        __asm__("arpl [ebx+0x74], sp");
                                                        __asm__("outsd ");
                                                        goto addr_4039c2_318;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                __asm__("popad ");
                                if (cf116) 
                                    goto addr_4039ad_301;
                                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                                *reinterpret_cast<struct s56**>(esp100) = reinterpret_cast<struct s56*>(0x46007265);
                                ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 100)) * 0x72657355);
                                goto addr_403956_321;
                            }
                        } else {
                            addr_4038df_322:
                            if (of119) {
                                addr_403956_321:
                                tmp8_166 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                                cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_166) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)));
                                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) = tmp8_166;
                                zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) == 0);
                                sf164 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) < reinterpret_cast<signed char>(0);
                                of165 = __intrinsic();
                                if (zf117) 
                                    goto addr_4039b0_311; else 
                                    goto addr_40395b_323;
                            } else {
                                of119 = __intrinsic();
                                __asm__("arpl [edx+0x69], si");
                                goto addr_4038ea_325;
                            }
                        }
                    }
                } else {
                    if (cf116) 
                        goto addr_4038f2_327;
                    if (of119) 
                        goto addr_4038ea_325; else 
                        goto addr_403885_329;
                }
            }
        } else {
            __asm__("popad ");
            __asm__("arpl [ecx+ebp*2+0x6f], si");
            goto addr_40380a_331;
        }
    } else {
        addr_403791_262:
        tmp8_167 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
        cf116 = reinterpret_cast<uint1_t>(tmp8_167 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79) = tmp8_167;
        zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79) == 0);
        sf118 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79) < reinterpret_cast<signed char>(0);
        of119 = __intrinsic();
        below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
        if (!cf116) {
            addr_40380a_331:
            __asm__("outsb ");
            if (!cf116) 
                goto addr_40383c_211; else 
                goto addr_40380e_332;
        } else {
            addr_403796_333:
            __asm__("insd ");
            esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
            *reinterpret_cast<struct s56**>(esp100) = esp100;
            goto addr_403799_334;
        }
    }
    addr_403a10_335:
    __asm__("insd ");
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
    *reinterpret_cast<struct s56**>(esp100) = edx87;
    goto addr_403a14_312;
    addr_403a07_290:
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) * 0x79530073);
    cf116 = __intrinsic();
    zf117 = __undefined();
    if (!cf116) 
        goto addr_403a84_294; else 
        goto addr_403a10_335;
    addr_4039fa_300:
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
    *reinterpret_cast<struct s56**>(esp100) = ebp115;
    if (!cf116) {
        addr_403a62_336:
        ebp115 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(&(*reinterpret_cast<struct s76**>(&ebp115))->f67) * 0x65646f4d);
        cf116 = __intrinsic();
        of119 = __intrinsic();
        sf118 = __undefined();
        zf117 = __undefined();
        below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
    } else {
        if (cf116) {
            addr_403a48_338:
            if (!cf116) 
                goto addr_403ac3_339; else 
                goto addr_403a4f_340;
        } else {
            __asm__("outsb ");
            __asm__("outsw ");
            *reinterpret_cast<struct s56**>(reinterpret_cast<unsigned char>(esp100) - 4) = ebx96;
            if (cf116) {
                goto addr_403a7e_343;
            }
        }
    }
    if (zf117) {
        addr_403ad6_345:
        ebp115 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi44) + 0x67) * 0x7361542e);
        esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebx96)) * 67);
        cf116 = __intrinsic();
        of119 = __intrinsic();
        sf118 = __undefined();
        zf117 = __undefined();
        below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
        goto addr_403ae1_346;
    } else {
        addr_403a77_307:
        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
        *reinterpret_cast<struct s56**>(esp100) = eax114;
        if (cf116) {
            addr_403ae9_347:
            if (zf117) {
                addr_403b55_348:
                if (zf117) {
                    addr_403bc0_349:
                    goto addr_403bc2_350;
                } else {
                    __asm__("outsd ");
                    __asm__("outsb ");
                    if (zf117) {
                        goto addr_403bbf_354;
                    }
                    eax114 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(eax114) - 1);
                    __asm__("popad ");
                    if (cf116) 
                        goto addr_403b63_356;
                }
            } else {
                __asm__("insd ");
                ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
                goto addr_403af2_358;
            }
        } else {
            if (of119) {
                addr_403ae1_346:
                __asm__("outsd ");
                __asm__("outsb ");
                if (zf117) {
                    addr_403b48_360:
                    if (cf116) {
                        addr_403b9b_361:
                        if (zf117) 
                            goto addr_403bf0_362; else 
                            goto addr_403b9e_363;
                    } else {
                        if (of119) {
                            addr_403bc2_350:
                            __asm__("outsb ");
                            if (below_or_equal120) {
                                addr_403c2a_365:
                                tmp8_168 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93)));
                                cf169 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_168) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)));
                                *reinterpret_cast<struct s56**>(esi44) = tmp8_168;
                                if (cf169 | reinterpret_cast<uint1_t>(*reinterpret_cast<struct s56**>(esi44) == 0)) 
                                    goto addr_403c30_366; else 
                                    goto addr_403c30_366;
                            } else {
                                if (cf116) {
                                    addr_403c3b_368:
                                    goto addr_403c3c_369;
                                } else {
                                    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93 + 1)));
                                    *reinterpret_cast<uint16_t*>(&esi44) = reinterpret_cast<uint16_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x73)) * 0x74);
                                    ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebp115) - 1);
                                    __asm__("outsd ");
                                    if (__intrinsic() | reinterpret_cast<uint1_t>(ebp115 == 0)) {
                                        addr_403c3c_369:
                                        ecx93 = *reinterpret_cast<struct s56**>(esp100);
                                        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) + 4);
                                        *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93 + 1)));
                                        if (__intrinsic()) 
                                            goto addr_403c42_372; else 
                                            goto addr_403c42_372;
                                    } else {
                                        addr_403bd7_373:
                                        esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esi44) - 1);
                                        if (reinterpret_cast<signed char>(esi44) < reinterpret_cast<signed char>(0)) {
                                            addr_403c4f_374:
                                            tmp8_170 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp115)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93 + 1)));
                                            cf171 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_170) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp115)));
                                            *reinterpret_cast<struct s56**>(ebp115) = tmp8_170;
                                            below_or_equal172 = reinterpret_cast<uint1_t>(cf171 | reinterpret_cast<uint1_t>(*reinterpret_cast<struct s56**>(ebp115) == 0));
                                            goto addr_403c54_375;
                                        } else {
                                            addr_403bdb_376:
                                            tmp8_173 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                                            cf174 = reinterpret_cast<uint1_t>(tmp8_173 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79));
                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79) = tmp8_173;
                                            sf175 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79) < reinterpret_cast<signed char>(0);
                                            below_or_equal172 = reinterpret_cast<uint1_t>(cf174 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x79) == 0));
                                            if (!cf174) {
                                                addr_403c54_375:
                                                if (below_or_equal172) 
                                                    goto addr_403c56_377; else 
                                                    goto addr_403c56_377;
                                            } else {
                                                __asm__("insd ");
                                                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                                                *reinterpret_cast<struct s56**>(esp100) = esp100;
                                                if (sf175) {
                                                    addr_403c5b_379:
                                                    *reinterpret_cast<struct s56**>(ebp115) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp115)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
                                                    __asm__("aaa ");
                                                    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                                                    goto addr_403c60_380;
                                                } else {
                                                    addr_403be7_381:
                                                    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93 + 1)));
                                                    if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) >= reinterpret_cast<signed char>(0)) 
                                                        goto addr_403bec_382; else 
                                                        goto addr_403bec_382;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x6e)) * 0x706f0073);
                            cf116 = __intrinsic();
                            zf117 = __undefined();
                            below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                            goto addr_403b55_348;
                        }
                    }
                } else {
                    ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x73)) * 0x73795300);
                    cf116 = __intrinsic();
                    zf117 = __undefined();
                    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                    goto addr_403ae9_347;
                }
            } else {
                if (cf116) {
                    addr_403af2_358:
                    __asm__("outsd ");
                    __asm__("insb ");
                    __asm__("insb ");
                    __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                    __asm__("outsb ");
                    if (!cf116) 
                        goto addr_403afe_386; else 
                        goto addr_403afe_386;
                } else {
                    addr_403a7e_343:
                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x73)) * 0x74754100);
                    goto addr_403a81_293;
                }
            }
        }
    }
    ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
    zf117 = reinterpret_cast<uint1_t>(ebx96 == 0);
    sf118 = reinterpret_cast<signed char>(ebx96) < reinterpret_cast<signed char>(0);
    goto addr_403ba9_388;
    addr_403b63_356:
    if (cf116) 
        goto addr_403bd7_373;
    __asm__("outsd ");
    if (cf116) 
        goto addr_403bdb_376;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
    __asm__("outsb ");
    __asm__("arpl [ecx+0x74], sp");
    tmp8_176 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi14) + 98) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93)));
    cf116 = reinterpret_cast<uint1_t>(tmp8_176 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi14) + 98));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi14) + 98) = tmp8_176;
    zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi14) + 98) == 0);
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
    *reinterpret_cast<struct s56**>(esp100) = reinterpret_cast<struct s56*>(0x65);
    goto addr_403b73_391;
    addr_403b9e_363:
    if (!cf116) {
        addr_403c16_392:
        if (!sf118) {
            addr_403c60_380:
            esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
            *reinterpret_cast<struct s56**>(esp100) = reinterpret_cast<struct s56*>(0x57007400);
            *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
        } else {
            __asm__("outsb ");
            if (zf117) {
                addr_403c90_394:
                __asm__("insd ");
                *reinterpret_cast<struct s56**>(ecx93) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ecx93)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
                __asm__("outsb ");
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax114) + reinterpret_cast<unsigned char>(eax114) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax114) + reinterpret_cast<unsigned char>(eax114) + 0x6f) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
                goto addr_403c96_395;
            } else {
                addr_403c1e_396:
            }
            __asm__("outsb ");
            if (zf117) {
                addr_403c96_395:
                *reinterpret_cast<struct s56**>(eax114) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                eax177 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax114) & 0x44004c);
                ecx178 = reinterpret_cast<struct s77*>(reinterpret_cast<unsigned char>(ecx93) + 1);
                *eax177 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax177) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                __asm__("das ");
                *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
                *reinterpret_cast<struct s56**>(ebx96) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebx96)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
                if (*reinterpret_cast<struct s56**>(ebx96)) 
                    goto addr_403cae_398; else 
                    goto addr_403cae_398;
            } else {
                if (!sf118) 
                    goto addr_403c26_400; else 
                    goto addr_403c26_400;
            }
        }
    } else {
        __asm__("insb ");
        if (zf117) {
            goto addr_403c08_404;
        }
    }
    addr_403c6e_406:
    esp179 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
    *reinterpret_cast<struct s56**>(esp179) = eax114;
    *reinterpret_cast<struct s56**>(ebx96) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebx96)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    edi14 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edi14) - 1);
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *reinterpret_cast<struct s56**>(esi44) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93 + 1)));
    *reinterpret_cast<struct s56**>(ecx93) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ecx93)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96)));
    eax114 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(eax114) - reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)));
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp179) - 4);
    *reinterpret_cast<struct s56**>(esp100) = ebp115;
    *reinterpret_cast<struct s56**>(ecx93) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ecx93)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    goto addr_403c83_408;
    addr_403cae_398:
    __asm__("outsd ");
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *eax177 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax177) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    tmp8_180 = reinterpret_cast<unsigned char>(ecx178->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96)));
    cf181 = tmp8_180 < ecx178->f0;
    ecx178->f0 = tmp8_180;
    __asm__("outsd ");
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    esp182 = reinterpret_cast<struct s78*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esp100)) + 4);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax177) + reinterpret_cast<uint32_t>(eax177) + 100) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax177) + reinterpret_cast<uint32_t>(eax177) + 100) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    ecx178->f0 = reinterpret_cast<unsigned char>(ecx178->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax177) + 1)));
    ecx178->f5b = reinterpret_cast<unsigned char>(ecx178->f5b + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax177) + 1)));
    tmp8_183 = reinterpret_cast<unsigned char>(g20005d00 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    g20005d00 = tmp8_183;
    ecx178->f0 = reinterpret_cast<unsigned char>(ecx178->f0 + *reinterpret_cast<unsigned char*>(&eax177));
    *eax177 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax177) & *reinterpret_cast<unsigned char*>(&eax177));
    __asm__("insb ");
    *reinterpret_cast<struct s56**>(ebp115) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp115)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax177) + 1)));
    __asm__("popad ");
    *reinterpret_cast<struct s56**>(ebx96) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebx96)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *eax177 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax177) & *reinterpret_cast<unsigned char*>(&eax177));
    __asm__("outsd ");
    *reinterpret_cast<struct s56**>(esi44) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    *eax177 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax177) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax177) + 1)));
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    *eax177 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax177) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax177) + 1)));
    tmp8_184 = reinterpret_cast<unsigned char>(g69006600 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    g69006600 = tmp8_184;
    tmp8_185 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    cf186 = reinterpret_cast<unsigned char>(tmp8_185) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87));
    *reinterpret_cast<struct s56**>(edx87) = tmp8_185;
    *eax177 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax177) & *reinterpret_cast<unsigned char*>(&eax177));
    __asm__("outsd ");
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *eax177 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax177) & *reinterpret_cast<unsigned char*>(&eax177));
    eax187 = reinterpret_cast<unsigned char*>(eax177 - 0x61006c00);
    *reinterpret_cast<struct s56**>(ebx96) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebx96)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *eax187 = reinterpret_cast<unsigned char>(*eax187 & *reinterpret_cast<unsigned char*>(&eax187));
    eax188 = reinterpret_cast<int32_t*>(*eax187 * 0x200073);
    ecx178->f0 = reinterpret_cast<unsigned char>(ecx178->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    eax189 = reinterpret_cast<void**>(*eax188 * 0x650072);
    *reinterpret_cast<struct s56**>(esi44) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    ecx178->f0 = reinterpret_cast<unsigned char>(ecx178->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax189)));
    esp190 = &esp182->f2;
    *eax189 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax189) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax189)));
    tmp8_191 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(*reinterpret_cast<int16_t*>(&ebx96) + *reinterpret_cast<int16_t*>(&edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    cf192 = reinterpret_cast<uint1_t>(tmp8_191 < *reinterpret_cast<unsigned char*>(*reinterpret_cast<int16_t*>(&ebx96) + *reinterpret_cast<int16_t*>(&edi14)));
    *reinterpret_cast<unsigned char*>(*reinterpret_cast<int16_t*>(&ebx96) + *reinterpret_cast<int16_t*>(&edi14)) = tmp8_191;
    *reinterpret_cast<struct s56**>(esi44) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    esi193 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esi44) - 1);
    ecx178->f0 = reinterpret_cast<unsigned char>(ecx178->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax189) + 1)));
    __asm__("insd ");
    *reinterpret_cast<struct s56**>(ebp115) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp115)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax189) + 1)));
    *eax189 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax189) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax189)));
    *eax189 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax189) | reinterpret_cast<unsigned char>(ebp115));
    *reinterpret_cast<struct s56**>(ebx96) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebx96)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    __asm__("outsb ");
    tmp8_194 = reinterpret_cast<unsigned char>(g281b0000 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96 + 1)));
    g281b0000 = tmp8_194;
    *reinterpret_cast<struct s56**>(esi193) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi193)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax189) + 1)));
    *eax189 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax189) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax189) + 1)));
    eax195 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*eax189) * 0x650076);
    __asm__("outsb ");
    *reinterpret_cast<struct s56**>(esi193) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi193)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx178)));
    __asm__("popad ");
    *reinterpret_cast<struct s56**>(ebp115) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp115)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    tmp8_196 = reinterpret_cast<unsigned char>(g290b0000 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96 + 1)));
    g290b0000 = tmp8_196;
    *eax195 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax195) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    *reinterpret_cast<struct s56**>(ebx96) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebx96)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    __asm__("outsb ");
    tmp8_197 = reinterpret_cast<unsigned char>(g29050000 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96 + 1)));
    g29050000 = tmp8_197;
    ecx178->f0 = reinterpret_cast<unsigned char>(ecx178->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    *eax195 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax195) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax195)));
    __asm__("das ");
    ebx198 = *esp190;
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    *reinterpret_cast<struct s56**>(ebp115) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp115)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx198)));
    *eax195 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax195) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax195)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax195) + reinterpret_cast<uint32_t>(eax195) + 65) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax195) + reinterpret_cast<uint32_t>(eax195) + 65) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax195)));
    *eax195 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax195) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
    *eax195 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax195) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax195)));
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *eax195 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax195) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax195)));
    __asm__("outsd ");
    *eax195 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax195) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax195) + 1)));
    tmp8_199 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp115)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    cf200 = reinterpret_cast<unsigned char>(tmp8_199) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp115));
    *reinterpret_cast<struct s56**>(ebp115) = tmp8_199;
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx198) + 1)));
    *eax195 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax195) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax195) + 1)));
    tmp8_201 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax195) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax195)));
    cf202 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_201) < reinterpret_cast<unsigned char>(*eax195));
    *eax195 = tmp8_201;
    eax203 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax195) - (0x410073 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax195) < 0x410073 + cf202)));
    ebp204 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebp115) - 1);
    ecx178->f0 = reinterpret_cast<unsigned char>(ecx178->f0 + *reinterpret_cast<unsigned char*>(&eax203));
    __asm__("arpl [eax], ax");
    __asm__("arpl [eax], ax");
    __asm__("outsd ");
    *reinterpret_cast<struct s56**>(ebp204) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp204)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    __asm__("outsb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax203) + reinterpret_cast<uint32_t>(eax203) + 78) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax203) + reinterpret_cast<uint32_t>(eax203) + 78) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    ecx178->f0 = reinterpret_cast<unsigned char>(ecx178->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax203) + 1)));
    __asm__("insd ");
    *reinterpret_cast<struct s56**>(ebp204) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp204)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax203) + 1)));
    ecx178->f5b = reinterpret_cast<unsigned char>(ecx178->f5b + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
    tmp8_205 = reinterpret_cast<unsigned char>(g20005d00 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    g20005d00 = tmp8_205;
    *reinterpret_cast<struct s56**>(esi193) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi193)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx178)));
    __asm__("outsd ");
    *eax203 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax203) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax203) + 1)));
    tmp8_206 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp204)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    cf207 = reinterpret_cast<unsigned char>(tmp8_206) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp204));
    *reinterpret_cast<struct s56**>(ebp204) = tmp8_206;
    tmp8_208 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    cf209 = reinterpret_cast<unsigned char>(tmp8_208) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87));
    *reinterpret_cast<struct s56**>(edx87) = tmp8_208;
    *eax203 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax203) & *reinterpret_cast<unsigned char*>(&eax203));
    eax210 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(*eax203) * 0x650064);
    __asm__("outsb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax210) + reinterpret_cast<uint32_t>(eax210) + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax210) + reinterpret_cast<uint32_t>(eax210) + 0x69) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *reinterpret_cast<struct s56**>(esi193) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi193)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax210) + 1)));
    eax211 = reinterpret_cast<unsigned char*>(*eax210 * 0x640065);
    *eax211 = reinterpret_cast<unsigned char>(*eax211 & *reinterpret_cast<unsigned char*>(&eax211));
    eax212 = reinterpret_cast<unsigned char*>(*eax211 * 0x680074);
    *eax212 = reinterpret_cast<unsigned char>(*eax212 & *reinterpret_cast<unsigned char*>(&eax212));
    esp213 = reinterpret_cast<struct s79*>(reinterpret_cast<uint32_t>(esp190 + 1) - 1 - 4);
    esp213->f0 = reinterpret_cast<unsigned char*>(0x74006100);
    *eax212 = reinterpret_cast<unsigned char>(*eax212 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax212) + 1));
    ecx178->f0 = reinterpret_cast<unsigned char>(ecx178->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    tmp8_214 = reinterpret_cast<unsigned char>(ecx178->f0 + *reinterpret_cast<unsigned char*>(&eax212));
    cf215 = reinterpret_cast<uint1_t>(tmp8_214 < ecx178->f0);
    ecx178->f0 = tmp8_214;
    eax216 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax212 + 0x2b005b) + cf215);
    ebp217 = esp213->f0;
    esp218 = reinterpret_cast<struct s80*>(&esp213->f4);
    *eax216 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax216) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax216) + 1)));
    *reinterpret_cast<struct s56**>(esi193) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi193)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax216)));
    __asm__("outsd ");
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    __asm__("outsb ");
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax216) + reinterpret_cast<uint32_t>(eax216) + 32) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax216) + reinterpret_cast<uint32_t>(eax216) + 32) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax216) + 1)));
    tmp8_219 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax216) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax216)));
    cf220 = reinterpret_cast<unsigned char>(tmp8_219) < reinterpret_cast<unsigned char>(*eax216);
    *eax216 = tmp8_219;
    *eax216 = cr0_221;
    *ebx198 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ebx198) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax216) + reinterpret_cast<uint32_t>(eax216)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax216) + reinterpret_cast<uint32_t>(eax216)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    esi222 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi193) + reinterpret_cast<unsigned char>(*ebx198));
    *ebx198 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ebx198) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax216)));
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx178)));
    *eax216 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax216) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax216)));
    *eax216 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax216) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax216)));
    *eax216 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax216) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax216)));
    *eax216 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax216) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax216)));
    *eax216 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax216) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax216)));
    *eax216 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax216) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax216)));
    *eax216 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax216) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax216)));
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx198)));
    ebx223 = esp218->f0;
    esp224 = &esp218->f4;
    tmp8_225 = reinterpret_cast<unsigned char>(g20005d00 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    g20005d00 = tmp8_225;
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax216)));
    __asm__("arpl [eax], ax");
    *eax216 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax216) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    eax226 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*eax216) * 0x6e006f);
    *eax226 = reinterpret_cast<unsigned char>(*eax226 & *reinterpret_cast<unsigned char*>(&eax226));
    *ebx223 = *ebx223 + reinterpret_cast<int32_t>(ebp217);
    ebx227 = *esp224;
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx178) + 1)));
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + *reinterpret_cast<unsigned char*>(&ebx227));
    *eax226 = reinterpret_cast<unsigned char>(*eax226 & *reinterpret_cast<unsigned char*>(&eax226));
    edi228 = reinterpret_cast<struct s77*>(reinterpret_cast<unsigned char>(edi14) + 1);
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax226) + 1));
    zf229 = *ebp217 == 0;
    eax230 = reinterpret_cast<unsigned char*>(*eax226 * 0x67006e);
    *eax230 = reinterpret_cast<unsigned char>(*eax230 & *reinterpret_cast<unsigned char*>(&eax230));
    ecx178->f0 = reinterpret_cast<unsigned char>(ecx178->f0 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax230) + 1));
    __asm__("popad ");
    *eax230 = reinterpret_cast<unsigned char>(*eax230 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax230) + 1));
    *esi222 = reinterpret_cast<unsigned char>(*esi222 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax230) + 1));
    __asm__("outsd ");
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *eax230 = reinterpret_cast<unsigned char>(*eax230 & *reinterpret_cast<unsigned char*>(&eax230));
    tmp8_231 = reinterpret_cast<unsigned char>(edi228->f0 + *reinterpret_cast<unsigned char*>(&ebx227));
    cf232 = tmp8_231 < edi228->f0;
    edi228->f0 = tmp8_231;
    ecx233 = reinterpret_cast<struct s81*>(&ecx178->f1);
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + *reinterpret_cast<unsigned char*>(&ecx233));
    ecx234 = &ecx233->f1;
    *ebx227 = reinterpret_cast<unsigned char>(*ebx227 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax230) + 1));
    __asm__("arpl [eax], ax");
    __asm__("outsd ");
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    __asm__("outsb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax230) + reinterpret_cast<uint32_t>(eax230) + 78) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax230) + reinterpret_cast<uint32_t>(eax230) + 78) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax230) + 1));
    __asm__("insd ");
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax230) + 1));
    edi228->f0 = reinterpret_cast<unsigned char>(edi228->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax230) + reinterpret_cast<uint32_t>(eax230) + 97) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax230) + reinterpret_cast<uint32_t>(eax230) + 97) + *reinterpret_cast<signed char*>(&ecx234));
    *ebx227 = reinterpret_cast<unsigned char>(*ebx227 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    esp235 = esp224 + 1 - 1;
    *esp235 = ebx227;
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax230) + 1));
    *ebx227 = reinterpret_cast<unsigned char>(*ebx227 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
    __asm__("insb ");
    tmp8_236 = reinterpret_cast<unsigned char>(*ecx234 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax230) + 1));
    cf237 = tmp8_236 < *ecx234;
    *ecx234 = tmp8_236;
    edi228->f0 = reinterpret_cast<unsigned char>(edi228->f0 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx234) + 1));
    **reinterpret_cast<unsigned char**>(&ebx227) = reinterpret_cast<unsigned char>(**reinterpret_cast<unsigned char**>(&ebx227) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx234) + 1));
    __asm__("outsb ");
    tmp8_238 = reinterpret_cast<unsigned char>(*eax230 + *reinterpret_cast<unsigned char*>(&eax230));
    cf239 = reinterpret_cast<uint1_t>(tmp8_238 < *eax230);
    *eax230 = tmp8_238;
    esp240 = reinterpret_cast<struct s82*>(reinterpret_cast<uint32_t>(esp235) - 1 + edi228->f0 + cf239);
    eax241 = reinterpret_cast<struct s83*>(*eax230 * 0x650076);
    __asm__("outsb ");
    *esi222 = reinterpret_cast<unsigned char>(*esi222 + *reinterpret_cast<signed char*>(&ecx234));
    __asm__("popad ");
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx234) + 1));
    eax241->f0 = reinterpret_cast<signed char>(eax241->f0 + *reinterpret_cast<signed char*>(&eax241));
    eax242 = &eax241->f6e0073;
    *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + *reinterpret_cast<signed char*>(&ecx234));
    __asm__("insd ");
    *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax242) + 1));
    eax243 = reinterpret_cast<void**>(*eax242 * 0x2b00006c);
    ebx244 = esp240->f0;
    esp245 = &esp240->f4;
    tmp8_246 = reinterpret_cast<unsigned char>(g20005d00 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx234) + 1));
    g20005d00 = tmp8_246;
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
    __asm__("outsb ");
    *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
    __asm__("insb ");
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
    *eax243 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax243) & *reinterpret_cast<unsigned char*>(&eax243));
    __asm__("outsd ");
    *eax243 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax243) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 0x6f) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx234) + 1));
    *ebx244 = reinterpret_cast<unsigned char>(*ebx244 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
    __asm__("popad ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 0x65) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *eax243 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax243) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
    tmp8_247 = reinterpret_cast<unsigned char>(*ecx234 + *reinterpret_cast<unsigned char*>(&eax243));
    cf248 = tmp8_247 < *ecx234;
    *ecx234 = tmp8_247;
    if (!cf248) {
        addr_403f85_451:
        *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx234) + 1));
        __asm__("insd ");
        *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
        __asm__("outsb ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 32) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 0x6f) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
        *eax243 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax243) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
        edi228->f0 = reinterpret_cast<unsigned char>(edi228->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 32) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 0x68) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 0x68) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
        *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
        *eax243 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax243) & *reinterpret_cast<unsigned char*>(&eax243));
    } else {
        *eax243 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax243) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
        *eax243 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax243) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
        __asm__("insb ");
        *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
        __asm__("popad ");
        *ebx244 = reinterpret_cast<unsigned char>(*ebx244 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
        *eax243 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax243) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax243) + reinterpret_cast<uint32_t>(eax243) + 0x72) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
        *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx244) + 1)));
        *eax243 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax243) & *reinterpret_cast<unsigned char*>(&eax243));
        if (!*eax243) 
            goto addr_403f72_453; else 
            goto addr_403f72_453;
    }
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    __asm__("daa ");
    *ebx244 = reinterpret_cast<unsigned char>(*ebx244 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *eax243 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax243) & *reinterpret_cast<unsigned char*>(&eax243));
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    __asm__("outsb ");
    *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
    __asm__("insd ");
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
    *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + *reinterpret_cast<unsigned char*>(&eax243));
    cf249 = reinterpret_cast<uint32_t>(eax243) < 0x690046;
    eax250 = reinterpret_cast<unsigned char*>(eax243 - 0x690046);
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax250) + 1));
    __asm__("insd ");
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax250) + 1));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    tmp8_251 = reinterpret_cast<unsigned char>(g61004c + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx234) + 1));
    cf252 = tmp8_251 < g61004c;
    g61004c = tmp8_251;
    zf253 = g61004c == 0;
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    esi254 = reinterpret_cast<struct s84*>(esi222 - 1 - 1);
    *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax250) + 1));
    __asm__("insd ");
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax250) + 1));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    tmp8_255 = reinterpret_cast<unsigned char>(g6f0043 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx234) + 1));
    g6f0043 = tmp8_255;
    __asm__("outsb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax250) + reinterpret_cast<uint32_t>(eax250) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax250) + reinterpret_cast<uint32_t>(eax250) + 97) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *ebx244 = reinterpret_cast<unsigned char>(*ebx244 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax250) + 1));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    tmp8_256 = reinterpret_cast<unsigned char>(g61004c + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx234) + 1));
    cf257 = tmp8_256 < g61004c;
    g61004c = tmp8_256;
    zf258 = g61004c == 0;
    *eax250 = reinterpret_cast<unsigned char>(*eax250 & *reinterpret_cast<unsigned char*>(&eax250));
    esp259 = reinterpret_cast<unsigned char**>(esp245 - 1);
    *esp259 = eax250;
    tmp8_260 = reinterpret_cast<unsigned char>(*ecx234 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax250) + 1));
    cf261 = reinterpret_cast<uint1_t>(tmp8_260 < *ecx234);
    *ecx234 = tmp8_260;
    __asm__("outsd ");
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax250) + 1));
    *ebx244 = reinterpret_cast<unsigned char>(*ebx244 + *reinterpret_cast<unsigned char*>(&eax250));
    esp262 = reinterpret_cast<int32_t*>(esp259 - 1);
    *esp262 = 0x6e006100;
    edi228->f0 = reinterpret_cast<unsigned char>(edi228->f0 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax250) + 1));
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx244) + 1)));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax250) + 1));
    *eax250 = reinterpret_cast<unsigned char>(*eax250 + *reinterpret_cast<unsigned char*>(&eax250));
    esi254->f0 = esi254->f0 | reinterpret_cast<uint32_t>(esp262);
    eax263 = reinterpret_cast<unsigned char*>(*eax250 * 0x64006e);
    edi228->f0 = reinterpret_cast<unsigned char>(edi228->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
    esi264 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi254) + 1);
    *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx234) + 1));
    __asm__("outsb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax263) + reinterpret_cast<uint32_t>(eax263) + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax263) + reinterpret_cast<uint32_t>(eax263) + 32) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax263) + 1));
    *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax263) + 1));
    *eax263 = reinterpret_cast<unsigned char>(*eax263 & *reinterpret_cast<unsigned char*>(&eax263));
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    tmp8_265 = reinterpret_cast<unsigned char>(*ecx234 + *reinterpret_cast<signed char*>(&ecx234));
    cf266 = tmp8_265 < *ecx234;
    *ecx234 = tmp8_265;
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx244) + 1)));
    edi267 = reinterpret_cast<struct s81*>(&edi228->f1);
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax263) + 1));
    *eax263 = reinterpret_cast<unsigned char>(*eax263 & *reinterpret_cast<unsigned char*>(&eax263));
    eax268 = reinterpret_cast<int32_t*>(*eax263 * 0x66006e);
    __asm__("outsd ");
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    __asm__("insd ");
    *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax268) + 1));
    eax269 = reinterpret_cast<void**>(*eax268 * 0x6e006f);
    *eax269 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax269) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax269)));
    __asm__("popad ");
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax269) + 1)));
    __asm__("outsd ");
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *eax269 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax269) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax269)));
    __asm__("popad ");
    *eax269 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax269) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax269) + 1)));
    tmp8_270 = reinterpret_cast<unsigned char>(*ebp217 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    cf271 = tmp8_270 < *ebp217;
    *ebp217 = tmp8_270;
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *ecx234 = reinterpret_cast<unsigned char>(*ecx234 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx244)));
    esp272 = reinterpret_cast<unsigned char**>(esp262 - 1);
    *esp272 = ebp217;
    *ebx244 = reinterpret_cast<unsigned char>(*ebx244 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
    ecx273 = reinterpret_cast<uint32_t>(ecx234 - 1);
    *esi264 = reinterpret_cast<signed char>(*esi264 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx273) + 1));
    edi267->f0 = reinterpret_cast<signed char>(edi267->f0 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx273) + 1));
    *ebp217 = reinterpret_cast<unsigned char>(*ebp217 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax269) + 1)));
    *eax269 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax269) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax269)));
    *eax269 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax269) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax269)));
    tmp32_274 = reinterpret_cast<void*>(4 - 8 * *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eflags31) + 1));
    edi275 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi267) + reinterpret_cast<uint32_t>(tmp32_274));
    esi276 = reinterpret_cast<struct s60*>(reinterpret_cast<uint32_t>(esi264) + reinterpret_cast<uint32_t>(tmp32_274));
    edx277 = reinterpret_cast<struct s60*>(0x400a48c);
    g9addcb19 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb19) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax269)));
    *eax269 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax269) + 0x9addcb19);
    esp278 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp272) + reinterpret_cast<unsigned char>(*eax269));
    tmp8_279 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb19) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax269)));
    g9addcb19 = tmp8_279;
    tmp32_280 = eax269 + 0x11010120;
    eax281 = tmp32_280;
    *eax281 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax281) + reinterpret_cast<uint32_t>(eax281) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_280) < reinterpret_cast<uint32_t>(eax269)));
    tmp32_282 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb19) + reinterpret_cast<uint32_t>(eax281));
    g9addcb19 = tmp32_282;
    esp283 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp278) - 2);
    *esp283 = cs284;
    *reinterpret_cast<signed char*>(&eax281) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax281) + 32);
    tmp32_285 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb19) + reinterpret_cast<uint32_t>(eax281));
    g9addcb19 = tmp32_285;
    tmp8_286 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax281) + g12010120);
    *reinterpret_cast<signed char*>(&eax281) = tmp8_286;
    ebp287 = *esp283;
    eax288 = reinterpret_cast<unsigned char*>(eax281 + 0x12010120 + 0xe010220);
    esp289 = reinterpret_cast<int16_t*>(esp283 + 2 - 1);
    *esp289 = cs290;
    *reinterpret_cast<unsigned char*>(&eax288) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax288) + 32);
    tmp32_291 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb19) + reinterpret_cast<uint32_t>(eax288));
    cf292 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_291) < reinterpret_cast<unsigned char>(g9addcb19));
    g9addcb19 = tmp32_291;
    cf293 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax288) < reinterpret_cast<unsigned char>(9 + cf292));
    *reinterpret_cast<unsigned char*>(&eax288) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax288) - reinterpret_cast<unsigned char>(9 + cf293));
    tmp32_294 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax288 + 0x2a18012) + cf293);
    tmp8_295 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(0x8c + reinterpret_cast<unsigned char>(g8014918)) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_294) < reinterpret_cast<uint32_t>(eax288)));
    *reinterpret_cast<void**>(&edx277) = tmp8_295;
    tmp8_296 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(g9addcb19) + 25) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_295) < 0x8c));
    cf297 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_296) < reinterpret_cast<unsigned char>(g9addcb19));
    g9addcb19 = tmp8_296;
    tmp32_298 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(tmp32_294 + 0x2a18012) + cf297);
    eax299 = tmp32_298;
    *reinterpret_cast<void**>(&edx277) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx277)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx277) + reinterpret_cast<unsigned char>(edx277)))) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_298) < reinterpret_cast<uint32_t>(tmp32_294)));
    *reinterpret_cast<unsigned char*>(&eax299) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax299) | 4);
    tmp32_300 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb19) + reinterpret_cast<unsigned char>(edx277));
    g9addcb19 = tmp32_300;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax299) + reinterpret_cast<uint32_t>(eax299)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax299) + reinterpret_cast<uint32_t>(eax299)) - *reinterpret_cast<unsigned char*>(&eax299));
    tmp8_301 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb19) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx277)));
    g9addcb19 = tmp8_301;
    __asm__("insd ");
    g9addcb19 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb19) ^ *reinterpret_cast<unsigned char*>(&eax299));
    tmp32_302 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb19) + reinterpret_cast<uint32_t>(eax299));
    cf303 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_302) < reinterpret_cast<unsigned char>(g9addcb19));
    g9addcb19 = tmp32_302;
    *reinterpret_cast<struct s60**>(&esi276->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx244))) + cf303);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx277) + 0x9addcb19) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx277) + 0x9addcb19) + *reinterpret_cast<unsigned char*>(&eax299));
    tmp32_304 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb19) + reinterpret_cast<unsigned char>(edx277));
    g9addcb19 = tmp32_304;
    *eax299 = reinterpret_cast<unsigned char>(*eax299 - *reinterpret_cast<unsigned char*>(&eax299));
    *reinterpret_cast<struct s60**>(&edx277->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx277->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx277)));
    ebp305 = reinterpret_cast<struct s85*>(reinterpret_cast<int16_t>(ebp287) - 1);
    tmp32_306 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb19) + reinterpret_cast<unsigned char>(edx277));
    g9addcb19 = tmp32_306;
    esp307 = reinterpret_cast<void***>(esp289 + 1 + 1 - 2);
    *esp307 = reinterpret_cast<void**>(0x9addcb19);
    *reinterpret_cast<unsigned char*>(&eax299) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax299) + 7) + 32);
    tmp8_308 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb19) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx277)));
    g9addcb19 = tmp8_308;
    esp309 = reinterpret_cast<struct s86*>(esp307 - 1);
    esp309->f0 = reinterpret_cast<void**>(0x9addcb19);
    esp310 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(esp309) + 2);
    es311 = *esp310;
    tmp32_312 = reinterpret_cast<struct s60*>(reinterpret_cast<int32_t>(ebx244) + reinterpret_cast<uint32_t>(g8051d05));
    ebx313 = tmp32_312;
    esp314 = esp310 + 1 - 1;
    *esp314 = cs315;
    eax316 = reinterpret_cast<uint32_t>(eax299 + 0x51d0100 - 0x7fee0000);
    g9addcb05 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb05) & *reinterpret_cast<unsigned char*>(&eax316));
    esp317 = esp314 - 1;
    *esp317 = cs318;
    cf319 = reinterpret_cast<uint1_t>(eax316 < 0x1200505);
    eax320 = eax316 - (0x1200505 + cf319);
    eax321 = eax320 - (0x7030e05 + reinterpret_cast<uint1_t>(eax320 < 0x7030e05 + cf319));
    *reinterpret_cast<struct s60**>(&esi276->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) + 0x9addcb05);
    esp322 = esp317 - 1;
    *esp322 = es311;
    *reinterpret_cast<struct s60**>(&ebx313->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&ebx313->f0)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax321)));
    *reinterpret_cast<struct s60**>(&esi276->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) + 0x9addcb05);
    esp323 = esp322 - 1;
    *esp323 = cs324;
    esp325 = esp323 - 1;
    *esp325 = cs326;
    esp327 = esp325 - 1;
    *esp327 = es311;
    g9addcb05 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb05) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax321)));
    tmp32_328 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb05) + reinterpret_cast<unsigned char>(edx277));
    g9addcb05 = tmp32_328;
    ebp305->f1012006 = reinterpret_cast<unsigned char>(ebp305->f1012006 ^ 18);
    ebp305->fe070710 = reinterpret_cast<signed char>(ebp305->fe070710 + 18);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp305) - 0x7fedf7f2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp305) - 0x7fedf7f2) | 0x91);
    *reinterpret_cast<void**>(&eax321) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax321)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax321 + 0x4691295)))));
    tmp8_329 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g9addcb05) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax321)));
    g9addcb05 = tmp8_329;
    *reinterpret_cast<struct s60**>(&esi276->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) + 0x9addcb05);
    esp330 = esp327 - 1;
    *esp330 = es311;
    *reinterpret_cast<struct s60**>(&ebx313->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&ebx313->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax321)));
    esp331 = esp330 - 1;
    *esp331 = cs332;
    esp333 = esp331 - 1;
    *esp333 = cs334;
    esp335 = esp333 - 1;
    *esp335 = cs336;
    esp337 = esp335 - 1;
    *esp337 = cs338;
    esp339 = esp337 - 1;
    *esp339 = cs340;
    esp341 = esp339 - 1;
    *esp341 = cs342;
    __asm__("rol dword [eax], 0x1");
    *reinterpret_cast<struct s60**>(&esi276->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) | 5);
    eax343 = ebx313;
    *reinterpret_cast<struct s60**>(&eax343->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax343->f0)) & *reinterpret_cast<unsigned char*>(&eax343));
    *reinterpret_cast<struct s60**>(&ebx313->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&ebx313->f0)) | *reinterpret_cast<unsigned char*>(&eax343));
    *reinterpret_cast<struct s60**>(&eax343->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax343->f0)) & *reinterpret_cast<unsigned char*>(&eax343));
    *(esp341 - 1) = cs344;
    ecx345 = reinterpret_cast<struct s87*>(reinterpret_cast<unsigned char>(eax343) + 0x80120020);
    eax346 = reinterpret_cast<unsigned char*>(0x9addcb05);
    tmp8_347 = reinterpret_cast<unsigned char>(g1aefcb25 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx313)));
    g1aefcb25 = tmp8_347;
    ebp348 = ebp305->f0;
    esp349 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(ebp305) + 4 - 2);
    *esp349 = es311;
    *reinterpret_cast<void**>(ecx345) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx345)) & 5);
    tmp8_350 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(5 + gbae1d9d2)));
    *reinterpret_cast<unsigned char*>(&eax346) = tmp8_350;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax346) + reinterpret_cast<uint32_t>(ecx345)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax346) + reinterpret_cast<uint32_t>(ecx345)) + reinterpret_cast<unsigned char>(ebx313);
    *reinterpret_cast<unsigned char*>(&eax346) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax346)));
    tmp32_351 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx345)) + reinterpret_cast<uint32_t>(eax346));
    cf352 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_351) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx345)));
    *reinterpret_cast<void**>(ecx345) = tmp32_351;
    *reinterpret_cast<unsigned char*>(&eax346) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax346) - reinterpret_cast<unsigned char>(3 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax346) < reinterpret_cast<unsigned char>(3 + cf352))));
    *eax346 = reinterpret_cast<unsigned char>(*eax346 & *reinterpret_cast<unsigned char*>(&eax346));
    *reinterpret_cast<void**>(&ecx345) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx345)) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx277->f0)));
    es353 = *esp349;
    tmp32_354 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(edx277) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx277->f0)));
    edx355 = tmp32_354;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx345) + 0x129d8011) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx345) + 0x129d8011) - reinterpret_cast<unsigned char>(0x69 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx345) + 0x129d8011) < reinterpret_cast<unsigned char>(0x69 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_354) < reinterpret_cast<unsigned char>(edx277))))));
    eax356 = reinterpret_cast<struct s88*>(eax346 + 0x80120020);
    __asm__("cdq ");
    *reinterpret_cast<void**>(&eax356) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax356)) + 32);
    *reinterpret_cast<struct s60**>(&edx355->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)) + reinterpret_cast<uint32_t>(eax356));
    esp357 = esp349 + 1 - 1;
    *esp357 = cs358;
    esp359 = reinterpret_cast<struct s89*>(esp357 - 1);
    esp359->f0 = es353;
    tmp8_360 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx345)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax356)));
    cf361 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_360) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx345)));
    *reinterpret_cast<void**>(ecx345) = tmp8_360;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax356) + 0x20060a9d) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax356) + 0x20060a9d) + reinterpret_cast<uint32_t>(eax356) + cf361;
    *reinterpret_cast<struct s60**>(&edx355->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)) + reinterpret_cast<unsigned char>(edx355));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp348) + 0x107040e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp348) + 0x107040e) & 17);
    *reinterpret_cast<void**>(&eax356) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax356)) - 4) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx345)));
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp359) + reinterpret_cast<uint32_t>(eax356)) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp359) + reinterpret_cast<uint32_t>(eax356)) + reinterpret_cast<unsigned char>(ebp348);
    esp362 = &esp359->f2;
    *reinterpret_cast<void**>(ecx345) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx345)) + reinterpret_cast<unsigned char>(edx355));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx355) + reinterpret_cast<uint32_t>(ecx345)) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx355) + reinterpret_cast<uint32_t>(ecx345)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax356)));
    *reinterpret_cast<void**>(ecx345) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx345)) + reinterpret_cast<unsigned char>(edx355));
    *edi275 = reinterpret_cast<unsigned char>(*edi275 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx345)));
    es363 = *esp362;
    tmp32_364 = reinterpret_cast<struct s87*>(reinterpret_cast<uint32_t>(ecx345) + reinterpret_cast<uint32_t>(eax356->f0));
    ecx365 = tmp32_364;
    tmp32_366 = reinterpret_cast<struct s88*>(reinterpret_cast<uint32_t>(eax356) + 0x15016111 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_364) < reinterpret_cast<uint32_t>(ecx345)));
    eax367 = tmp32_366;
    *reinterpret_cast<void**>(&edx355) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx355) + reinterpret_cast<unsigned char>(edx355)))) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax367) + 1) + ebp348->f1) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_366) < reinterpret_cast<uint32_t>(eax356))) < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax367) + 1)));
    eax368 = reinterpret_cast<struct s90*>(*edi275 * 0xdd801215);
    tmp32_369 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)) + reinterpret_cast<unsigned char>(edx355));
    cf370 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_369) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)));
    *reinterpret_cast<struct s60**>(&edx355->f0) = tmp32_369;
    *reinterpret_cast<unsigned char*>(&eax368) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax368) + 6) + cf370);
    *reinterpret_cast<void**>(ecx365) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx365)) & *reinterpret_cast<unsigned char*>(&eax368));
    tmp32_371 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)) + reinterpret_cast<unsigned char>(edx355));
    cf372 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_371) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)));
    *reinterpret_cast<struct s60**>(&edx355->f0) = tmp32_371;
    tmp8_373 = reinterpret_cast<unsigned char>(eax368->f0 + *reinterpret_cast<unsigned char*>(&eax368));
    cf374 = reinterpret_cast<uint1_t>(tmp8_373 < eax368->f0);
    eax368->f0 = tmp8_373;
    *reinterpret_cast<unsigned char*>(&eax368) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax368) + eax368->f12006e1) + cf374);
    *reinterpret_cast<struct s60**>(&edx355->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)) + reinterpret_cast<unsigned char>(edx355));
    *reinterpret_cast<void**>(&ecx365) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx365)) - reinterpret_cast<unsigned char>(5 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx365)) < reinterpret_cast<unsigned char>(5 + cf372)))) & 15);
    *reinterpret_cast<void**>(ecx365) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx365)) & *reinterpret_cast<unsigned char*>(&eax368));
    tmp32_375 = reinterpret_cast<struct s90*>(reinterpret_cast<uint32_t>(eax368) + 0x1e58012);
    eax376 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(tmp32_375) + 0x13016512 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_375) < reinterpret_cast<uint32_t>(eax368)));
    tmp8_377 = reinterpret_cast<unsigned char>(g12150b0e + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx313)));
    g12150b0e = tmp8_377;
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx365) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx365) + 1)) & 1);
    tmp32_378 = eax376 + 0x12016512;
    eax379 = tmp32_378;
    *reinterpret_cast<unsigned char*>(&eax379) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax379) + 8) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_378) < reinterpret_cast<uint32_t>(eax376)));
    *eax379 = reinterpret_cast<unsigned char>(*eax379 & *reinterpret_cast<unsigned char*>(&eax379));
    eax380 = eax379 + 0x13016111;
    tmp8_381 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx365)));
    cf382 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_381) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)));
    *reinterpret_cast<struct s60**>(&edx355->f0) = tmp8_381;
    tmp32_383 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax380 + 0x15016111) + cf382);
    eax384 = tmp32_383;
    tmp8_385 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax384) + 1) + ebp348->f1) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_383) < reinterpret_cast<uint32_t>(eax380)));
    cf386 = reinterpret_cast<uint1_t>(tmp8_385 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax384) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax384) + 1) = tmp8_385;
    *reinterpret_cast<void**>(&edx355) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx355) + reinterpret_cast<uint32_t>(ecx365)))) + cf386);
    *reinterpret_cast<struct s60**>(&edx355->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax384)));
    tmp8_387 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax384)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx365)));
    cf388 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_387) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax384)));
    *reinterpret_cast<void**>(&eax384) = tmp8_387;
    *reinterpret_cast<struct s60**>(&esi276->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx313))) + cf388);
    *eax384 = reinterpret_cast<unsigned char>(*eax384 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355)));
    esp389 = esp362 + 2 - 2;
    *esp389 = ds54;
    *reinterpret_cast<struct s60**>(&esi276->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) + reinterpret_cast<uint32_t>(ecx365));
    *reinterpret_cast<void**>(&eax384) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax384)) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)));
    tmp32_390 = eax384 + 0x15016111;
    eax391 = tmp32_390;
    tmp8_392 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax391) + 1) + ebp348->f1) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_390) < reinterpret_cast<uint32_t>(eax384)));
    cf393 = reinterpret_cast<uint1_t>(tmp8_392 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax391) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax391) + 1) = tmp8_392;
    *reinterpret_cast<void**>(&edx355) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx365) + reinterpret_cast<unsigned char>(edx355)))) + cf393);
    *eax391 = reinterpret_cast<unsigned char>(*eax391 - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax391)));
    *reinterpret_cast<struct s60**>(&ebx313->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&ebx313->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355)));
    tmp8_394 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax391)));
    cf395 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_394) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)));
    *reinterpret_cast<struct s60**>(&esi276->f0) = tmp8_394;
    tmp32_396 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax391 + 0x12016512) + cf395);
    eax397 = tmp32_396;
    *reinterpret_cast<unsigned char*>(&eax397) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax397) + 5) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_396) < reinterpret_cast<uint32_t>(eax391)));
    *reinterpret_cast<void**>(ecx365) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx365)) & *reinterpret_cast<unsigned char*>(&eax397));
    *reinterpret_cast<struct s60**>(&edx355->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)) + reinterpret_cast<unsigned char>(edx355));
    eax398 = reinterpret_cast<struct s87**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi275) + reinterpret_cast<uint32_t>(eax397)) * 0x8691201);
    *reinterpret_cast<unsigned char*>(&ebx313 + 1) = 0x7a;
    esp399 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*esp389) + 4) - 4);
    *reinterpret_cast<struct s60**>(&esp399->f0) = esi276;
    less_or_equal400 = reinterpret_cast<int32_t>(*eax398) <= reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(esi276) + __intrinsic());
    *eax398 = reinterpret_cast<struct s87*>(reinterpret_cast<uint32_t>(*eax398) - (reinterpret_cast<unsigned char>(esi276) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(*eax398) < reinterpret_cast<unsigned char>(esi276) + __intrinsic())));
    *eax398 = ecx365;
    *reinterpret_cast<struct s60**>(&eax398) = reinterpret_cast<struct s60*>(63);
    edi401 = *reinterpret_cast<struct s60**>(&esp399->f0);
    esp402 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp399) + 4);
    if (less_or_equal400) {
        __asm__("aad 0xa");
        *reinterpret_cast<struct s60**>(&edx355->f0) = *reinterpret_cast<struct s60**>(&edx355->f0) + 9;
        esp403 = reinterpret_cast<struct s60**>(reinterpret_cast<unsigned char>(esp402) - 2);
        *esp403 = es363;
        esp404 = esp403 - 2;
        *esp404 = cs405;
        al406 = *reinterpret_cast<struct s60**>(&esi276->f0) + 9;
        tmp8_407 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(al406) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&ebx313->f0)));
        *reinterpret_cast<struct s60**>(&eax398) = tmp8_407;
        esp402 = reinterpret_cast<struct s60*>(esp404 - 2);
        *reinterpret_cast<struct s60**>(&esp402->f0) = es363;
        eax398 = reinterpret_cast<struct s87**>(reinterpret_cast<uint32_t>(eax398) - (0x12060405 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax398) < 0x12060405 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_407) < reinterpret_cast<unsigned char>(al406)))));
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebp348) + 0x80120604) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebp348) + 0x80120604) - 0x77);
    *reinterpret_cast<struct s60**>(&eax398) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax398)) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)));
    *reinterpret_cast<struct s60**>(&ebx313->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&ebx313->f0)) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax398)));
    esp408 = reinterpret_cast<struct s60**>(reinterpret_cast<unsigned char>(esp402) - 2);
    *esp408 = es363;
    tmp32_409 = ebp348->f3 + reinterpret_cast<unsigned char>(ebp348);
    cf410 = reinterpret_cast<uint1_t>(tmp32_409 < ebp348->f3);
    ebp348->f3 = tmp32_409;
    esp411 = esp408 - 2;
    *esp411 = es363;
    cf412 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax398) < 0x15060b0e + cf410);
    eax413 = reinterpret_cast<struct s91*>(reinterpret_cast<uint32_t>(eax398) - (0x15060b0e + cf412));
    tmp32_414 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx365) + 1) + reinterpret_cast<uint32_t>(esp411) + cf412);
    cf415 = reinterpret_cast<uint1_t>(tmp32_414 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx365) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx365) + 1) = tmp32_414;
    tmp32_416 = reinterpret_cast<struct s91*>(reinterpret_cast<uint32_t>(eax413) + 0x12016512 + cf415);
    eax417 = tmp32_416;
    tmp8_418 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax417) + 3) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_416) < reinterpret_cast<uint32_t>(eax413)));
    cf419 = reinterpret_cast<uint1_t>(tmp8_418 < *reinterpret_cast<unsigned char*>(&eax417));
    *reinterpret_cast<unsigned char*>(&eax417) = tmp8_418;
    esp420 = reinterpret_cast<struct s60*>(esp411 - 2);
    *reinterpret_cast<struct s60**>(&esp420->f0) = es363;
    dl421 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax417))) + cf419);
    tmp32_422 = reinterpret_cast<struct s91*>(reinterpret_cast<uint32_t>(eax417) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)));
    eax423 = tmp32_422;
    tmp8_424 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(dl421) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx313) + reinterpret_cast<uint32_t>(eax423)))) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_422) < reinterpret_cast<uint32_t>(eax417)));
    *reinterpret_cast<void**>(&edx355) = tmp8_424;
    esp425 = reinterpret_cast<struct s60**>(reinterpret_cast<unsigned char>(esp420) - 2);
    *esp425 = es363;
    *reinterpret_cast<void**>(&ecx365) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx365)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi276) + reinterpret_cast<uint32_t>(eax423)))) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_424) < reinterpret_cast<unsigned char>(dl421)));
    tmp8_426 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx365)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax423)));
    cf427 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_426) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx365)));
    *reinterpret_cast<void**>(ecx365) = tmp8_426;
    *reinterpret_cast<void**>(&ecx365) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx365)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp348) + 29))) + cf427);
    esp428 = esp425 - 2;
    *esp428 = cs429;
    eax430 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax423) + 0x1d010100);
    esp431 = reinterpret_cast<struct s60*>(esp428 - 2);
    *reinterpret_cast<struct s60**>(&esp431->f0) = cs432;
    eax433 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax430) + reinterpret_cast<uint32_t>(*eax430));
    *reinterpret_cast<struct s60**>(&esi276->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx365)));
    eax434 = reinterpret_cast<struct s60*>(reinterpret_cast<uint32_t>(eax433) + reinterpret_cast<uint32_t>(*eax433));
    *reinterpret_cast<void**>(ecx365) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx365)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
    esp435 = reinterpret_cast<struct s60**>(reinterpret_cast<unsigned char>(esp431) - 2);
    *esp435 = es363;
    *reinterpret_cast<struct s60**>(&ebx313->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&ebx313->f0)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
    *reinterpret_cast<struct s60**>(&esi276->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) + reinterpret_cast<uint32_t>(ecx365));
    esp436 = esp435 - 2;
    *esp436 = cs437;
    tmp8_438 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) + reinterpret_cast<unsigned char>(ge010220));
    al439 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(tmp8_438) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)));
    *reinterpret_cast<void**>(ecx365) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx365)) & reinterpret_cast<unsigned char>(al439));
    *reinterpret_cast<struct s60**>(&edx355->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)) + reinterpret_cast<unsigned char>(edx355));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp348) + 0x1203200b) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp348) + 0x1203200b) & 77);
    tmp8_440 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx355) + reinterpret_cast<unsigned char>(edx355))))));
    cf441 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_440) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355)));
    *reinterpret_cast<void**>(&edx355) = tmp8_440;
    *reinterpret_cast<void**>(ecx365) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx365)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355))) + cf441);
    cf442 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx365) + 0x1203200b) < 77);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx365) + 0x1203200b) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx365) + 0x1203200b) - 77);
    dl443 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx355) + reinterpret_cast<unsigned char>(edx355)))) + cf442);
    *reinterpret_cast<void**>(&eax434) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(al439) | 17);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx365) + 0xe002803) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx365) + 0xe002803) - 3);
    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
    *reinterpret_cast<void**>(&ecx365) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx365)) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)));
    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(eax434));
    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
    esp444 = reinterpret_cast<struct s60*>(esp436 - 2);
    *reinterpret_cast<struct s60**>(&esp444->f0) = ds54;
    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(eax434));
    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(eax434));
    esp445 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp444) - 4);
    *reinterpret_cast<struct s60**>(&esp445->f0) = esp445;
    tmp8_446 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(dl443) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)));
    *reinterpret_cast<void**>(&edx355) = tmp8_446;
    esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp445) - 4);
    *reinterpret_cast<struct s60**>(&esp447->f0) = edi401;
    if (reinterpret_cast<unsigned char>(tmp8_446) < reinterpret_cast<unsigned char>(dl443)) {
        addr_4043ed_483:
        eax434 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(eax434) - 0x32653238);
        *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(ebp348) + 97) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(ebp348) + 97) ^ reinterpret_cast<unsigned char>(esp447));
        goto addr_4043f6_484;
    } else {
        if (__intrinsic()) {
            addr_4043dc_486:
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx355) + 45) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx355) + 45) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434 + 1)));
            g31303734 = reinterpret_cast<unsigned char>(g31303734 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx365) + 1)));
            eax434 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(eax434) - 0x36396638);
            goto addr_4043ed_483;
        } else {
            __asm__("outsd ");
            __asm__("outsb ");
            ebp348 = reinterpret_cast<struct s60*>(&ebp348->f1);
            if (reinterpret_cast<signed char>(ebp348) < reinterpret_cast<signed char>(0)) {
                addr_4043f6_484:
                goto addr_4043fb_488;
            } else {
                if (__intrinsic()) {
                    addr_40440a_490:
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx365) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx365) + 1) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx365)));
                    tmp8_448 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx313)));
                    cf449 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_448) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)));
                    *reinterpret_cast<struct s60**>(&edx355->f0) = tmp8_448;
                    esi276 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esi276) - 1);
                    goto addr_404412_491;
                } else {
                    ebp348 = reinterpret_cast<struct s60*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi401) + 0x6e) * 0x6f726854);
                    cf449 = __intrinsic();
                    if (!reinterpret_cast<uint1_t>(cf449 | __undefined())) {
                        addr_404412_491:
                        ebp348 = reinterpret_cast<struct s60*>(&ebp348->f1);
                        esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) - 4);
                        *reinterpret_cast<struct s60**>(&esp447->f0) = esp447;
                        esi276 = reinterpret_cast<struct s60*>(&esi276->f1);
                        below_or_equal450 = reinterpret_cast<uint1_t>(cf449 | reinterpret_cast<uint1_t>(esi276 == 0));
                        goto addr_404415_493;
                    } else {
                        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<uint32_t>(ecx365));
                        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(eax434));
                        *reinterpret_cast<void**>(&eax434) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)));
                        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                        eax434 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(eax434) | 0x55080001);
                        cf449 = 0;
                        below_or_equal450 = 0;
                        if (1) {
                            addr_404415_493:
                            if (cf449) {
                                addr_404478_495:
                                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx365) + reinterpret_cast<unsigned char>(eax434)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx365) + reinterpret_cast<unsigned char>(eax434)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355 + 1)));
                                tmp8_451 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edi401->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx365) + 1)));
                                cf449 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_451) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edi401->f0)));
                                *reinterpret_cast<struct s60**>(&edi401->f0) = tmp8_451;
                                esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) - 4);
                                *reinterpret_cast<struct s60**>(&esp447->f0) = ebp348;
                                if (!cf449) {
                                    addr_4044e8_496:
                                    if (!cf449) {
                                        addr_404551_497:
                                        eax434 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(eax434) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx365)) + cf449);
                                        tmp8_452 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx365)));
                                        cf449 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_452) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)));
                                        *reinterpret_cast<struct s60**>(&esi276->f0) = tmp8_452;
                                        goto addr_404555_498;
                                    } else {
                                        if (cf449) 
                                            goto addr_40455c_500;
                                        __asm__("popad ");
                                        __asm__("insd ");
                                        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                        eax434 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(eax434) + 0x10001);
                                        goto addr_4044f5_502;
                                    }
                                } else {
                                    if (cf449) {
                                        goto addr_4044cf_505;
                                    } else {
                                        __asm__("outsb ");
                                        __asm__("outsw ");
                                        goto addr_404488_507;
                                    }
                                }
                            } else {
                                __asm__("insd ");
                                if (!below_or_equal450) {
                                    addr_40448a_509:
                                    __asm__("outsd ");
                                    __asm__("insd ");
                                    __asm__("insd ");
                                    __asm__("popad ");
                                    __asm__("outsb ");
                                    if (!cf449) {
                                        addr_4044c0_510:
                                        __asm__("insd ");
                                        __asm__("insd ");
                                        __asm__("popad ");
                                        __asm__("outsb ");
                                        if (!cf449) {
                                            addr_4044f5_502:
                                            tmp8_453 = reinterpret_cast<unsigned char>(g55080001 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx365)));
                                            cf449 = reinterpret_cast<uint1_t>(tmp8_453 < g55080001);
                                            g55080001 = tmp8_453;
                                            goto addr_4044fa_511;
                                        } else {
                                            edi401 = reinterpret_cast<struct s60*>(&edi401->f1);
                                            zf454 = edi401 == 0;
                                            if (zf454) {
                                                addr_404520_513:
                                                goto addr_404521_514;
                                            } else {
                                                addr_4044cb_515:
                                                if (!cf449) {
                                                    addr_404532_516:
                                                    if (zf454) {
                                                        addr_404555_498:
                                                        esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) - 4);
                                                        *reinterpret_cast<struct s60**>(&esp447->f0) = esi276;
                                                        if (cf449) {
                                                            addr_4045bb_517:
                                                            if (cf449) {
                                                                addr_404633_518:
                                                                __asm__("popad ");
                                                            } else {
                                                                esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esp447->f0)) + 4);
                                                                goto addr_4045c1_520;
                                                            }
                                                        } else {
                                                            __asm__("outsd ");
                                                            if (!cf449) {
                                                                addr_4045c1_520:
                                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax434) + 100) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax434) + 100) ^ 0x7a);
                                                                cf455 = 0;
                                                                sf456 = __intrinsic();
                                                                esp447 = *reinterpret_cast<struct s60**>(&esp447->f0);
                                                                esp447 = reinterpret_cast<struct s60*>(&esp447->pad3);
                                                                if (1) {
                                                                    addr_404637_522:
                                                                    goto addr_40463b_523;
                                                                } else {
                                                                    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax434) + 100)) {
                                                                        goto addr_40463d_526;
                                                                    }
                                                                    __asm__("arpl [ebp+0x5c], sp");
                                                                    if (!0) 
                                                                        goto addr_4045cf_528;
                                                                }
                                                            } else {
                                                                addr_40455c_500:
                                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi401) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi401) + 0x75) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx365) + 1)));
                                                                cf455 = 0;
                                                                zf457 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi401) + 0x75) == 0;
                                                                sf456 = __intrinsic();
                                                                if (zf457) 
                                                                    goto addr_4045d1_529; else 
                                                                    goto addr_404561_530;
                                                            }
                                                        }
                                                    } else {
                                                        __asm__("outsb ");
                                                        __asm__("popad ");
                                                        __asm__("insd ");
                                                        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                                        goto addr_40453a_532;
                                                    }
                                                } else {
                                                    if (cf449) {
                                                        addr_4044fa_511:
                                                        if (!cf449) {
                                                            addr_404565_534:
                                                            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                                            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                                            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi401) + 0xe9048c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi401) + 0xe9048c) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx365)));
                                                            goto addr_404570_535;
                                                        } else {
                                                            if (cf449) {
                                                                addr_404570_535:
                                                                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                                                *reinterpret_cast<struct s60**>(&edx355->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                                                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                                                goto addr_404577_537;
                                                            } else {
                                                                __asm__("popad ");
                                                                goto addr_404503_539;
                                                            }
                                                        }
                                                    } else {
                                                        addr_4044cf_505:
                                                        cf449 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) < 79);
                                                        __asm__("outsb ");
                                                        ebp348 = reinterpret_cast<struct s60*>(&ebp348->f1);
                                                        if (reinterpret_cast<signed char>(ebp348) < reinterpret_cast<signed char>(0)) {
                                                            addr_40453a_532:
                                                            esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) - 2);
                                                            *reinterpret_cast<struct s60**>(&esp447->f0) = cs458;
                                                            goto addr_40453c_540;
                                                        } else {
                                                            addr_4044d5_541:
                                                            __asm__("arpl [ebp+0x74], si");
                                                            ecx365 = reinterpret_cast<struct s87*>(reinterpret_cast<uint32_t>(ecx365) + 1);
                                                            if (!cf449) 
                                                                goto addr_404555_498; else 
                                                                goto addr_4044dc_542;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        esi276 = reinterpret_cast<struct s60*>(&esi276->f1);
                                        goto addr_404493_544;
                                    }
                                } else {
                                    if (cf449) {
                                        addr_404488_507:
                                        ebx313 = reinterpret_cast<struct s60*>(&ebx313->f1);
                                        goto addr_40448a_509;
                                    } else {
                                        cf459 = reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) < 86;
                                        *reinterpret_cast<void**>(&eax434) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) - 86);
                                        if (cf459) {
                                            addr_404495_547:
                                            cf460 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(edi401) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(reinterpret_cast<unsigned char>(edi401) + reinterpret_cast<uint32_t>(ecx365) * 2)));
                                            edi401 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(edi401) - reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(reinterpret_cast<unsigned char>(edi401) + reinterpret_cast<uint32_t>(ecx365) * 2)));
                                            __asm__("outsb ");
                                            ebp348 = reinterpret_cast<struct s60*>(&ebp348->f1);
                                            if (reinterpret_cast<signed char>(ebp348) < reinterpret_cast<signed char>(0)) {
                                                addr_404506_548:
                                                *reinterpret_cast<void**>(&eax434) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx365)));
                                                tmp8_461 = reinterpret_cast<unsigned char>(g73726966 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                                g73726966 = tmp8_461;
                                                zf462 = g73726966 == 0;
                                                if (zf462) 
                                                    goto addr_404511_549; else 
                                                    goto addr_404511_549;
                                            } else {
                                                __asm__("arpl [ebp+0x74], si");
                                                goto addr_4044a3_551;
                                            }
                                        } else {
                                            ebp348 = reinterpret_cast<struct s60*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi401) + 0x6e) * 0x2e34763d);
                                            tmp8_463 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi276) + reinterpret_cast<uint32_t>(ecx365) + 20) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355)));
                                            cf460 = reinterpret_cast<uint1_t>(tmp8_463 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi276) + reinterpret_cast<uint32_t>(ecx365) + 20));
                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi276) + reinterpret_cast<uint32_t>(ecx365) + 20) = tmp8_463;
                                            esi276 = reinterpret_cast<struct s60*>(&esi276->f1);
                                            below_or_equal464 = reinterpret_cast<uint1_t>(cf460 | reinterpret_cast<uint1_t>(esi276 == 0));
                                            goto addr_404430_553;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (0) {
                                addr_4043fb_488:
                                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                *reinterpret_cast<void**>(&eax434) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) | 1);
                                *reinterpret_cast<struct s60**>(&edi401->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edi401->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                *reinterpret_cast<struct s60**>(&esi276->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) ^ reinterpret_cast<unsigned char>(ebp348));
                                *reinterpret_cast<struct s60**>(&esi276->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx365) + 1)));
                                *reinterpret_cast<struct s60**>(&esi276->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx365) + 1)));
                                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                goto addr_40440a_490;
                            } else {
                                __asm__("outsb ");
                                __asm__("outsw ");
                                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                eax434 = reinterpret_cast<struct s60*>(&eax434->f1);
                                *reinterpret_cast<struct s60**>(&edi401->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edi401->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355)));
                                tmp32_465 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(eax434));
                                cf466 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_465) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)));
                                *reinterpret_cast<struct s60**>(&eax434->f0) = tmp32_465;
                                tmp8_467 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx313) + 0x6f))) + cf466);
                                cf460 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_467) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                *reinterpret_cast<void**>(&eax434) = tmp8_467;
                                below_or_equal464 = reinterpret_cast<uint1_t>(cf460 | reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&eax434) == 0));
                                if (__intrinsic()) {
                                    addr_40443e_556:
                                    __asm__("popad ");
                                    __asm__("insd ");
                                    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx365) + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx365) + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0))) + cf460);
                                    esi276 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esi276) - 1);
                                    ebp348 = reinterpret_cast<struct s60*>(&ebp348->f1);
                                    esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) - 4);
                                    *reinterpret_cast<struct s60**>(&esp447->f0) = esp447;
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi276) + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi276) + 0x72) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                    cf449 = 0;
                                    __asm__("popad ");
                                    __asm__("insd ");
                                    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi276) + 0x72) == 0)))) {
                                        addr_4044bf_557:
                                        __asm__("outsd ");
                                        goto addr_4044c0_510;
                                    } else {
                                        if (0) {
                                            addr_4044bd_559:
                                            ebx313 = reinterpret_cast<struct s60*>(&ebx313->f1);
                                            goto addr_4044bf_557;
                                        } else {
                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi276) + reinterpret_cast<unsigned char>(ebp348)) = 0;
                                            tmp32_468 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(eax434));
                                            cf469 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_468) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)));
                                            *reinterpret_cast<struct s60**>(&eax434->f0) = tmp32_468;
                                            cf449 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(edx355) < reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp348) + 0x73)) + cf469));
                                            edx355 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(edx355) - (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp348) + 0x73)) + cf449));
                                            zf454 = reinterpret_cast<int1_t>(edx355 == static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf449))));
                                            if (cf449) 
                                                goto addr_4044a8_561;
                                            __asm__("outsb ");
                                            __asm__("outsw ");
                                            esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) - 4);
                                            *reinterpret_cast<struct s60**>(&esp447->f0) = eax434;
                                            if (cf449) 
                                                goto addr_4044d5_541;
                                            if (cf449) 
                                                goto addr_4044ca_564; else 
                                                goto addr_404469_565;
                                        }
                                    }
                                } else {
                                    if (cf460) {
                                        addr_404430_553:
                                        if (cf460) {
                                            addr_404493_544:
                                            ebp348 = reinterpret_cast<struct s60*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi276) + 100) * 0x72657355);
                                            goto addr_404495_547;
                                        } else {
                                            __asm__("insd ");
                                            if (!below_or_equal464) {
                                                addr_4044a5_568:
                                                if (!cf460) {
                                                    addr_404521_514:
                                                    *reinterpret_cast<void**>(ecx365) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx365)) | reinterpret_cast<unsigned char>(eax434));
                                                    tmp8_470 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(reinterpret_cast<unsigned char>(esp447) + reinterpret_cast<unsigned char>(ebp348) * 2)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                                    cf471 = reinterpret_cast<unsigned char>(tmp8_470) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(reinterpret_cast<unsigned char>(esp447) + reinterpret_cast<unsigned char>(ebp348) * 2));
                                                    *reinterpret_cast<struct s60**>(reinterpret_cast<unsigned char>(esp447) + reinterpret_cast<unsigned char>(ebp348) * 2) = tmp8_470;
                                                    __asm__("popad ");
                                                    if (!cf471) 
                                                        goto addr_40459e_569; else 
                                                        goto addr_40452a_570;
                                                } else {
                                                    addr_4044a8_561:
                                                    __asm__("outsb ");
                                                    __asm__("arpl [esi], di");
                                                    esp472 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) + 4);
                                                    edi401 = *reinterpret_cast<struct s60**>(&esp472->f0);
                                                    *reinterpret_cast<void**>(&eax434) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)));
                                                    *reinterpret_cast<struct s60**>(&ebx313->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&ebx313->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355 + 1)));
                                                    tmp32_473 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(eax434));
                                                    cf449 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_473) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)));
                                                    *reinterpret_cast<struct s60**>(&eax434->f0) = tmp32_473;
                                                    esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(esp472) + 4) - 4);
                                                    *reinterpret_cast<struct s60**>(&esp447->f0) = ebp348;
                                                    if (!cf449) {
                                                        addr_40451d_571:
                                                        __asm__("popad ");
                                                        __asm__("insd ");
                                                        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                                        goto addr_404520_513;
                                                    } else {
                                                        if (cf449) {
                                                            addr_404503_539:
                                                            __asm__("insd ");
                                                            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                                            goto addr_404506_548;
                                                        } else {
                                                            __asm__("outsb ");
                                                            __asm__("outsw ");
                                                            goto addr_4044bd_559;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (cf460) {
                                                    addr_4044a3_551:
                                                    ecx365 = reinterpret_cast<struct s87*>(reinterpret_cast<uint32_t>(ecx365) + 1);
                                                    goto addr_4044a5_568;
                                                } else {
                                                    esp447 = reinterpret_cast<struct s60*>(&esp447->f1);
                                                    esi276 = reinterpret_cast<struct s60*>(*reinterpret_cast<int32_t*>(&(ebx313 + 16)->f0) * 0x4e79616c);
                                                    cf460 = __intrinsic();
                                                    goto addr_40443e_556;
                                                }
                                            }
                                        }
                                    } else {
                                        esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) - 4);
                                        *reinterpret_cast<struct s60**>(&esp447->f0) = reinterpret_cast<struct s60*>(0xa9c22074);
                                        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(0);
                                        *reinterpret_cast<void**>(&edx355 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355 + 1)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)));
                                        *reinterpret_cast<void**>(&edx355 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355 + 1)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edx355->f0)));
                                        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                                        *reinterpret_cast<void**>(ecx365) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ecx365)) - reinterpret_cast<unsigned char>(eax434));
                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi276) + 0x30383261) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi276) + 0x30383261) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434 + 1)));
                                        goto addr_4043dc_486;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cf455 = __intrinsic();
    goto addr_404636_578;
    addr_4045cf_528:
    if (0) {
        addr_404640_579:
        __asm__("insb ");
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        goto _CorExeMain;
    } else {
        addr_4045d1_529:
        if (1) {
            goto addr_404630_581;
        }
    }
    esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) - 4);
    *reinterpret_cast<struct s60**>(&esp447->f0) = ebp348;
    if (1) {
        addr_40463b_523:
        if (cf455) {
            addr_4046a2_583:
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        } else {
            addr_40463d_526:
            __asm__("insb ");
            goto addr_404640_579;
        }
    } else {
        if (0) {
            addr_404621_585:
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
            tmp8_474 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi401) + 67) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx313)));
            cf455 = tmp8_474 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi401) + 67);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edi401) + 67) = tmp8_474;
            sf456 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edi401) + 67) < reinterpret_cast<signed char>(0);
            __asm__("outsd ");
            if (cf455) {
                addr_404675_586:
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                goto addr_404697_587;
            } else {
                addr_404630_581:
                if (sf456) {
                    addr_404697_587:
                    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                    goto addr_4046a2_583;
                } else {
                    goto addr_404633_518;
                }
            }
        } else {
            addr_4045d8_589:
            __asm__("outsb ");
            __asm__("outsw ");
            __asm__("outsd ");
            esp475 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esp447->f0)) + 4) - 4);
            *reinterpret_cast<struct s60**>(&esp475->f0) = edx355;
            __asm__("insb ");
            __asm__("popad ");
            if (1) {
                goto addr_404650_591;
            }
        }
    }
    *reinterpret_cast<struct s60**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esp475->f0)) + 4) - 4) = ebp348;
    if (1) {
        addr_404650_591:
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        goto addr_404657_593;
    } else {
        if (0) {
            addr_404636_578:
            goto addr_404637_522;
        } else {
            __asm__("outsb ");
            __asm__("outsw ");
            if (0) {
                addr_404657_593:
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                goto addr_404675_586;
            } else {
                eax434 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(eax434) - (70 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax434) < reinterpret_cast<unsigned char>(70))));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&edi401->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edi401->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355 + 1)));
                esi276 = reinterpret_cast<struct s60*>(&esi276->f1);
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434 + 1)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                *reinterpret_cast<struct s60**>(&esi276->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&esi276->f0)) - reinterpret_cast<unsigned char>(eax434));
                *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
                goto addr_404621_585;
            }
        }
    }
    addr_404561_530:
    if (!zf457) {
        goto addr_4045d8_589;
    } else {
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        goto addr_404565_534;
    }
    do {
        addr_404577_537:
        *reinterpret_cast<struct s60**>(&ebp348->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&ebp348->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx355)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<void**>(&eax434) = ga0000045;
        __asm__("daa ");
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        addr_40458d_599:
        tmp8_476 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        cf477 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_476) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = tmp8_476;
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434))) + cf477);
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        addr_40459e_569:
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        esp478 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) - 4);
        *reinterpret_cast<struct s60**>(&esp478->f0) = edx355;
        esp479 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp478) - 4);
        *reinterpret_cast<struct s60**>(&esp479->f0) = ebx313;
        esp447 = reinterpret_cast<struct s60*>(&esp479->f1 - 4);
        *reinterpret_cast<struct s60**>(&esp447->f0) = ebx313;
        tmp8_480 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) + 95);
        cf481 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_480) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
        *reinterpret_cast<void**>(&eax434) = tmp8_480;
        addr_4045a7_600:
        addr_4045a8_601:
        esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) - 4);
        *reinterpret_cast<struct s60**>(&esp447->f0) = reinterpret_cast<struct s60*>(1);
        cf481 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) < reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&(edx355 + 0xfffffff5)->f0)) + cf481));
        *reinterpret_cast<void**>(&eax434) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) - reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&(edx355 + 0xfffffff5)->f0)) + cf481));
        addr_4045ad_602:
        *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(edi401) + 37) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(edi401) + 37) + reinterpret_cast<unsigned char>(esp447) + cf481;
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi401) + 37) < reinterpret_cast<int32_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(edi401) + 37) == 0)));
    esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) + 4);
    eax434 = reinterpret_cast<struct s60*>(1);
    ebx313 = reinterpret_cast<struct s60*>(&ebx313->f1);
    cf449 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx313)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp348) + reinterpret_cast<unsigned char>(edx355) * 2 + 0x73)));
    goto addr_4045bb_517;
    addr_4044dc_542:
    __asm__("outsb ");
    __asm__("arpl [esi], di");
    esp482 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) + 4);
    edi401 = *reinterpret_cast<struct s60**>(&esp482->f0);
    esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp482) + 4);
    *reinterpret_cast<void**>(&eax434) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)));
    tmp8_483 = reinterpret_cast<unsigned char>(g75080001 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx365)));
    cf449 = reinterpret_cast<uint1_t>(tmp8_483 < g75080001);
    g75080001 = tmp8_483;
    goto addr_4044e8_496;
    addr_404511_549:
    *reinterpret_cast<struct s60**>(&edi401->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&edi401->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx365)));
    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(eax434));
    *reinterpret_cast<void**>(&eax434) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) | *reinterpret_cast<unsigned char*>(&(esi276 + 15)->f0));
    if (0) 
        goto addr_40458d_599;
    if (!*reinterpret_cast<void**>(&eax434)) {
        addr_40453c_540:
        *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(eax434));
        tmp32_484 = *reinterpret_cast<uint32_t*>(&(esi276 + 1)->f0) + reinterpret_cast<unsigned char>(esi276);
        cf481 = reinterpret_cast<uint1_t>(tmp32_484 < *reinterpret_cast<uint32_t*>(&(esi276 + 1)->f0));
        *reinterpret_cast<uint32_t*>(&(esi276 + 1)->f0) = tmp32_484;
        if (cf481 | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&(esi276 + 1)->f0) == 0)) 
            goto addr_4045a8_601;
    } else {
        __asm__("outsb ");
        goto addr_40451d_571;
    }
    if (cf481) 
        goto addr_4045a7_600;
    __asm__("outsd ");
    if (!cf481) 
        goto addr_4045ad_602;
    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
    esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) - 2);
    *reinterpret_cast<struct s60**>(&esp447->f0) = es363;
    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(eax434));
    *reinterpret_cast<void**>(&eax434) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)));
    tmp8_485 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
    cf449 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_485) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)));
    *reinterpret_cast<struct s60**>(&eax434->f0) = tmp8_485;
    goto addr_404551_497;
    addr_4044ca_564:
    goto addr_4044cb_515;
    addr_404469_565:
    __asm__("insd ");
    esp486 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) + 4);
    edi401 = *reinterpret_cast<struct s60**>(&esp486->f0);
    esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp486) + 4);
    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx365) + reinterpret_cast<unsigned char>(eax434)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx365) + reinterpret_cast<unsigned char>(eax434)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
    goto addr_404478_495;
    addr_40452a_570:
    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax434)));
    esp447 = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(esp447) - 2);
    *reinterpret_cast<struct s60**>(&esp447->f0) = cs487;
    *reinterpret_cast<struct s60**>(&eax434->f0) = reinterpret_cast<struct s60*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s60**>(&eax434->f0)) + reinterpret_cast<unsigned char>(eax434));
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx365) + 0x73) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx365) + 0x73) | reinterpret_cast<uint32_t>(ecx365);
    cf449 = 0;
    zf454 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx365) + 0x73) == 0;
    goto addr_404532_516;
    addr_403f72_453:
    --esp245;
    *esp245 = 0x20006500;
    *esi222 = reinterpret_cast<unsigned char>(*esi222 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax243) + 1)));
    eax243 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*eax243) * 0x64006e);
    *eax243 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax243) & *reinterpret_cast<unsigned char*>(&eax243));
    __asm__("arpl [eax], ax");
    __asm__("outsd ");
    goto addr_403f85_451;
    addr_403c30_366:
    eax114 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(eax114) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)));
    *reinterpret_cast<void**>(&eax114) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)));
    goto addr_403c33_609;
    addr_403c42_372:
    *reinterpret_cast<unsigned char*>(*reinterpret_cast<int16_t*>(&ebx96) + *reinterpret_cast<int16_t*>(&edi14)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(*reinterpret_cast<int16_t*>(&ebx96) + *reinterpret_cast<int16_t*>(&edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96 + 1)));
    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93 + 1)));
    *reinterpret_cast<struct s56**>(eax114) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96 + 1)));
    *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93 + 1)));
    eax114 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(eax114) ^ 0x62005400);
    goto addr_403c4f_374;
    addr_403c56_377:
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
    *reinterpret_cast<struct s56**>(esp100) = eax114;
    goto addr_403c57_610;
    addr_403bec_382:
    edi14 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edi14) + 1);
    zf117 = reinterpret_cast<uint1_t>(edi14 == 0);
    sf118 = reinterpret_cast<signed char>(edi14) < reinterpret_cast<signed char>(0);
    goto addr_403bed_611;
    addr_403afe_386:
    __asm__("arpl [edi+0x6d], bp");
    __asm__("insd ");
    __asm__("popad ");
    goto addr_403b03_612;
    addr_403a4f_340:
    __asm__("insd ");
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) + 1);
    esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65)) * 0x726f7463);
    cf116 = __intrinsic();
    if (!__undefined()) {
        addr_403aaf_613:
        ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
        zf117 = reinterpret_cast<uint1_t>(ecx93 == 0);
        sf118 = reinterpret_cast<signed char>(ecx93) < reinterpret_cast<signed char>(0);
        of119 = __intrinsic();
        if (zf117) {
            addr_403b29_614:
            if (zf117) {
                addr_403b84_615:
                __asm__("popad ");
                if (cf116) {
                    goto addr_403bec_382;
                } else {
                    addr_403b88_617:
                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                    *reinterpret_cast<struct s56**>(esp100) = reinterpret_cast<struct s56*>(0x75736552);
                    goto addr_403b8a_618;
                }
            } else {
                if (!cf116) {
                    goto addr_403b97_621;
                }
            }
        } else {
            if (cf116) {
                addr_403b20_623:
                if (!cf116) {
                    goto addr_403b88_617;
                }
            } else {
                if (!cf116) 
                    goto addr_403abd_626; else 
                    goto addr_403abd_626;
            }
        }
    } else {
        if (cf116) {
            addr_403ad5_628:
            goto addr_403ad6_345;
        } else {
            esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) * 0x65440073);
            goto addr_403a62_336;
        }
    }
    addr_403b31_630:
    if (!cf116) {
        if (of119) {
            addr_403ba9_388:
            if (!zf117) {
                goto addr_403c1e_396;
            }
        } else {
            addr_403b35_634:
            goto addr_403b37_635;
        }
    }
    addr_403b83_636:
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
    *reinterpret_cast<struct s56**>(esp100) = ebx96;
    goto addr_403b84_615;
    if (cf116) {
        addr_403c12_638:
        goto addr_403c13_639;
    } else {
        __asm__("outsb ");
        if (zf117) {
            addr_403c13_639:
            __asm__("arpl [gs:edi+ebp*2+0x72], si");
            goto addr_403c16_392;
        } else {
            ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
            zf117 = reinterpret_cast<uint1_t>(ebx96 == 0);
            sf118 = reinterpret_cast<signed char>(ebx96) < reinterpret_cast<signed char>(0);
            __asm__("outsd ");
            if (!zf117) {
                addr_403c26_400:
                *reinterpret_cast<struct s56**>(eax114) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx93) + 48) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx93) + 48) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
                goto addr_403c2a_365;
            }
            esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
            *reinterpret_cast<struct s56**>(esp100) = ebx96;
            if (zf117) 
                goto addr_403c1e_396;
            if (cf116) {
                addr_403c33_609:
                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                *reinterpret_cast<struct s56**>(esp100) = eax114;
                goto addr_403c35_646;
            } else {
                addr_403bbf_354:
                tmp8_488 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                cf116 = reinterpret_cast<uint1_t>(tmp8_488 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f));
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) = tmp8_488;
                below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) == 0));
                goto addr_403bc0_349;
            }
        }
    }
    if (cf116) {
        addr_403b73_391:
        __asm__("arpl [eax+eax+0x67], si");
        if (zf117) {
            goto addr_403bdb_376;
        } else {
            esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) + 1);
            zf117 = reinterpret_cast<uint1_t>(esp100 == 0);
            sf118 = reinterpret_cast<signed char>(esp100) < reinterpret_cast<signed char>(0);
            goto addr_403b7c_650;
        }
    } else {
        if (of119) {
            addr_403b9a_652:
            esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
            *reinterpret_cast<struct s56**>(esp100) = ebx96;
            goto addr_403b9b_361;
        } else {
            ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x6e)) * 0x65470073);
            cf116 = __intrinsic();
            of119 = __intrinsic();
            sf118 = __undefined();
            zf117 = __undefined();
            goto addr_403b29_614;
        }
    }
    addr_403abd_626:
    edi14 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edi14) + 1);
    zf117 = reinterpret_cast<uint1_t>(edi14 == 0);
    sf118 = reinterpret_cast<signed char>(edi14) < reinterpret_cast<signed char>(0);
    of119 = __intrinsic();
    if (zf117) {
        addr_403b03_612:
        __asm__("outsb ");
        edi14 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edi14) - 1);
        zf117 = reinterpret_cast<uint1_t>(edi14 == 0);
        sf118 = reinterpret_cast<signed char>(edi14) < reinterpret_cast<signed char>(0);
        if (__intrinsic()) {
            addr_403b7c_650:
            __asm__("popa ");
            if (!zf117) {
                addr_403bed_611:
                if (zf117) {
                    addr_403c35_646:
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax114) + reinterpret_cast<unsigned char>(eax114) + 0x77) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax114) + reinterpret_cast<unsigned char>(eax114) + 0x77) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                    *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
                    goto addr_403c3b_368;
                } else {
                    addr_403bf0_362:
                    if (sf118 || (ebp115 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi44) + 0x67) * 0x65737341), cf116 = __intrinsic(), esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 1), __intrinsic())) {
                        addr_403c57_610:
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax114) + reinterpret_cast<unsigned char>(eax114) + 51) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax114) + reinterpret_cast<unsigned char>(eax114) + 51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
                        goto addr_403c5b_379;
                    } else {
                        if (esp100) {
                            goto addr_403c6e_406;
                        } else {
                            addr_403c08_404:
                            if (cf116) {
                                addr_403c83_408:
                                *reinterpret_cast<struct s56**>(ecx93) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ecx93)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96 + 1)));
                                *reinterpret_cast<struct s56**>(ebx96) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebx96)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
                                *reinterpret_cast<struct s56**>(ebp115) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(ebp115)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                                goto addr_403c89_656;
                            } else {
                                tmp8_489 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x75)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
                                cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_489) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x75)));
                                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x75) = tmp8_489;
                                goto addr_403c0c_658;
                            }
                        }
                    }
                }
            } else {
                if (zf117) 
                    goto addr_403b83_636; else 
                    goto addr_403b83_636;
            }
        } else {
            ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x6e)) * 0x6c470073);
            cf116 = __intrinsic();
            goto addr_403b0e_661;
        }
    } else {
        if (!sf118) {
            addr_403b37_635:
            __asm__("insd ");
            __asm__("insd ");
            __asm__("popad ");
            __asm__("outsb ");
            esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 1);
            goto addr_403b41_663;
        } else {
            addr_403ac3_339:
        }
        __asm__("popad ");
        if (cf116) {
            goto addr_403b31_630;
        } else {
            esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
            *reinterpret_cast<struct s56**>(esp100) = ebx96;
            if (!sf118) {
                addr_403b41_663:
                ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x65)) * 0x73726150);
                cf116 = __intrinsic();
                of119 = __intrinsic();
                sf118 = __undefined();
                zf117 = __undefined();
                below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                goto addr_403b48_360;
            } else {
                if (zf117) 
                    goto addr_403b35_634;
                __asm__("insd ");
                esp490 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                *reinterpret_cast<struct s56**>(esp490) = esp490;
                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp490) - 4);
                *reinterpret_cast<struct s56**>(esp100) = reinterpret_cast<struct s56*>(0x64616572);
                goto addr_403ad5_628;
            }
        }
    }
    addr_403a9c_309:
    ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
    goto addr_403aa0_670;
    addr_403a26_310:
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) * 0x79530073);
    cf116 = __intrinsic();
    zf117 = __undefined();
    if (!cf116) 
        goto addr_403aa3_671;
    addr_403a2f_672:
    __asm__("insd ");
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
    *reinterpret_cast<struct s56**>(esp100) = edx87;
    if (!zf117) {
        addr_403aa3_671:
        __asm__("insd ");
        __asm__("insd ");
        __asm__("popad ");
        __asm__("outsb ");
        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 1);
        goto addr_403aa8_673;
    } else {
        if (zf117) {
            addr_403aa0_670:
            __asm__("outsd ");
            goto addr_403aa3_671;
        } else {
            __asm__("insd ");
            ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
            of165 = __intrinsic();
            goto addr_403a3a_676;
        }
    }
    addr_40395b_323:
    if (!cf116) {
        addr_4039c2_318:
    } else {
        if (of165) {
            addr_4039d3_679:
            esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x73)) * 0x65735500);
            cf491 = __intrinsic();
            if (cf491) {
                addr_403a25_315:
                goto addr_403a26_310;
            } else {
                __asm__("outsb ");
                __asm__("outsw ");
                ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
                __asm__("outsd ");
                __asm__("insd ");
                goto addr_4039e3_681;
            }
        } else {
            goto addr_403962_683;
        }
    }
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
    *reinterpret_cast<struct s56**>(esp100) = ebx96;
    if (!sf164) {
        addr_403a3a_676:
        __asm__("outsd ");
        __asm__("insd ");
        if (of165) {
            addr_403aa8_673:
            ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x65)) * 0x726f432e);
            cf116 = __intrinsic();
            goto addr_403aaf_613;
        } else {
            __asm__("insb ");
            if (cf116) {
                addr_403a96_304:
                ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebp115) - 1);
                __asm__("popad ");
                if (!ebp115) {
                    addr_403b0e_661:
                    __asm__("outsd ");
                    edi14 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edi14) - 1);
                    zf117 = reinterpret_cast<uint1_t>(edi14 == 0);
                    if (__intrinsic()) {
                        addr_403b8a_618:
                        __asm__("insb ");
                    } else {
                        ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x6e)) * 0x69460073);
                        cf116 = __intrinsic();
                        of119 = __intrinsic();
                        sf118 = __undefined();
                        zf117 = __undefined();
                        __asm__("outsb ");
                        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                        *reinterpret_cast<struct s56**>(esp100) = ebp115;
                        goto addr_403b20_623;
                    }
                } else {
                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                    *reinterpret_cast<struct s56**>(esp100) = reinterpret_cast<struct s56*>(0x72615769);
                    goto addr_403a9c_309;
                }
            } else {
                if (cf116) {
                    goto addr_403abd_626;
                } else {
                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) * 0x79530073);
                    cf116 = __intrinsic();
                    of119 = __intrinsic();
                    sf118 = __undefined();
                    zf117 = __undefined();
                    goto addr_403a48_338;
                }
            }
        }
    } else {
        if (zf117) {
            goto addr_403a2f_672;
        } else {
            __asm__("insd ");
            goto addr_4039d3_679;
        }
    }
    edi14 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(edi14) + 1);
    zf117 = reinterpret_cast<uint1_t>(edi14 == 0);
    sf118 = reinterpret_cast<signed char>(edi14) < reinterpret_cast<signed char>(0);
    if (zf117) {
        goto addr_403be7_381;
    }
    if (!cf116) {
        addr_403c0c_658:
        if (cf116) {
            addr_403c89_656:
            *reinterpret_cast<struct s56**>(edi14) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93)));
            __asm__("popad ");
            *reinterpret_cast<struct s56**>(edx87) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
            goto addr_403c90_394;
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx93) + reinterpret_cast<unsigned char>(ebp115) * 2 + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx93) + reinterpret_cast<unsigned char>(ebp115) * 2 + 0x72) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
            zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx93) + reinterpret_cast<unsigned char>(ebp115) * 2 + 0x72) == 0);
            sf118 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx93) + reinterpret_cast<unsigned char>(ebp115) * 2 + 0x72) < 0;
            goto addr_403c12_638;
        }
    } else {
        addr_403b97_621:
        __asm__("insb ");
        if (zf117) 
            goto addr_403b9a_652; else 
            goto addr_403b9a_652;
    }
    addr_4038ea_325:
    if (of119) {
        addr_403962_683:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
        __asm__("insd ");
        __asm__("insd ");
        goto addr_40396d_698;
    } else {
        ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x6e)) * 0x65735500);
        cf116 = __intrinsic();
        of119 = __intrinsic();
        sf118 = __undefined();
        zf117 = __undefined();
        below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
        goto addr_4038f2_327;
    }
    addr_40380e_332:
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
    *reinterpret_cast<struct s56**>(esp100) = eax114;
    __asm__("popad ");
    if (cf116) {
        addr_403885_329:
        if (cf116) {
            addr_4038fb_700:
            if (!sf118) {
                addr_40396d_698:
                __asm__("popad ");
                __asm__("outsb ");
                ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x65)) * 0x73726150);
                cf491 = __intrinsic();
            } else {
                __asm__("arpl [ecx+0x73], dx");
                ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x65)) * 0x74);
                goto addr_403905_178;
            }
        } else {
            if (!sf118) 
                goto addr_4038df_322; else 
                goto addr_403889_703;
        }
    } else {
        ebp115 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi44) + 0x67) * 0x74656700);
        cf116 = __intrinsic();
        of119 = __intrinsic();
        sf118 = __undefined();
        zf117 = __undefined();
        below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
        goto addr_403816_705;
    }
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(esp100) - 1) - 4);
    *reinterpret_cast<struct s56**>(esp100) = esp100;
    __asm__("popad ");
    if (!cf491) {
        addr_4039ea_707:
        esi44 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx96) + 99) * 0x7265766f);
        cf116 = __intrinsic();
        goto addr_4039ee_708;
    } else {
        ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
        if (!reinterpret_cast<uint1_t>(cf491 | reinterpret_cast<uint1_t>(ecx93 == 0))) {
            addr_4039e3_681:
            __asm__("insd ");
            __asm__("popad ");
            __asm__("outsb ");
        } else {
            esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x72)) * 0x74654700);
            cf116 = __intrinsic();
            ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
            if (!reinterpret_cast<uint1_t>(cf116 | reinterpret_cast<uint1_t>(ecx93 == 0))) {
                addr_4039ee_708:
                ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
                zf117 = reinterpret_cast<uint1_t>(ebx96 == 0);
                sf118 = reinterpret_cast<signed char>(ebx96) < reinterpret_cast<signed char>(0);
                of119 = __intrinsic();
                goto addr_4039f2_299;
            } else {
                esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp115) + 0x72)) * 0x74657300);
                goto addr_40398e_277;
            }
        }
    }
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) + 1);
    goto addr_4039ea_707;
    if (zf141) {
        addr_40379a_714:
        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
        *reinterpret_cast<struct s56**>(esp100) = reinterpret_cast<struct s56*>(0x64616572);
        goto addr_4037a4_194;
    } else {
        addr_403726_229:
        if (cf116) 
            goto addr_403791_262;
    }
    tmp8_492 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
    cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_492) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)));
    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) = tmp8_492;
    zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) == 0);
    sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) < reinterpret_cast<signed char>(0);
    of119 = __intrinsic();
    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
    if (!cf116) 
        goto addr_403796_333;
    __asm__("insd ");
    goto addr_403734_172;
    if (cf116) {
        goto addr_40364a_202;
    } else {
        goto addr_4035e2_254;
    }
    addr_4036e4_247:
    goto addr_4036e5_720;
    addr_403679_248:
    ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
    zf117 = reinterpret_cast<uint1_t>(ecx93 == 0);
    sf118 = reinterpret_cast<signed char>(ecx93) < reinterpret_cast<signed char>(0);
    of119 = __intrinsic();
    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
    if (zf117) {
        addr_4036f0_721:
        __asm__("outsd ");
        __asm__("insd ");
        if (of119) {
            addr_403762_722:
            __asm__("outsb ");
            if (zf117) {
                addr_4037cf_723:
                if (zf117) {
                    addr_403845_212:
                    __asm__("insb ");
                    __asm__("popad ");
                    if (zf117) {
                        addr_4038b2_210:
                        __asm__("insb ");
                        if (zf117) {
                            addr_4038f9_273:
                            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                            sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) < reinterpret_cast<signed char>(0);
                            goto addr_4038fb_700;
                        } else {
                            __asm__("outsd ");
                            __asm__("insb ");
                            __asm__("insb ");
                            __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                            __asm__("outsb ");
                            tmp8_493 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
                            cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_493) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65)));
                            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65) = tmp8_493;
                            zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65) == 0);
                            sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65)) < reinterpret_cast<signed char>(0);
                            of119 = __intrinsic();
                            below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                            if (cf116) {
                                addr_4038c4_726:
                                __asm__("insb ");
                                if (zf117) {
                                    addr_403917_727:
                                    __asm__("popad ");
                                    __asm__("outsb ");
                                    ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
                                    __asm__("outsd ");
                                    __asm__("outsb ");
                                    *reinterpret_cast<uint16_t*>(&esp100) = reinterpret_cast<uint16_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x75)) * 0x6172);
                                    cf116 = __intrinsic();
                                    zf117 = __undefined();
                                    goto addr_403922_276;
                                } else {
                                    if (cf116) {
                                        addr_403938_729:
                                    } else {
                                        if (of119) {
                                            addr_403930_284:
                                            if (zf117) {
                                                addr_403992_278:
                                                goto addr_403993_280;
                                            } else {
                                                edi14 = *reinterpret_cast<struct s56**>(esp100);
                                                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) + 4);
                                                __asm__("insb ");
                                                goto addr_403938_729;
                                            }
                                        } else {
                                            if (cf116) {
                                                addr_403941_271:
                                                goto addr_403942_286;
                                            } else {
                                                if (!sf118) {
                                                    addr_403912_181:
                                                    __asm__("outsd ");
                                                    __asm__("insd ");
                                                    __asm__("insd ");
                                                    goto addr_403917_727;
                                                } else {
                                                    __asm__("outsd ");
                                                    __asm__("insb ");
                                                    goto addr_4038d1_275;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        __asm__("outsd ");
                        __asm__("outsb ");
                        esp494 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                        *reinterpret_cast<struct s56**>(esp494) = esp494;
                        __asm__("outsd ");
                        esp100 = reinterpret_cast<struct s56*>(0);
                        cf116 = __intrinsic();
                        of119 = __intrinsic();
                        sf118 = __undefined();
                        zf117 = __undefined();
                        below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                        goto addr_40384e_736;
                    }
                } else {
                    addr_4037d3_264:
                    ebp115 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi44) + 0x67) * 0x536f5400);
                    cf116 = __intrinsic();
                    of119 = __intrinsic();
                    sf118 = __undefined();
                    zf117 = __undefined();
                    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                    goto addr_4037d8_737;
                }
            } else {
                addr_403766_266:
                __asm__("insd ");
                ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
                zf117 = reinterpret_cast<uint1_t>(ebx96 == 0);
                sf118 = reinterpret_cast<signed char>(ebx96) < reinterpret_cast<signed char>(0);
                of119 = __intrinsic();
                below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                __asm__("outsd ");
                __asm__("insd ");
                if (of119) {
                    addr_4037ce_214:
                    *reinterpret_cast<void**>(&eax114) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)) ^ 83);
                    zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&eax114) == 0);
                    goto addr_4037cf_723;
                } else {
                    if (zf117) {
                        addr_4037d8_737:
                        if (zf117) {
                            addr_40384e_736:
                            __asm__("arpl [ecx+0x6e], sp");
                            __asm__("arpl [ebp+0x6c], sp");
                            goto addr_403857_156;
                        } else {
                            ebp115 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi44) + 0x67) * 0x74654700);
                            cf116 = __intrinsic();
                            of119 = __intrinsic();
                            sf118 = __undefined();
                            zf117 = __undefined();
                            below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                            esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                            *reinterpret_cast<struct s56**>(esp100) = ebx96;
                            if (zf117) {
                                addr_403858_157:
                                __asm__("popad ");
                                if (zf117) 
                                    goto addr_4038c4_726; else 
                                    goto addr_40385b_740;
                            } else {
                                ebp115 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi44) + 0x67) * 0x74614d00);
                                cf116 = __intrinsic();
                                of119 = __intrinsic();
                                sf118 = __undefined();
                                zf117 = __undefined();
                                below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                                goto addr_4037e9_155;
                            }
                        }
                    } else {
                        goto addr_403770_148;
                    }
                }
            }
        } else {
            __asm__("insb ");
            __asm__("popad ");
            if (zf117) 
                goto addr_403766_266;
            __asm__("outsd ");
            __asm__("outsb ");
            goto addr_4036ff_745;
        }
    } else {
        if (cf116) 
            goto addr_4036e7_245;
        tmp8_495 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp115) + 98) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
        cf116 = reinterpret_cast<uint1_t>(tmp8_495 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp115) + 98));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp115) + 98) = tmp8_495;
        zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp115) + 98) == 0);
        sf118 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebp115) + 98) < reinterpret_cast<signed char>(0);
        of119 = __intrinsic();
        below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
        goto addr_403682_748;
    }
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) + 1);
    esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65)) * 0x726f7463);
    cf116 = __intrinsic();
    of119 = __intrinsic();
    sf118 = __undefined();
    zf117 = __undefined();
    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
    goto addr_403940_270;
    addr_40385b_740:
    __asm__("outsd ");
    __asm__("outsb ");
    esp496 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
    *reinterpret_cast<struct s56**>(esp496) = esp496;
    __asm__("outsd ");
    __asm__("popad ");
    ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(esi44)) * 0x74737953);
    __asm__("insd ");
    esp100 = reinterpret_cast<struct s56*>(0xfffffffc);
    gfffffffc = edx87;
    __asm__("o16 insb ");
    __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
    goto addr_403878_268;
    addr_403660_250:
    ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
    zf117 = reinterpret_cast<uint1_t>(ecx93 == 0);
    sf118 = reinterpret_cast<signed char>(ecx93) < reinterpret_cast<signed char>(0);
    of119 = __intrinsic();
    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
    if (zf117) {
        addr_4036d7_750:
        if (!cf116) {
            addr_403740_197:
            if (cf116) {
                addr_4037ac_195:
                if (zf117) {
                    addr_403816_705:
                    edi14 = *reinterpret_cast<struct s56**>(esp100);
                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) + 4 - 4);
                    *reinterpret_cast<struct s56**>(esp100) = esp100;
                    __asm__("popad ");
                    if (!cf116) {
                        addr_403889_703:
                        __asm__("popad ");
                        __asm__("insb ");
                        if (!zf117) {
                            addr_4038f2_327:
                            goto addr_4038f3_269;
                        } else {
                            ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
                            goto addr_40388e_175;
                        }
                    } else {
                        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x69) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x69)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                        goto addr_403821_189;
                    }
                } else {
                    addr_4037b1_753:
                    __asm__("insd ");
                    goto addr_4037b2_173;
                }
            } else {
                goto addr_403744_755;
            }
        } else {
            __asm__("insd ");
            if (!cf116) {
                addr_403746_757:
                tmp8_497 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_497) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)));
                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) = tmp8_497;
                zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) == 0);
                sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) < reinterpret_cast<signed char>(0);
                of119 = __intrinsic();
                if (!cf116) 
                    goto addr_4037b1_753; else 
                    goto addr_40374c_151;
            } else {
                if (cf116) {
                    addr_40374e_152:
                    __asm__("outsd ");
                    __asm__("insd ");
                    if (of119) 
                        goto addr_4037b6_188;
                } else {
                    addr_4036e5_720:
                    if (of119) {
                        goto addr_40375c_760;
                    } else {
                        addr_4036e7_245:
                        ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x6e)) * 0x72747441);
                        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x75)) * 0x43006574);
                        cf116 = __intrinsic();
                        of119 = __intrinsic();
                        sf118 = __undefined();
                        zf117 = __undefined();
                        below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                        goto addr_4036ef_761;
                    }
                }
            }
        }
    } else {
        addr_403663_762:
        if (cf116) {
            addr_4036ce_199:
            if (zf117) {
                addr_403744_755:
                goto addr_403746_757;
            } else {
                if (cf116) 
                    goto addr_40373b_196;
                goto addr_4036d4_242;
            }
        } else {
            goto addr_403666_239;
        }
    }
    __asm__("outsb ");
    if (!sf118) {
        addr_403799_334:
        goto addr_40379a_714;
    } else {
        if (zf117) 
            goto addr_4037ce_214;
        if (cf116) 
            goto addr_4037c5_209;
    }
    addr_40375c_760:
    tmp8_498 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x75)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
    cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_498) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x75)));
    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x75) = tmp8_498;
    zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x75) == 0);
    goto addr_403762_722;
    addr_4035f8_252:
    if (!cf116) {
        goto addr_403663_762;
    } else {
        __asm__("insd ");
        goto addr_403600_771;
    }
    addr_403499_226:
    if (cf116) {
        addr_40350d_259:
        __asm__("outsb ");
        tmp8_499 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
        cf500 = reinterpret_cast<unsigned char>(tmp8_499) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 97));
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 97) = tmp8_499;
        zf129 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 97) == 0;
        sf501 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 97)) < reinterpret_cast<signed char>(0);
        __asm__("insb ");
        if (!zf129) {
            goto addr_40357d_256;
        }
    } else {
        __asm__("popad ");
        __asm__("insd ");
        goto addr_4034a1_112;
    }
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
    *reinterpret_cast<struct s56**>(esp100) = esp100;
    if (!sf501) {
        addr_40358a_775:
        if (!cf500) {
            addr_403600_771:
            esi44 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esp100) + reinterpret_cast<unsigned char>(ebp115) * 2 + 0x65) * 0x72747441);
            esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x75)) * 0x4e006574);
            cf116 = __intrinsic();
            goto addr_40360c_776;
        } else {
            addr_40358c_83:
            __asm__("popad ");
            if (zf129) 
                goto addr_4035f4_251;
        }
    } else {
        addr_40351a_74:
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
        zf159 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) == 0;
        if (zf159) {
            addr_40357f_257:
            __asm__("popad ");
            if (zf159) {
                addr_4035e9_255:
                esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x69)) * 0x41656c62);
                cf116 = __intrinsic();
                zf156 = __undefined();
                goto addr_4035ea_238;
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi44) + reinterpret_cast<unsigned char>(edi14)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi44) + reinterpret_cast<unsigned char>(edi14)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx96 + 1)));
                *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(edi14) + 95) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(edi14) + 95) ^ reinterpret_cast<unsigned char>(ebx96);
                cf500 = 0;
                zf129 = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(edi14) + 95) == 0;
                goto addr_40358a_775;
            }
        } else {
            ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
            if (ecx93) {
                addr_403597_779:
                esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx87) + 0x65)) * 0x74744164);
                cf116 = __intrinsic();
                if (cf116) {
                    addr_40360c_776:
                    __asm__("popad ");
                    __asm__("insd ");
                    ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
                    zf117 = reinterpret_cast<uint1_t>(ecx93 == 0);
                    sf118 = reinterpret_cast<signed char>(ecx93) < reinterpret_cast<signed char>(0);
                    of119 = __intrinsic();
                    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                    if (zf117) {
                        goto addr_40368c_781;
                    }
                } else {
                    tmp8_502 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                    cf116 = reinterpret_cast<uint1_t>(tmp8_502 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) = tmp8_502;
                    zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) == 0);
                    sf118 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx96) + 0x6f) < reinterpret_cast<signed char>(0);
                    of119 = __intrinsic();
                    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                    __asm__("insd ");
                    if (of119) {
                        goto addr_403617_784;
                    }
                    __asm__("insb ");
                    if (cf116) 
                        goto addr_4035f8_252; else 
                        goto addr_4035b1_786;
                }
            } else {
                esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                *reinterpret_cast<struct s56**>(esp100) = reinterpret_cast<struct s56*>(0x69746e65);
                __asm__("arpl [ecx+0x74], sp");
                ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x6e)) * 0x65707954);
                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x6e) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x6e)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx93)));
                ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
                __asm__("outsd ");
                __asm__("outsb ");
                *reinterpret_cast<uint16_t*>(&esp100) = reinterpret_cast<uint16_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x75)) * 0x6572);
                goto addr_403539_67;
            }
        }
    }
    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x72) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x72)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87)));
    goto addr_403597_779;
    addr_4035b1_786:
    __asm__("outsb ");
    if (cf116) {
        addr_403617_784:
        if (cf116) {
            addr_403682_748:
            if (!zf117) {
                addr_4036ef_761:
                goto addr_4036f0_721;
            } else {
                if (cf116) {
                    addr_4036d4_242:
                    tmp8_503 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                    cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_503) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)));
                    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) = tmp8_503;
                    zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) == 0);
                    sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) < reinterpret_cast<signed char>(0);
                    of119 = __intrinsic();
                    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                    goto addr_4036d7_750;
                } else {
                    addr_40368c_781:
                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esp100) + 0x65)) * 0x7474416e);
                    cf116 = __intrinsic();
                    of119 = __intrinsic();
                    sf118 = __undefined();
                    zf117 = __undefined();
                    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                    goto addr_40368d_790;
                }
            }
        } else {
            tmp8_504 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
            cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_504) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)));
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) = tmp8_504;
            zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73) == 0);
            sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + 0x73)) < reinterpret_cast<signed char>(0);
            of119 = __intrinsic();
            below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
            goto addr_40361d_792;
        }
    } else {
        if (zf117) {
            addr_40361d_792:
            if (!sf118) {
                addr_403690_794:
                if (cf116) {
                    addr_4036ff_745:
                    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
                    *reinterpret_cast<struct s56**>(esp100) = edx87;
                    __asm__("insb ");
                    __asm__("popad ");
                    if (sf118) 
                        goto addr_403766_266; else 
                        goto addr_403705_147;
                } else {
                    goto addr_403697_231;
                }
            } else {
                __asm__("arpl [ebx+0x74], dx");
                __asm__("popad ");
                if (zf117) {
                    addr_40368d_790:
                    goto addr_403690_794;
                } else {
                    addr_403628_135:
                    ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebp115) - 1);
                    __asm__("popad ");
                    __asm__("arpl [eax+0x69], bp");
                    __asm__("outsb ");
                    ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
                    zf117 = reinterpret_cast<uint1_t>(ecx93 == 0);
                    sf118 = reinterpret_cast<signed char>(ecx93) < reinterpret_cast<signed char>(0);
                    of119 = __intrinsic();
                    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
                    goto addr_403630_124;
                }
            }
        } else {
            ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
            zf117 = reinterpret_cast<uint1_t>(ecx93 == 0);
            sf118 = reinterpret_cast<signed char>(ecx93) < reinterpret_cast<signed char>(0);
            of119 = __intrinsic();
            below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
            goto addr_4035b9_138;
        }
    }
    addr_403419_102:
    if (!reinterpret_cast<uint1_t>(cf116 | zf132)) {
        addr_40348a_96:
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
        zf132 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) == 0);
        goto addr_40348c_101;
    } else {
        if (cf116 || (tmp8_505 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1))), cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_505) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65))), *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) = tmp8_505, *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) == 0)) {
            goto addr_403482_95;
        }
        ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebp115) - 1);
        if (!cf116) 
            goto addr_403499_226;
    }
    __asm__("popad ");
    goto addr_403427_106;
    addr_40342b_107:
    esi44 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx96) + 0x70) * 0x6261736f);
    goto addr_40342d_108;
    addr_403445_114:
    esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esi44) - 1);
    __asm__("popad ");
    __asm__("insd ");
    tmp8_506 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
    cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_506) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)));
    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) = tmp8_506;
    if (!*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) {
        addr_4034ad_110:
        goto addr_4034ae_72;
    } else {
        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
        *reinterpret_cast<struct s56**>(esp100) = ebp115;
        if (!cf116) {
            addr_4034b6_121:
            goto addr_4034ba_64;
        } else {
            addr_403451_29:
            if (cf116) {
                addr_4034a1_112:
                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x72) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x72)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)));
                __asm__("outsd ");
                __asm__("insd ");
                esi44 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esi44) + 1);
                ebp115 = reinterpret_cast<struct s56*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebp115) + 84) * 0x656d69);
                goto addr_4034aa_109;
            } else {
                __asm__("popad ");
                __asm__("insd ");
                tmp8_507 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx87 + 1)));
                cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_507) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65)));
                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) = tmp8_507;
                zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx96) + 0x65) == 0);
                goto addr_403459_63;
            }
        }
    }
    addr_4032d7_21:
    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
    if (!*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) {
        goto addr_403340_60;
    } else {
        ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
        goto addr_4032e0_23;
    }
    addr_4033dd_30:
    esp508 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp100) - 4);
    *reinterpret_cast<struct s56**>(esp508) = reinterpret_cast<struct s56*>(0x72615769);
    ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
    __asm__("outsd ");
    __asm__("insd ");
    __asm__("insd ");
    __asm__("popad ");
    __asm__("outsb ");
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(esp508) - 1);
    ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) + 0x65)) * 0x7362412e);
    cf116 = __intrinsic();
    if (__undefined()) {
        goto addr_403468_78;
    }
    __asm__("popad ");
    __asm__("arpl [ecx+ebp*2+0x6f], si");
    __asm__("outsb ");
    if (!cf116) 
        goto addr_40342b_107;
    ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
    __asm__("outsd ");
    __asm__("insd ");
    __asm__("insd ");
    __asm__("popad ");
    __asm__("outsb ");
    tmp8_509 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114 + 1)));
    cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_509) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)));
    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) = tmp8_509;
    zf117 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65) == 0);
    sf118 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + 0x65)) < reinterpret_cast<signed char>(0);
    of119 = __intrinsic();
    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
    goto addr_403404_62;
    addr_403295_46:
    if (cf116) {
        addr_4032ea_24:
        __asm__("insb ");
        esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(edx87)) * 0x73726150);
        cf116 = __intrinsic();
        goto addr_4032f1_26;
    } else {
        if (!cf116) {
            goto addr_403311_52;
        }
        __asm__("insb ");
        if (zf117) 
            goto addr_4032fe_42;
        *reinterpret_cast<struct s56**>(eax114) = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)) ^ reinterpret_cast<unsigned char>(eax114));
        ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) - 1);
        __asm__("outsb ");
        if (!ecx93) 
            goto addr_4032d7_21;
    }
    *reinterpret_cast<void**>(&eax114) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)));
    cf116 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)) < 79);
    __asm__("outsb ");
    ebp115 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebp115) + 1);
    zf117 = reinterpret_cast<uint1_t>(ebp115 == 0);
    sf118 = reinterpret_cast<signed char>(ebp115) < reinterpret_cast<signed char>(0);
    of119 = __intrinsic();
    below_or_equal120 = reinterpret_cast<uint1_t>(cf116 | zf117);
    if (sf118) 
        goto addr_403311_52;
    __asm__("arpl [ebp+0x74], si");
    ecx93 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ecx93) + 1);
    if (!cf116) 
        goto addr_40332c_57;
    __asm__("outsb ");
    __asm__("arpl [esi], di");
    esp510 = reinterpret_cast<struct s78*>(reinterpret_cast<unsigned char>(esp100) + 4);
    edi14 = esp510->f0;
    esp100 = reinterpret_cast<struct s56*>(reinterpret_cast<uint32_t>(esp510) + 4);
    *reinterpret_cast<void**>(&eax114) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax114)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s56**>(eax114)));
    ebx96 = reinterpret_cast<struct s56*>(reinterpret_cast<unsigned char>(ebx96) + 1);
    __asm__("outsd ");
    __asm__("insd ");
    __asm__("insd ");
    __asm__("popad ");
    __asm__("outsb ");
    __asm__("pushad ");
    goto addr_4032c3_13;
    addr_402eea_4:
    __asm__("popad ");
    *ebx511 = *ebx512 + (reinterpret_cast<int32_t>(__zero_stack_offset()) - 2);
    goto addr_402eed_2;
}

void fun_403094() {
    signed char* ebx1;
    signed char* ebx2;
    signed char dh3;

    *ebx1 = reinterpret_cast<signed char>(*ebx2 + dh3);
}
