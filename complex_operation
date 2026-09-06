#include<iostream>
using namespace std;
class complex
{
    double real,img;
   
   
   
    public:
    void accept(int r, int i)
    {
        real=r;
        img=i;
    }
   
   
   
   
    void display()
    {
        if(img>0)
        cout<<endl<<real<<"+"<<img<<"i";
        else
         cout<<endl<<real<<img<<"i";
       
    }
   
   
    complex add(complex x)
    {
        complex sum;
        sum.real=real+x.real;
        sum.img=img+x.img;
        return sum;
    }
   
   
    complex substract(complex x);
   
   
    complex multiply(complex x)
    {
        complex multi;
        multi.real=(real*x.real)-(img*x.img);
        multi.img=(real*x.img)+(img*x.real);
        return multi;
    }
   
   
   
     complex division(complex x)
    {
        complex divi;
        divi.real=((real*x.real)+(img*x.img))/((x.real*x.real)+(x.img*x.img));
        divi.img=((img*x.real)-(real*x.img))/((x.real*x.real)+(x.img*x.img));
        return divi;
    }
   
   
};
complex complex:: substract(complex x)
    {
        complex sub;
        sub.real=real-x.real;
        sub.img=img-x.img;
        return sub;
    }
   
int main()
{
    int a;
    complex c1,c2,c3;
    c1.accept(8,3);
    cout<<"First complex no";
    c1.display();
    c2.accept(4,6);
    cout<<"\nsecond complex no";
    c2.display();
    c3=c1.add(c2);
    cout<<"\naddition of first and second complex no";
    c3.display();
    c3=c1.substract(c2);
     cout<<"\nsubstraction of first and second complex no";
     c3.display();
     c3=c1.multiply(c2);
     cout<<"\nmultiplication of first and second complex no";
      c3.display();
      c3=c1.division(c2);
     cout<<"\ndivision of first and second complex no";
      c3.display();
    return 0;
   
}
