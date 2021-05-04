#include <iostream>
#include <fstream>
#include <string>

#include "ReadWav.h"
#include "Wav.h"

using namespace std;

Reader::Reader ()
{
    testing = "";
}

Reader::Reader (FILE* newtesting)
{
    ReadWav (newtesting);
}

void Reader::ReadWav (FILE* wavFile)
{
wav_hdr wavHeader;

int headerSize = sizeof(wav_hdr);
    int filelength = 0;


// Read the header
    size_t bytesRead = fread(&wavHeader, 1, headerSize, wavFile);
    cout << endl << "Header Size is " << bytesRead << " bytes." << endl << endl;

    if (bytesRead > 0)
    {
// Reads the wav file

        short bytesPerSample = wavHeader.BitsPerSample / 8;

        long numberOfSamples = wavHeader.ChunkSize / bytesPerSample;

        static const short BUFFER_SIZE = 4096;

        int8_t* buffer = new int8_t [BUFFER_SIZE];

/*while ((bytesRead = fread(buffer, sizeof buffer[0], BUFFER_SIZE / (sizeof buffer[0]), wavFile)) > 0)
{
cout << "Read " << bytesRead << "bytes." << endl;
}*/

        delete [] buffer;
        buffer = nullptr;
        filelength = getFileSize(wavFile);

// Display data information

        cout << "file is: " << filelength << " Bytes." <<endl;

        cout << "RIFF header: " << wavHeader.RIFF[0] << wavHeader.RIFF[1] << wavHeader.RIFF[2] << wavHeader.RIFF[3] << endl;

        cout << "Data Size: " << wavHeader.ChunkSize << " Bytes" << endl;

        cout << "WAVE header: " << wavHeader.WAVE[0] << wavHeader.WAVE[1] << wavHeader.WAVE[2] << wavHeader.WAVE[3] << endl << endl;

        cout << "Format: " << wavHeader.Format[0] << wavHeader.Format[1] << wavHeader.Format[2] << wavHeader.Format[3] << endl;

        cout << "Audio Format: " << wavHeader.AudioFormat << endl;

        cout << "number of channels: " << wavHeader.NumberOfChannels << endl;

        cout << "Sampling Rate: " << wavHeader.SampleRate << endl;

        cout << "Number of bytes per second: " << wavHeader.ByteRate << endl;

        cout << "Block Alignment: " << wavHeader.SampleAlignment << endl;

        cout << "Number of bits used: " << wavHeader.BitsPerSample << endl << endl;

        cout << "Data string: " << wavHeader.SubChunk2ID[0] << wavHeader.SubChunk2ID[1] << wavHeader.SubChunk2ID[2] << wavHeader.SubChunk2ID[3] << endl;

        cout << "Data length: " << wavHeader.SubChunk2Size << endl;
    }
}

int Reader::getFileSize (FILE* inFile)
{
    int fileSize = 0;
    fseek (inFile, 0, SEEK_END);

    fileSize = ftell(inFile);

    fseek(inFile, 0, SEEK_SET);
    return fileSize;
}

void Reader::writeFile(const std::string &outFileName) {
    std::ofstream outFile(outFileName, std::ios::out | std::ios::binary);
    outFile.write((char*)&waveHeader,sizeof(wav_header));
    outFile.write((char*)buffer, waveHeader.data_bytes);
    outFile.close();
}
//unsigned char *Reader::getBuffer(){
    //return buffer;
//}
