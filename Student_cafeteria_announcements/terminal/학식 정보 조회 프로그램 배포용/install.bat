@echo off
chcp 65001 > nul
setlocal

echo ===================================================
echo        학식 메뉴 봇 (menu.exe) 자동 설치 프로그램
echo ===================================================

:: 사용자 디렉토리 하위에 MenuBot 폴더 생성
set "INSTALL_DIR=%USERPROFILE%\MenuBot"
if not exist "%INSTALL_DIR%" (
    mkdir "%INSTALL_DIR%"
)

:: 현재 경로의 menu.exe를 INSTALL_DIR로 복사
if not exist "%~dp0menu.exe" (
    echo [오류] 설치 파일과 같은 위치에 'menu.exe' 파일이 없습니다.
    echo 반드시 관리자가 배포한 'menu.exe'와 'install.bat'을 같은 폴더에 압축 풀고 실행해주세요.
    echo (안내: pyinstaller로 생성된 menu_bot.exe를 menu.exe로 이름을 변경해야 합니다.)
    echo.
    pause
    exit /b 1
)

copy /y "%~dp0menu.exe" "%INSTALL_DIR%\menu.exe" > nul

:: 환경 변수 PATH에 INSTALL_DIR 추가 (이미 있는지 확인 후 추가)
echo %PATH% | find /i "%INSTALL_DIR%" > nul
if errorlevel 1 (
    echo.
    echo 시스템 환경 변수 PATH에 [%INSTALL_DIR%] 경로를 추가합니다...
    
    :: 기존 사용자 환경변수 Path 읽어오기
    for /f "tokens=2*" %%A in ('reg query "HKCU\Environment" /v Path 2^>nul') do set "USER_PATH=%%B"
    
    if defined USER_PATH (
        setx PATH "%INSTALL_DIR%;%USER_PATH%" > nul
    ) else (
        setx PATH "%INSTALL_DIR%" > nul
    )
    echo 환경 변수 등록이 완료되었습니다.
) else (
    echo.
    echo 이미 시스템에 올바른 환경 변수가 등록되어 있습니다.
)

echo.
echo ===================================================
echo 설치가 성공적으로 완료되었습니다.
echo 이제 열려있는 모든 터미널 (cmd) 창을 닫고, "새로운 cmd 창"을 열어주세요.
echo 그 후 아무 위치에서나 'menu' 라고 입력하시면 학식 조회가 실행됩니다.
echo ===================================================
echo.
pause
