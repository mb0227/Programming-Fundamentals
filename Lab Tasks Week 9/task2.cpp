#include <iostream>
using namespace std;
bool check(string word, char letter);
int main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    int length = 0;
    while (word[length] != '\0')
    {
        length++;
    }
    for (int i = length; i >= 0; i--)
    {
        cout << word[i];
    }
    return 0;
}