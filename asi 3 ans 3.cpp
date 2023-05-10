#include<iostream>
using namespace std;
class Factorial
{
    int n;
public:
    void setfactorial(int x)
    {
        n=x;
       while(x!=1)
       {
           x--;
           n=n*x;
       }

    }
    void showfactorial()
    {
        cout<<"factorial is "<<n<<endl;
    }
};
int main()
{
    Factorial f;
    f.setfactorial(5);
    f.showfactorial();
    return 0;
}

