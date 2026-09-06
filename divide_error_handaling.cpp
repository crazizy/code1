include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Devide any two number\n";
    cin>>a>>b;
   
   try
   {
    if(b==0)
    {
        throw b;
    }
    c=a/b;
    cout<<"\n div is "<<c;
   }
   catch(int x)
   {
    cout<<"Arithmatic error\n";
    cout<<"divide by "<<x;
   }
    cout<<"\nAfter division";
    return 0;
}
