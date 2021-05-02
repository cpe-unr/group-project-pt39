audioprocessor: main.cpp echo.o processor.o main.o ReadWav.o
	g++ -std=c++11 main.cpp echo.o processor.o main.o ReadWav.o -o audioprocessor

main.o: main.cpp ReadWav.h
	g++ -std=c++11 -Wall -c main.cpp

echo.o: Echo.cpp Echo.h
	g++ -c -std=c++11 Echo.cpp

processor.o: Processor.cpp Processor.h
	g++ -c -std=c++11 Processor.cpp

ReadWav.o: ReadWav.cpp ReadWav.h
	g++ -std=c++11 -Wall -c ReadWav.cpp

clean:
	rm *.o audioprocessor
	rm wavreader *.o
