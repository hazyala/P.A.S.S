@echo off
REM conda 'menu' 가상환경을 활성화하고 menu_bot.py를 실행합니다.
call conda activate menu 2>nul
if errorlevel 1 (
    echo [ERROR] 'menu' conda 가상환경을 활성화할 수 없습니다.
    echo 먼저 터미널 폴더에서 'conda env create -f environment.yml' 을 실행해주세요.
    exit /b 1
)

python "%~dp0menu_bot.py"
call conda deactivate
