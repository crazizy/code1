#include <iostream>
using namespace std;

// Function overloading
// Same function name with different parameters

float add(float i, float j, float k)
{
    return (i + j + k); // Adds 3 numbers
}

int add(int a, int b)
{
    return (a + b); // Adds 2 integers
}

int add(float m, float n)
{
    return (m + n); // Adds 2 float values
}

int main()
{
    float a;
    int b, c;
    float x, y, z;

    cout << "Enter 3 number\n";
    cin >> x >> y >> z;

    a = add(x, y, z); // Calls 3-argument function
    b = add(x, y);    // Calls integer version
    c = add(y, z);    // Calls float version

    cout << "Function values are\n" << a << "\n" << b << "\n" << c;

    return 0;
}
