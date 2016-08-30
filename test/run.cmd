@echo off

if "%1"=="" (
    echo Build command not specified
    exit /b 1
)

setlocal
setlocal EnableDelayedExpansion

set srcdir=%~dp0suite
set outdir=%~dp0$

if not exist %outdir% mkdir %outdir%

pushd %srcdir%

del /s *.build *.run *.txt >nul

echo == (1/3) Collect Build Information ==
call "%~dp0c\%1.cmd" >build_info.txt ^
  && type build_info.txt ^
  || goto end
echo.

echo == (2/3) Build Feature Test Report ==
call "%~dp0c\%1.cmd" "%~dp0source\report.cpp" "%outdir%\report.exe" ^
  && "%outdir%\report.exe" >report.txt ^
  || goto end
echo.

echo == (3/3) Run Tests ==
for /f %%f in ('dir /b /o /s *.cpp') do (
    set relative=%%~dpnf
    set tcname=!relative:%srcdir%\=!
    set tcname=!tcname:\=/!

    echo !tcname!

    cd %%~dpf
    call "%~dp0c\%1.cmd" %%~nxf "%outdir%\%%~nf.exe" >%%~nf.build 2>&1 ^
      &&  "%outdir%\%%~nf.exe" >%%~nf.run

    if errorlevel 1 (
        echo 0 !tcname!>>"%srcdir%\results.txt"
    ) else (
        echo 1 !tcname!>>"%srcdir%\results.txt"
    )
)
echo.

:end
popd
