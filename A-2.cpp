#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int linecount = 0;
    string line;

    fstream file;
    file.open("S:/line.txt", ios::in);

    while (getline(file, line))
    {

        ++linecount;
    }

    cout << "Number of lines in the Files are :" << linecount;

    return 0;
}