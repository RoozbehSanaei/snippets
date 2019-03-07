call "C:\Program Files (x86)\Microsoft Visual C++ Build Tools\vcbuildtools.bat"
cd %1
set compilerflags=/Od /Zi /EHsc
cl %compilerflags% %2 /link %linkerflags%
echo thats it.

