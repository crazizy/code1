#include<iostream>
using namespace std;

// Read array elements
void read(int &n, int arr[])
{
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
}

// Display array
void display(int n, int arr[])
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// Swap two numbers
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Sort array in ascending order
void sort(int n, int arr[])
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]); // Swap if needed
        }
    }
}

int main()
{
    int n, arr[10];

    read(n, arr);

    cout << "\nOriginal array: ";
    display(n, arr);

    sort(n, arr);

    cout << "\nSorted array: ";
    display(n, arr);

    return 0;
}
