#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream file1("file_1_7.txt");
    ofstream file2("file_2_7.txt");
    string line, old_word, new_word;

    cout << "Enter old word: ";
    getline(cin, old_word);
    cout << "Enter new word: ";
    getline(cin, new_word);

    while (getline(file1, line))
    {
        size_t pos = 0;
        while ((pos = line.find(old_word, pos)) != std::string::npos)
        {
            line.replace(pos, old_word.length(), new_word);
            pos += new_word.length();
        }
        file2 << line << '\n';
    }

    file1.close();
    file2.close();


    return 0;
}
