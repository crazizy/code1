#include<iostream>
using namespace std;

// Takes array input
void accept(int &a, int c[])
{
    cout << "\nEnter number of array elements";
    cin >> a;

    cout << "\nEnter array elements";
    for(int i = 0; i < a; i++)
    {
        cin >> c[i];
    }
}

// Displays the array
void display(int m, int arrl[])
{
    cout << "The array is";
    for(int i = 0; i < m; i++)
    {
        cout << arrl[i] << endl;
    }
}

// Sorts array using bubble sort
void sort(int m, int arr1[])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m-i-1; j++)
        {
            if(arr1[j] > arr1[j+1])
                swap(arr1[j], arr1[j+1]);
        }
    }
}

// Swaps two values
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n, arr[10];

    accept(n, arr);

    cout << "\nthe unsorted array is" << endl;
    display(n, arr);

    sort(n, arr);

    cout << "\nthe sorted array";
    display(n, arr);

    return 0;
}
