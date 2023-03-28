#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream file1("file1_4.txt");
    ofstream file2("file2_4.txt");

    string line;

    while (getline(file1, line))
    {
        if (!file1.eof())
        {
            file2 << line << endl;
        }
    }
    cout << "DONE";
    file1.close();
    file2.close();

    return 0;
}