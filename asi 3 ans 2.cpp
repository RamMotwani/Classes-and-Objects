#include<iostream>
using namespace std;
class Time
{
    int hour;
    int minute;
    int second;
public:
    void settime(int x,int y,int z)
    {
        hour=x;
        minute=y;
        second=z;
    }
    void showtime()
    {
        cout<<"Time is "<<hour<<"hr "<<minute<<"min "<<second<<"sec"<<endl;
    }
};

int main()
{
    Time clock;
    clock.settime(3,45,20);
    clock.showtime();
    return 0;
}
