#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string file_name = "file1_5.txt";

    ifstream input_file(file_name);

    string line;
    int max_length = 0;

    while (getline(input_file, line))
    {
        int length = line.length();
        if (length > max_length)
        {
            max_length = length;
        }
    }

    input_file.close();

    cout << "Max length: " << max_length << endl;

    return 0;
}