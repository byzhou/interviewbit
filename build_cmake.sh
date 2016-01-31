#!/bin/bash
if [ ! -d "build" ];then
	mkdir build
fi

cd build
cmake -G "Unix Makefiles" ..
cd -

if [ ! -a "build/.gitignore" ]; then
	touch build/.gitignore
	echo '*' > build/.gitignore
	echo '!.gitignore' >> build/.gitignore
fi

