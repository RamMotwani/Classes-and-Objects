#include<iostream>
using namespace std;
class circle
{
    int radius;
public:
    void setvalue(int x)
    {
        radius=x;
    }
    void showcirclearea()
    {
        cout<<"Area of circle is "<<3.14*radius*radius<<endl;
    }
};
int main()
{
    circle area;
    area.setvalue(5);
    area.showcirclearea();
    return 0;
}
