# CS 202 Semester Project Template
 a list of all group members the responsibilities taken on by each membera description of the design, including UML diagrams and a short section on any challenges encountered in the project
 
 Group Members and Responsiblities: 
 Edward Martinez-Anaya: 4, 8, 16 bit processing: ReadWav, Wav
 Aisling Viets: Echo, Processor, Metadata
 Claire Foy: Main, Normalizer, Noisegate

For the design of the program, we had the main function handle user interaction and display, first asking for the .wav file that is going to be modified. It checks if the file exists and if it opens, before extracting the relevant data from the file, and displaying it to the user. It uses ReadWav and Wav to read and analyze the data respecively, before storing it into the appropriate categories. It asks which processor the user wants to use on the audio file. Main calls on the necessary processor, all of which inherit from the processor class, and saves the edited .wav file as a separate file.

UML diagram can be viewed in repository: UML diagram.jfif

Figuring out the inheritance and implementation of templates was challenging. Metadata and dealing with the different bits of audio was also difficult.
Edward also couldn't access the repository due to a 404 error every time he did. He sent us (Aisling Viets and Claire Foy) his code over discord and we pasted it into the repository for him. We indluded in our commit messages if we were committing code that Edward wrote.
