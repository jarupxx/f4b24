@echo off
if not "%MSVCDir%"=="" goto skipsetup

if exist "C:\Program Files\Microsoft Visual Studio\VC98\Bin\VCVARS32.BAT" CALL "C:\Program Files\Microsoft Visual Studio\VC98\Bin\VCVARS32.BAT"

:skipsetup

if "%1"=="" goto buildall

if not exist %1.rc cl /Ox /Os %1.cpp %2 %3 %4 %5 %6 %7 %8 %9
if exist %1.rc rc %1.rc
if exist %1.res cl /Ox /Os %1.cpp %1.res %2 %3 %4 %5 %6 %7 %8 %9
if exist %1.exp del %1.exp
if exist %1.lib del %1.lib
if exist %1.obj del %1.obj
if exist %1.res del %1.res
if exist %1.exe move %1.exe ..\..\..\..\bin\%1.exe

goto exitcmd

:buildall

call %0 fconfig /MD

:exitcmd
