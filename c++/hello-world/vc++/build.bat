call "C:\Program Files (x86)\Microsoft Visual C++ Build Tools\vcbuildtools.bat"
cd /d %~dp0
set compilerflags=/Od /Zi /EHsc
cl %compilerflags% test.cpp /link %linkerflags%
test