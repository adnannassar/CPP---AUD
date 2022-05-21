main: main.cpp file.h file.o calculator.h calculator.o
	c++ -o main main.cpp file.o calculator.o -std=c++11

file.o: file.cpp
	c++ -c file.cpp -std=c++11

calculator.o: calculator.cpp
	c++ -c calculator.cpp -std=c++11
clean:
	rm *.o main