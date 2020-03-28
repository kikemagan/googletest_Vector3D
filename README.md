# googletest_Vector3D

Author: Enrique Magan

This is an example of using googleTests with a class named Vector3D
For testing just follow the following steps:


Maybe you should take this previous steps
 1. Installing libgtest of Google with this command
	> sudo apt-get install libgtest-dev
 2. Compile gtest library:
	
	> cd /usr/src/gtest
	
	> sudo cmake CMakeLists.txt
	
	> sudo make
 
 3. Copy libgtest.a and libgtest_main.a to your /usr/lib folder with this command
 
	> sudo cp *.a /usr/lib 
	
 4. Open command window in your program folder

 5. execute:
	> cmake CMakeLists.txt
	
	> make
	
	> ./runTests
