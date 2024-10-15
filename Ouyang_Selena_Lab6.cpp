//Selena Ouyang
//Lab 6
//10-15-24

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
 
  ifstream inFile; //input file stream variable
  ofstream outFile; //output file stream variable
  
  int numOne; //variable for number one 
  int numTwo; //variable for number two
  char character; //sets char for character
  string sentence; //string for sentence

  //open files
  inFile.open("inData.txt"); 
  outFile.open("outData.txt");
  
  inFile >> numOne >> numTwo >> character >> sentence; //sets variable input/read order
  outFile << numOne + numTwo << endl << character + 1 << endl << sentence; //sets output/print order

  //close files
  inFile.close(); 
  outFile.close();

  return 0;
}

/*
inData: 
17 20 
T
Chicken!

outData:
37
85
Chicken!


inData: 
12 12
S
Nuggets!

outData:
24
84
Nuggets!

inData:
23 57
R
Howdy!

outData:
80
83
Howdy!
*/
