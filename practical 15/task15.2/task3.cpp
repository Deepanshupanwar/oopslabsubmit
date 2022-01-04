#include<fstream>
using namespace std;

int main()
{
    ofstream fout;  
    ifstream fin;
    fin.open("file.txt");
    fout.open ("file.txt",ios::app); 
    if(fin.is_open())
        fout<< "\n task3 to append a file\n"; 
    fin.close();
    fout.close(); 
    return 0;
}