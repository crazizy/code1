#include<iostream>
using namespace std;

class complex
{
    double real, img;

public:

    void accept(int r, int i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        if(img >= 0)
            cout << real << "+" << img << "i";
        else
            cout << real << img << "i";
    }

    // Overload + for addition
    complex operator+(complex x)
    {
        complex sum;
        sum.real = real + x.real;
        sum.img = img + x.img;
        return sum;
    }

    // Overload - for subtraction
    complex operator-(complex x)
    {
        complex sub;
        sub.real = real - x.real;
        sub.img = img - x.img;
        return sub;
    }

    // Overload * for multiplication
    complex operator*(complex x)
    {
        complex multi;
        multi.real = (real * x.real) - (img * x.img);
        multi.img = (real * x.img) + (img * x.real);
        return multi;
    }

    // Overload / for division
    complex operator/(complex x)
    {
        complex divi;
        double d = (x.real * x.real) + (x.img * x.img);

        divi.real = ((real * x.real) + (img * x.img)) / d;
        divi.img = ((img * x.real) - (real * x.img)) / d;

        return divi;
    }
};

int main()
{
    complex c1, c2, c3;

    c1.accept(8, 3);
    cout << "First complex no: ";
    c1.display();

    c2.accept(4, 6);
    cout << "\nSecond complex no: ";
    c2.display();

    c3 = c1 + c2; // Calls overloaded +
    cout << "\nAddition: ";
    c3.display();

    c3 = c1 - c2; // Calls overloaded -
    cout << "\nSubtraction: ";
    c3.display();

    c3 = c1 * c2; // Calls overloaded *
    cout << "\nMultiplication: ";
    c3.display();

    c3 = c1 / c2; // Calls overloaded /
    cout << "\nDivision: ";
    c3.display();

    return 0;
}
