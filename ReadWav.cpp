#include <iostream>
#include <fstream>
#include <string>

#include "ReadWav.h"

using namespace std;

ReadWav::ReadWav ()
{
	cout << "hello" << endl;

	FILE *fp = NULL;
	fp = fopen("test.wav", "r");

	fread(RIFF, sizeof(char), 4, fp);
	cout << RIFF << endl;
}
