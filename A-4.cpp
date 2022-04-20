#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;

    fstream file;

    file.open("S:/Ascii.txt", ios::out);

    cout << "Enter a Charcter :" << endl;
    cin >> ch;

    int convert_ascii = int(ch);

    cout << "ASCII value is :" << convert_ascii << endl;

    file << convert_ascii;
    

    fstream fileb;
    fileb.open("S:/Binary.txt", ios::out | ios::binary);

    while (file)
    {
        file >> convert_ascii;
        fileb.write((char *)&convert_ascii, sizeof(convert_ascii));
    }

    file.close();
    fileb.close();

    return 0;
}
