@echo off
setlocal

set opts=/EHsc /GR /std:c++latest

if "%1"=="" (
    rem print version info
    cl 2>&1 >nul

    rem print options
    echo %opts%

    exit /b
)

cl %1 %opts% /nologo /I"%~dp0..\..\include" /Fo"%outdir%\\" /Fe"%outdir%\\"
