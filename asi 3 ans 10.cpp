#include<iostream>
using namespace std;
class Area
{
    int lenght;
    int width;
    int radius;
    int square;
public:
    void setrectangle(int x,int y)
    {
        lenght=x;
        width=y;
    }
    void setcircle(int x)
    {
        radius=x;
    }
    void setsqare(int x)
    {
        square=x;
    }
    void showrect()
    {
        cout<<"Area of rectangle is "<<lenght*width<<endl;
    }
    void showcircle()
    {
        cout<<"Area of circle is "<<3.14*radius*radius<<endl;
    }
    void showsquare()
    {
        cout<<"Area of square is "<<square*square<<endl;
    }
};
int main()
{
    Area rectangle,circle,Square;
    rectangle.setrectangle(5,6);
    rectangle.showrect();
    circle.setcircle(7);
    circle.showcircle();
    Square.setsqare(4);
    Square.showsquare();
    return 0;


}

