#include<iostream>
using namespace std;
class gratest
{
    int large;
public:
    void findgratest(int x,int y,int z)
    {
        if(x>y)
        {
            large=x;
        }
        else if(y>z)
        {
            large=y;
        }
        else
        {
            large=z;
        }

    }
    void showgratest()
    {
        cout<<"Greatest no is "<<large<<endl;
    }
};
int main()
{
    gratest number;
    number.findgratest(5,6,4);
    number.showgratest();
    return 0;
}
