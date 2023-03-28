#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    ifstream file_1("file_1.txt");
    ofstream file_2("file_2.txt");

    string line;
    char vowel[6] = { 'a', 'e', 'i', 'o', 'u', 'y' };
    char not_vowel[20] = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z' };
    char numbers[10] = { '1','2','3','4','5','6','7','8','9','0' };
    int counter_string = 0;
    int counter_symbols = 0;
    int counter_vowel = 0;
    int counter_not_vowel = 0;
    int counter_numbers = 0;

    cout << "START" << endl;

    if (file_1.is_open())
    {
        while (getline(file_1, line))
        {

            counter_string++;
            counter_symbols += line.length();
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < line.length(); j++)
                {
                    if (tolower(line[j]) == vowel[i])
                    {
                        counter_vowel++;
                    }
                }
            }
            for (int i = 0; i < 20; i++)
            {
                for (int j = 0; j < line.length(); j++)
                {
                    if (tolower(line[j]) == not_vowel[i])
                    {
                        counter_not_vowel++;
                    }
                }
            }
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < line.length(); j++)
                {
                    if (line[j] == numbers[i])
                    {
                        counter_numbers++;
                    }
                }
            }
        }
    }
    cout << "Rows: " << counter_string << "\nSymbols: " << counter_symbols << "\nVowels: " << counter_vowel << "\nNot vowels: " << counter_not_vowel << "\nNumbers: " << counter_numbers;
    file_2 << "Rows: " << counter_string << "\nSymbols: " << counter_symbols << "\nVowels: " << counter_vowel << "\nNot vowels: " << counter_not_vowel << "\nNumbers: " << counter_numbers;

    file_1.close();
    file_2.close();

    return 0;
}