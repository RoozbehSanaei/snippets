del hello.pyd

PATH = C:\Users\ROOZBEH\Downloads\mingw32\bin;C:\Python27;D:\Libraries\boost_1_55_0\stage\lib

SET BOOST_DIR=D:\Libraries\boost_1_55_0\
SET PYTHON_INC=C:\Python27\include\
SET MINGW_INC=C:\Users\ROOZBEH\Downloads\mingw32\include 
SET FILE_NAME=hello.cpp

g++ -shared -I%BOOST_DIR% -I%PYTHON_INC%  %FILE_NAME% D:\Libraries\boost_1_55_0\stage\lib\libboost_python-mgw51-1_55.dll C:\Python27\libs\libpython27.a -o hello.pyd   
python test_hello.py
