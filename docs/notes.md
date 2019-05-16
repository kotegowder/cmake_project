## Environment setup ##

1. toochain installation : sudo apt-get install gcc
2. make installation     : sudo apt-get install make
3. cmake installation
	1. sudo apt purge --auto-remove cmake
	2. Go to official cmake webpage - click on Downlaod - Downaload cmake-3.14.0.tar.gz
	3. Extract cmake from downloaded directory
	4. Enter the folder - right click - open terminal
	5. ./bootstrap
	6. make -j4
	7. sudo make install
	8. Check for cmake version : cmake --version
