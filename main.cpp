#include <iostream>

using namespace std;

struct Point
{
    int x,y;
    Point(){}
    Point(int a, int b) { x=a,y=b; }

    //void prt()
    //{
    //    cout << "x=" << x << "y=" << y << endl;
    //}
};


struct Rectangle
{
    int left,top, right,bottom;

    Rectangle()
    {
    }
    Rectangle(int a, int b, int c, int d)  // 생성자
    {
        left=a,top=b, right=c,bottom=d;
    }

    void prt()
    {
        cout << "x=" << left << "y=" << top << endl;
    }

    int Width()
    {
        return right-left;
    }

    int Height()
    {
        return bottom-top;
    }

    Point BottomRight()
    {
        return Point(right,bottom);
    }

    Point CenterPoint()
    {
        return Point((left + right)/2, (top + bottom)/2);
    }

    void CopyRect(Rectangle r)
    {
        left = r.left,top=r.top, right=r.right,bottom=r.bottom;
    }

    Point DeflateRect()
    {

    }

};


struct KKK
{
    KKK()
    {
        Rectangle a(10,10,30,60), b=Rectangle(20,30,50,100),c;

        cout << a.Width() * a.Height();


    }
};

KKK a;
