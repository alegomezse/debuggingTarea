array_bounds.o:array_bounds.cpp
	g++ array_bounds.cpp -g -Wall -fsanitize=address -fsanitize=undefined 
	