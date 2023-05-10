#include<iostream>
using namespace std;
class rectangle
{
    int length;
    int width;
public:
    void setvalues(int x,int y)
    {
        length=x;
        width=y;
    }
    void getarea()
    {
        cout<<"Area of rectangle is "<<length*width<<endl;
    }
};
int main()
{
    int l,w;
    rectangle area;
    cout<<"To find the area of rectangle enter length and width"<<endl;
    cin>>l>>w;
    area.setvalues(l,w);
    area.getarea();
    return 0;
}
