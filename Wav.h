#ifndef WAV_H
#define WAV_H

#include <iostream>
#include <string>

using namespace std;

typedef struct WAV_HEADER
{
// RIFF chunk descriptor
    char RIFF[4];
    int ChunkSize;
    char WAVE[4];
// "fmt" sub-chunk
    char Format[4];
    int Chunk1Size;
    short AudioFormat;
    short NumberOfChannels;
    int SampleRate;
    int ByteRate;
    short SampleAlignment;
    short BitsPerSample;
// "data" sub-chunk
    char SubChunk2ID[4];
    int SubChunk2Size;

}wav_hdr;

#endif
