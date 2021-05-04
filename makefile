audioprocessor: main.cpp processor.o main.o ReadWav.o Normalizer.o Noisegate.o Echo.o
	g++ -std=c++11 main.cpp processor.o main.o ReadWav.o -o audioprocessor

main.o: main.cpp ReadWav.h
	g++ -std=c++11 -Wall -c main.cpp

processor.o: Processor.cpp Processor.h
	g++ -c -std=c++11 Processor.cpp

ReadWav.o: ReadWav.cpp ReadWav.h
	g++ -std=c++11 -Wall -c ReadWav.cpp

Normalizer.o: normalizer.cpp normalizer.h
	g++ -std=c++11 -Wall -c normalizer.cpp

Noisegate.o: noisegate.cpp noisegate.h
	g++ -std=c++11 -Wall -c noisegate.cpp

Echo.o:
	g++ -std=c++11 -Wall -c Echo.cpp

clean:
	rm *.o audioprocessor
