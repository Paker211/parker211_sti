#include <iostream>
#include <fstream>
using namespace std;

int main(){
  //Create and open .txt
  ofstream myFile("test.txt");

  //Write file
  myFile << "Files can be tricky, but it is fun enough! ";

  //Close file
  myFile.close();
}
