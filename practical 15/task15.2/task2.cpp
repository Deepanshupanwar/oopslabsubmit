#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream MyFile("file.txt");
  MyFile << "this is task2 to write in a file";
  MyFile.close();
}