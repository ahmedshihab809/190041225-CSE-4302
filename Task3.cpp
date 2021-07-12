#include<iostream>
#include<cmath>
using namespace std;
class Coordinate
{
private:
    float abs;
    float ord;
public:
    Coordinate():abs(0),ord(0)
    {

    }
    Coordinate(float a,float o)
    {
        abs=a;
        ord=o;
    }
    float getDistance(Coordinate c)
    {
        return sqrt((abs-c.abs)*(abs-c.abs)+(ord-c.ord)*(ord-c.ord));
    }
    float getDistance()
    {
        return sqrt((abs)*(abs)+(ord)*(ord));
    }
    void move_x(float val)
    {
        abs+=val;
    }
    void move_y(float val)
    {
        ord+=val;
    }
    void move(float val)
    {
        move_x(val);
        move_y(val);
    }
    bool operator > (Coordinate c)
    {
        float var1,var2;
        var1=getDistance();
        var2=c.getDistance();
        return (var1>var2);
    }
    bool operator < (Coordinate c)
    {
        float var1,var2;
        var1=getDistance();
        var2=c.getDistance();
        return (var1<var2);
    }
    bool operator >= (Coordinate c)
    {
        float var1,var2;
        var1=getDistance();
        var2=c.getDistance();
        return (var1>=var2);
    }
    bool operator <= (Coordinate c)
    {
        float var1,var2;
        var1=getDistance();
        var2=c.getDistance();
        return (var1<=var2);
    }
    bool operator == (Coordinate c)
    {
        float var1,var2;
        var1=getDistance();
        var2=c.getDistance();
        return (var1==var2);
    }
    bool operator != (Coordinate c)
    {
        float var1,var2;
        var1=getDistance();
        var2=c.getDistance();
        return (var1!=var2);
    }
    Coordinate operator ++ ()
    {
        return Coordinate(++abs,++ord);
    }
    Coordinate operator ++ (int )
    {
        return Coordinate(abs++,ord++);
    }
    Coordinate operator -- ()
    {
        return Coordinate(--abs,--ord);
    }
    Coordinate operator -- (int )
    {
        return Coordinate(abs--,ord--);
    }
    ~Coordinate()
    {
    }
    void display()
    {
        cout << abs << " " << ord << endl;
    }
};
int main()
{
    Coordinate c1(10,10),c2(-10,-10),c3(5,20),c4,c5;
    cout << c1.getDistance(c2) << endl;
    cout << c1.getDistance() << endl;
    c1.move_x(5);
    c1.display();
    c1.move_y(5);
    c1.display();
    c1.move(5);
    c1.display();
    c4=c1++;
    c4.display();
    c5=++c1;
    c5.display();
    bool t;
    t=c4>c5;
    cout << t << endl;
    t=c4<c5;
    cout << t << endl;
    t=c4>=c5;
    cout << t << endl;
    t=c4<=c5;
    cout << t << endl;
    t=c4==c5;
    cout << t << endl;
    t=c4!=c5;
    cout << t << endl;
}
