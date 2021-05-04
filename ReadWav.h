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

	void ReadWav (FILE*);
	int getFileSize(FILE* inFile);

    unsigned char *getBuffer();
    int getBufferSize() const;
};

#endif
