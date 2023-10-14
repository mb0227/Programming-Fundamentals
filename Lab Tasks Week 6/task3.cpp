#include <iostream>
using namespace std;

float perimeter(char shape, float value)
{
    float formula;
    if (shape == 's')
    {
        formula=4*value;
        return formula;
    }
    if (shape == 'c')
    {
        formula=6.28*value;
         return formula;
    }
    if (shape == 't')
    {
        formula=3*value;
         return formula;
    }
    if (shape == 'h')
    {
        formula=6*value;
         return formula;
    }
}
main()
{
    float value;
    char shape;
    int result;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>shape;
    cout<<"Enter the value: ";
    cin>>value;
    cout<<"The perimeter is: "<<perimeter(shape, value);
}