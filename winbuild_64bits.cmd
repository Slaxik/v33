@echo off

mkdir build
del /s /q build
cd build
"C:\Program Files\CMake\bin\cmake.exe" -G  "Visual Studio 14 2015 Win64"  ..


"C:\Program Files (x86)\MSBuild\14.0\Bin\MSBuild.exe" MarketCash.sln /p:Configuration=Release


