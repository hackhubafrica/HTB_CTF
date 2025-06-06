#!/usr/bin/python3

from selenium import webdriver
from selenium.webdriver import FirefoxOptions
from selenium.webdriver.firefox.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
import selenium.webdriver.support.ui as ui
import time

opts = FirefoxOptions()
opts.binary_location = '/usr/bin/firefox'
driverService = Service('/usr/bin/geckodriver', log_output='/dev/null')
opts.add_argument('--headless')

username = 'morty'
password = 'jonasbrothers'

browser = webdriver.Firefox(service=driverService, options=opts)
browser.set_page_load_timeout(20)
wait = ui.WebDriverWait(browser, 10)

# Login
browser.get('http://magicgardens.htb/login')

elem = browser.find_element(By.NAME, 'username')
elem.send_keys(username)

elem = browser.find_element(By.NAME, 'password')
elem.send_keys(password)

elem = browser.find_element(By.XPATH, '//button[text()="Sign in"]')
elem.submit()
print("Logging into the website as standard user")
wait.until(lambda browser: browser.find_element(By.PARTIAL_LINK_TEXT, 'Hello'))
print("Authentication successful!")

# Login into admin
browser.get('http://magicgardens.htb/admin')

elem = browser.find_element(By.NAME, 'username')
elem.send_keys(username)

elem = browser.find_element(By.NAME, 'password')
elem.send_keys(password)

elem.send_keys(Keys.RETURN)
print("Logging into the website as admin")
wait.until(lambda browser: browser.find_element(By.XPATH, '//button[text()="Log out"]'))
print("Authentication successful!")
while True:
        try:
                # Check for orders
                browser.get('http://magicgardens.htb/admin/store/order/')

                orders = browser.find_elements(By.PARTIAL_LINK_TEXT, '[')

                users_set = set()
                users_premium = set()

                for order in orders:
                        user_from_order = order.text.split()[0]
                        users_set.add(user_from_order)
                print("Got orders")

                # Check Premium users
                for user in users_set:
                        browser.get(f"http://magicgardens.htb/admin/store/storeuser/{user}/change/")
                        elem = browser.find_element(By.NAME, 'status')
                        user_status = elem.get_attribute('value')

                        if user_status == 'Premium':
                                users_premium.add(user)
                print("Got premium users")

                # Send messages to premium users
                for user in users_premium:
                        message = f"Hello, {user}. Thank you for your order. The flowers will be delivered tomorrow. To get the discount, please send me your QR code. With love, Morty."
                        browser.get('http://magicgardens.htb/send_message/')

                        elem = browser.find_element(By.ID, 'username')
                        elem.send_keys(user)

                        elem = browser.find_element(By.ID, 'message')
                        elem.send_keys(message)

                        elem = browser.find_element(By.XPATH, '//button[text()="Send"]')
                        elem.submit()
                print("Sent messages to users")

                # Check for new messages
                browser.get('http://magicgardens.htb/profile/?tab=messages&direct=inbox')

                elems = browser.find_elements(By.PARTIAL_LINK_TEXT, 'Attachment')
                message_links = set()

                for elem in elems:
                        is_new = elem.get_attribute('class')

                        if 'bg-dark' in is_new:
                                message_links.add(elem.get_attribute('href'))

                for message_link in message_links:
                        try:
                                browser.get(message_link)
                                elem = browser.find_element(By.PARTIAL_LINK_TEXT, 'Check')
                                browser.get(elem.get_attribute('href'))
                                try:
                                        alert = browser.switch_to.alert
                                        alert.accept()
                                except:
                                        pass
                        except:
                                continue

                # Remove all orders
                browser.get('http://magicgardens.htb/admin/store/order/')
                try:
                        elem = browser.find_element(By.ID, 'action-toggle')
                        elem.click()

                        select = ui.Select(browser.find_element(By.NAME, 'action'))
                        select.select_by_value('delete_selected')

                        elem = browser.find_element(By.XPATH, '//button[text()="Go"]')
                        elem.submit()

                        wait.until(lambda browser: browser.find_element(By.XPATH, '//input[@type="submit"]'))

                        elem = browser.find_element(By.XPATH, '//input[@type="submit"]')
                        elem.click()
                        print("Deleted orders")
                except:
                        pass
                time.sleep(60)
        except:
                time.sleep(60)
