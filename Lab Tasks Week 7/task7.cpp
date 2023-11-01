#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string calculatePercents(int count);
int main()
{
    int x = 0, count, num;
    cout << "Enter numbers count: ";
    cin >> count;
    string result = calculatePercents(count);
    cout << fixed << setprecision(4) << result;
    return 0;
}

string calculatePercents(int count)
{
    double num, p1Count = 0, p2Count = 0, p3Count = 0, p4Count = 0, p5Count = 0, p1Percent = 0.0, p2Percent = 0.0, p3Percent = 0.0, p4Percent = 0.0, p5Percent = 0.0;
    int percentage;
    for (int i = 1; i <= count; i++)
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num > 0 && num <= 199)
        {
            p1Count = p1Count + 1;
        }
        if (num > 199 && num <= 399)
        {
            p2Count = p2Count + 1;
        }
        if (num > 399 && num <= 599)
        {
            p3Count = p3Count + 1;
        }
        if (num > 599 && num <= 799)
        {
            p4Count = p4Count + 1;
        }
        if (num > 799 && num <= 1000)
        {
            p5Count = p5Count + 1;
        }
    }
    p1Percent = (p1Count / count) * 100;
    p2Percent = (p2Count / count) * 100;
    p3Percent = (p3Count / count) * 100;
    p4Percent = (p4Count / count) * 100;
    p5Percent = (p5Count / count) * 100;
    return to_string(p1Percent) + "\n" + to_string(p2Percent) + "\n" + to_string(p3Percent) + "\n" + to_string(p4Percent) + "\n" + to_string(p5Percent) + "\n";
}
