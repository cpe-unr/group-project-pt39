audioprocessor: main.cpp echo.o processor.o
	g++ -std=c++11 main.cpp echo.o processor.o -o audioprocessor

echo.o: Echo.cpp Echo.h
	g++ -c -std=c++11 Echo.cpp

processor.o: Processor.cpp Processor.h
	g++ -c -std=c++11 Processor.cpp

clean:
	rm *.o audioprocessor
