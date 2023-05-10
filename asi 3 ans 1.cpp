#include<iostream>
using namespace std;
class complex
{
    int real;
    int imaginary;
public:
    void setvalue(int x,int y)
    {
        real=x;
        imaginary=y;
    }
    void printcomplex()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
};
int main()
{
    complex c1;
    c1.setvalue(5,6);
    c1.printcomplex();
    return 0;

}

