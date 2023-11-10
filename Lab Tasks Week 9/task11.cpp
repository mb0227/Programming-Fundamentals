#include <iostream>
using namespace std;

int main()
{
    string sentence;
    char vowelLessWords;
    bool isVowel = false;
    cout << "Enter string': ";
    getline(cin, sentence);
    cout << "String with vowels removed: ";
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        int asciCode = sentence[i];
        if ((asciCode == 65) || (asciCode == 69) || (asciCode == 73) || (asciCode == 79) || (asciCode == 85) || (asciCode == 97) || (asciCode == 101) || (asciCode == 105) || (asciCode == 111) || (asciCode == 117))
            isVowel = true;
        else
        {
            vowelLessWords = asciCode;
            cout << vowelLessWords;
        }
    }
}