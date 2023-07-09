build:
	cmake --build cmake-build-debug/ --target misc_c_scripts -j 6
init:
	cmake -DCMAKE_BUILD_TYPE=Debug -B ./cmake-build-debug
