/** @file */
//#include "Wav.h"
//#include "Processor.h"
//#include "echo.h"
//#include "noisegate.h"
#include <iostream>

using namespace std;
int getMenuChoice();

int main (int argc, char* argv[])
{
    const char* filePath;
    string input;

    string newInputName;

    //string* wavFile;

    if (argc <= 1)
    {
        cout << "Input wave file name: ";
        cin >> input;
        cin.get();
        filePath = input.c_str();
    }

    else
    {
        filePath = argv[1];
        cout << "Pulled wave file name: " << filePath << endl;
    }

    FILE* wavFile = fopen(filePath, "r");

    if (wavFile == NULL)
    {
        cout << "Wav File name " << filePath << " does not exist: " << endl;
        return 1;
    }

    //wavFile = wavfile;

    Wav wav;
    wav.readFile(filePath);

  int userChoice;
    do {

        userChoice = getMenuChoice();

        switch(userChoice){
            case 0:
                return 0;
            case 1:
        Processor *processor1 = new Noisegate(.20);
          processor2->processBuffer(wav.getBuffer(),wav.getBufferSize());
          wav.writeFile("noise.wav");
      //call noisegate
                break;
            case 2:
        Processor *processor = new Echo(10);
          processor->processBuffer(wav.getBuffer(), wav.getBufferSize());
                break;
            case 3:
        Processor *processor3 = new Normalizer();
          processor3->processBuffer(wav.getBuffer(),wav.getBufferSize());
                break;
            case 4:
        Reader Reader (wavFile);
          cout << endl << "what would you like to name the new file, add .wav: ";
          cin >> newInputName;
        wav.writeFile(newInputName);

      //export file
      //check name
                break;
            default:
                cout << "Please enter a valid option!\n";
    }

    } while (userChoice != 0);

    return 0;
}

int getMenuChoice(){

    int userChoice;
  cout<<"How would you like to modify the data?\n1. Noisegate\n2. Echo\n3. Normalizer\n4. Export and Save\n0. Quit";

  cin>> userChoice;

    return(userChoice);
}
