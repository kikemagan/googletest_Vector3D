# googletest_Vector3D

Author: Enrique Magan

This is an example of using googleTests with a class named Vector3D
For testing just follow the following steps:
1. Open command window
2. execute:
	> cmake CMakeLists.txt
	> make
	> ./runTests

Maybe you should take this previous steps
 1. Installing libgtest of Google with this command
	> sudo apt-get install libgtest-dev
 2. Copy libgtest.a and libgtest_main.a to your /usr/lib folder with this command
	> sudo cp *.a /usr/lib 