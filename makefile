audioprocessor: main.o processor.o ReadWav.o Wav.o Normalizer.a Noisegate.a Echo.a
	g++ -std=c++11 -Wall -o main.cpp processor.o main.o ReadWav.o Normalizer.a Noisegate.a Echo.a audioprocessor

main.o: main.cpp
	g++ -std=c++11 -Wall -c main.cpp

processor.o: Processor.cpp Processor.h
	g++ -c -std=c++11 Processor.cpp

ReadWav.o: ReadWav.cpp ReadWav.h Wav.h
	g++ -std=c++11 -Wall -c ReadWav.cpp

Wav.o: Wav.cpp Wav.h
	g++ -std=c++11 -Wall -c Wav.cpp

Normalizer.o: normalizer.cpp normalizer.h
	g++ -std=c++11 -Wall -c normalizer.cpp

Normalizer.a: Normalizer.o
	ar suvr Normalizer.a Normalizer.o

Noisegate.o: noisegate.cpp noisegate.h
	g++ -std=c++11 -Wall -c noisegate.cpp

Noisegate.a: Noisegate.o
	ar suvr Noisegate.a Noisgate.o

Echo.o: Echo.cpp Echo.h
	g++ -std=c++11 -Wall -c Echo.cpp

Echo.a: Echo.o
	ar suvr Echo.a Echo.o

clean:
	rm *.o audioprocessor
