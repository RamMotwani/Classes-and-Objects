#include<iostream>
using namespace std;
class reverseno
{
    int number;
public:
    void setno(int x)
    {
        int i=0;
        while(x!=0)
        {
           i=i*10+x%10;
           x=x/10;
        }
        number=i;

    }
   void showreverse()
   {
       cout<<number<<endl;
   }
};
int main()
{
    reverseno n1;
    n1.setno(256);
    n1.showreverse();
    return 0;
}

