#include<iostream>
using namespace std;

int main()
{
    int sumeven = 0, sumodd = 0, i;

    // Check numbers from 1 to 50
    for(i = 1; i <= 50; i++)
    {
        if(i % 2 == 0)
            sumeven = sumeven + i; // Add even numbers
        else
            sumodd = sumodd + i;   // Add odd numbers
    }

    cout << "Sum of first 50 even number is" << sumeven << endl;
    cout << "Sum of first 50 odd number is " << sumodd << endl;

    return 0;
}
