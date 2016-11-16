/**
    CSCI 342 - Project 3: Pricess
    main.cpp
    
    @contributors Matthew Kluzak, Victor Ogundipe, Levi Barker
    @version 1.0 11/10/16
*/

#include <cstdio>
using namespace std;

const int maxString = 1024; // read buffer size

int main( int argc, char ** argv){
    const char * fileName = "input.txt"; // The input file string
  
    char buffer[maxString];
    FILE * fileForReading = fopen(fileName, "r"); // Open file (fileName) for reading ("r")
    
    while(fgets(buffer, maxString, fileForReading)){
        fputs(buffer, stdout); //TODO: Change this to input into structures
    }
    
    fclose(fileForReading); // Close file
  return 0;
}
