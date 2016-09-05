@echo off
setlocal

set opts=/EHsc /GR /std:c++latest

if "%1"=="" (
    cl 2>&1 >nul
    echo %opts%
    exit /b
)

set out=%2
if "%out%"=="" set out=%~n1.exe
for %%f in ("%out%") do set obj=%%~dpf%~n1.obj

cl %1 %opts% /nologo /I"%~dp0..\..\include" /Fo"%obj%" /Fe"%out%"
