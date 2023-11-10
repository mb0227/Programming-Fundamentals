#include <iostream>
#include <cmath>
using namespace std;
bool has7(string x, int size)
{
    bool isTrue = false;
    int length = x.length();
    for (int i = length; i == x.length(); i++)
    {
        char hasSeven = x[i - 1];
        if (hasSeven == '7')
            return true;
    }
    return false;
}

int main()
{
    string words;
    int size;
    cout << "Enter the number of chords: ";
    cin >> size;
    string arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    string jazzified[size];
    for (int i = 0; i < size; i++)
    {
        string x = arr[i];
        if (has7(x, size))
        {
            jazzified[i] = arr[i];
        }
        else
        {
            jazzified[i] = arr[i] + "7";
        }
    }
    cout << "[";
    for (int i = 0; i < size - 1; i++)
    {
        cout << jazzified[i] << ", ";
    }
    cout << jazzified[size - 1] << "]";
}