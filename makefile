audioprocessor: main.cpp processor.o main.o ReadWav.o
	g++ -std=c++11 main.cpp processor.o main.o ReadWav.o -o audioprocessor

main.o: main.cpp ReadWav.h
	g++ -std=c++11 -Wall -c main.cpp

processor.o: Processor.cpp Processor.h
	g++ -c -std=c++11 Processor.cpp

ReadWav.o: ReadWav.cpp ReadWav.h
	g++ -std=c++11 -Wall -c ReadWav.cpp

clean:
	rm *.o audioprocessor
