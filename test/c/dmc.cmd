@echo off
setlocal

set opts=-Ae -Ar

if "%1"=="" (
    for /f "tokens=*" %%l in ('dmc') do (
        echo %%l | findstr /i "usage" >nul && goto :endloop
        echo %%l
    )
    :endloop
    echo.
    echo %opts%
    exit /b
)

set out=%2
if "%out%"=="" set out=%~n1.exe
for %%f in (%out%) do (
    set obj=%%~dpnf.obj
    set outdir=%%~dpf
)

for /f %%p in ('where dmc') do set dmcpath=%%~dpp

dmc %1 %opts% -c -I%dmcpath%..\stlport\stlport -I"%~dp0..\..\include" -o"%obj%"
if errorlevel 1 exit /b 1

pushd %outdir%
dmc "%obj%" -o"%out%" >nul
popd
