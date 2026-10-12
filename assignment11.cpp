//11.Write a C++ program to implement class and function templates.
#include<iostream>
using namespace std;
template< class T> // class is typename T is placeholder
T add(T m,T n)
{
    return m+n;
   
}
int sub(int m,int n)
{
    return m-n;
}
int main()
{
    cout<<"\n the add is \t";
    cout<< add<double>(5.3,6.3);
     cout<<"\n"<< add<char>('A','B');
    cout<<"\n the sub is \t";
    cout<<sub(5.2,4.1);
    return 0;
}
