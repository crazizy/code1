#include<iostream>
using namespace std;

int fact(int p) // finds factorial
{
    int res=1;

    for(int i=p;i>1;i--)
    {
        res*=i; // multiply each number
    }

    return res;
}

int Binocoef(int n,int r) // finds nCr
{
    int coef;

    coef=fact(n)/(fact(r)*fact(n-r));

    return coef;
}

void printpascal(int n)
{
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<=row;col++)
        {
            cout<<Binocoef(row,col)<<"\t"; // print each value
        }

        cout<<endl; // next row
    }
}

int main()
{
    int m;

    cout<<"Enter no of rows\n";
    cin>>m;

    printpascal(m); // print Pascal triangle

    return 0;
}
