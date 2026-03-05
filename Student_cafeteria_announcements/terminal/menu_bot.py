import time
import datetime
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager
from bs4 import BeautifulSoup

def format_menu(raw_text):
    if not raw_text.strip():
        return "메뉴 정보 없음"
    
    sanitized_text = raw_text.replace('&amp;', '&').replace(' ,', ',').replace(', ', ',')
    items = sanitized_text.split(',')
    
    formatted_items = [f"\t\t- {item.strip()}" for item in items if item.strip()]
    return "\n".join(formatted_items)

def get_menu():
    day_names = ["월요일", "화요일", "수요일", "목요일", "금요일"]
    today = datetime.datetime.today()
    target_weekday = today.weekday()
    
    if target_weekday > 4:
        return "주말에는 학식을 운영하지 않습니다."
        
    day_name_eng = ["Mon", "Tue", "Wed", "Thur", "Fri"]
    eng_day = day_name_eng[target_weekday]
    date_str = today.strftime("%Y - %m - %d")
    header = f"\t          📜 오늘의 학식 \n\t       {date_str} - {eng_day}\n==================================================\n"
    
    options = webdriver.ChromeOptions()
    options.add_argument("--headless")
    options.add_argument("--no-sandbox")
    options.add_argument("--disable-dev-shm-usage")
    options.add_argument("--disable-gpu")
    
    service = Service(ChromeDriverManager().install())
    driver = webdriver.Chrome(service=service, options=options)
    
    URL = "https://www.kopo.ac.kr/jungsu/content.do?menu=247"
    
    try:
        driver.get(URL)
        time.sleep(1) # 대기 시간을 최소값으로 단축 (Selenium 병목 감소)
        html = driver.page_source
        soup = BeautifulSoup(html, "html.parser")
    finally:
        driver.quit()

    menu_table = soup.find("table", class_="tbl_table menu")
    if not menu_table:
        return "식단표를 찾을 수 없습니다."

    rows = menu_table.find("tbody").find_all("tr")
    if len(rows) <= target_weekday:
        return "해당 요일의 식단 정보가 없습니다."

    cells = rows[target_weekday].find_all("td")
    if len(cells) < 4:
        return "식단표의 형식이 변경되었습니다."
        
    lunch_menu = format_menu(cells[2].get_text(strip=True))
    dinner_menu = format_menu(cells[3].get_text(strip=True))
    
    return f"{header}\n\n\t============ 중식 ============\n\n{lunch_menu}\n\n\t============ 석식 ============\n\n{dinner_menu}\n"

def main():
    print("메뉴를 조회 중입니다...\n")
    try:
        menu_info = get_menu()
        print("==================================================")
        print(menu_info)
        print("==================================================")
    except Exception as e:
        print(f"정보를 가져오는 중 문제가 발생했습니다: {e}")

if __name__ == "__main__":
    main()
