employee: main.cpp manager.o shopworker.o
	g++ -std=c++11 main.cpp manager.o shopworker.o -o employee
	
manager.o: manager.h manager.cpp
	g++ -std=c++11 -c manager.cpp
	
shopworker.o : shopworker.h shopworker.cpp
	g++ -std=c++11 -c shopworker.cpp
	
clean:
	rm *.o employee
