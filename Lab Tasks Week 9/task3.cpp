#include <iostream>
using namespace std;
int main()
{
    string word;
    getline(cin, word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        int asciCode = word[i];
        if ((asciCode == 122) || (asciCode == 90))
        {
            asciCode = asciCode - 25;
            char f = asciCode;
            cout << f;
        }
        else if (asciCode == 32)
        {
            char g = asciCode;
            cout << g;
        }
        else if ((asciCode != 122) || (asciCode != 90) || (asciCode != 32))
        {
            asciCode = asciCode + 1;
            char e = asciCode;
            cout << e;
        }
    }
    return 0;
}