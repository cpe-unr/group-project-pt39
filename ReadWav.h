#ifndef READWAV_H
#define READWAV_H

#include <iostream>
#include <string>

using namespace std;

class Reader
{
	string testing;
    unsigned char* buffer = NULL;
public:

	Reader ();
	Reader (FILE*);

/**
* Takes in a FILE pointer of the audio data and displays the information
@param the audio wav data as a FILE Pointer
*/
	void ReadWav (FILE*);

/**
* Reads in a FILE pointer to get the size fo the wav file
@param FILE pointer to determine size of audio file
*/
	int getFileSize(FILE* inFile);

/**
* The function returns the buffer after being called
*/
    unsigned char *getBuffer();

/**
* The function calls in the WavHeader struct and pulls the bits per sample variable to determine buffer type
*/
    int getBufferSize() const;
};

#endif
