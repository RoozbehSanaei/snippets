cd /d D:\Libraries\boost_1_55_0\tools\build\v2
PATH = C:\Users\ROOZBEH\Downloads\mingw32\bin
bootstrap gcc
b2 install --prefix=D:\Libraries\boost toolset=gcc
cd /d D:\Libraries\boost_1_55_0
PATH = C:\Users\ROOZBEH\Downloads\mingw32\bin;D:\Libraries\boost\bin;
rem b2 --with-python toolset=gcc
b2 toolset=gcc  --build-type=complete stage
