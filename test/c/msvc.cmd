@echo off
setlocal

set opts=/EHsc /GR

if "%1"=="" (
    cl 2>&1 >nul
    echo %opts%
    exit /b
)

cl %1 %opts% /nologo /I"%~dp0..\..\include" /Fo"%outdir%\\" /Fe"%outdir%\\"
