#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int num;

    fstream file1("S:/divide.txt", ios::in);
    fstream file2("S:/divideby3.txt", ios::out);
    fstream file3("S:/notdivideby3.txt", ios::out);

    while (file1)
    {
        file1 >> num;

        if (num % 3 == 0)
        {
            file2 << num << endl;
        }
        else
        {
            file3 << num << endl;
        }
    }
    file3.close();
    file2.close();
    file1.close();

    return 0;
}