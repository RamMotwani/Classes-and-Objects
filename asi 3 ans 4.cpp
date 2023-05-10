#include<iostream>
using namespace std;
class largeno
{
    int n1,n2,n3;
    int large;
public:
    void setno(int x,int y,int z)
    {
        n1=x;
        n2=y;
        n3=z;

        if(n1>n2)
        {
            large=n1;
        }
        else if(n2>n3)
        {
            large=n2;
        }
        else
        {
            large=n3;
        }
    }
    void showlargeno()
    {
        cout<<"largest no. is "<<large<<endl;
    }
};
int main()
{
    largeno no;
    no.setno(5,6,3);
    no.showlargeno();
    return 0;
}
