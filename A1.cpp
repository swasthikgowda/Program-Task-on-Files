#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream filestream;

    filestream.open("S:/filesample.txt", ios::out);

    filestream << "Welcome-To-Files..!" << endl;

    filestream.close();

    filestream.open("S:/filesample.txt", ios::in);

    while (filestream)
    {
        string str;

        filestream >> str;
        cout << str << endl;
    }

    filestream.close();

    return 0;
}