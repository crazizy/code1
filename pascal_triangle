#include<iostream>
using namespace std;
int fact(int p)// factorial function
{
    int res=1;
    for(int i=p;i>1;i--) //1*5,5*4,20*3,60*2,120
    {
        res*=i;//res=res*i
    }
        return res;
}
int Binocoef(int n,int r)// nCr function
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
            cout<<Binocoef(row,col)<<"\t";
           
        }
        cout<<endl;
    }
}
int main()
{
    int m;
    cout<<"Enter no of rows\n";
    cin>>m;
    printpascal(m);
    return 0;
}
