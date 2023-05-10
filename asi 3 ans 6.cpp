#include<iostream>
using namespace std;
class square
{
    int no;
    int countf=0;
public:
    void setno(int x)
    {
        x=x*x;
        no=x;
        countf++;
    }
    void getsquare()
    {
        cout<<"square of a no. is "<<no<<endl;
        countf++;
        cout<<"function called "<<countf<<" times"<<endl;

    }
};
int main()
{
    int x;
    cout<<"enter a no. to find its square"<<endl;
    cin>>x;
    square n1;
    n1.setno(x);
    n1.getsquare();
    return 0;
}

