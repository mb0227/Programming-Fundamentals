#include <iostream>
using namespace std;
bool check(string word, char letter);
int main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        cout << word[i] << " found at position " << i  << endl;
    }
    return 0;
}
