#include<iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float width;
public:
    Rectangle(int len=1,int wid=1):length(len),width(wid)
    {

    }
    int getperimeter()
    {
        return 2*(length+width);
    }
    int getarea()
    {
        return length*width;
    }
    void setvalues(int len, int wid)
    {
        if(1<=len<20 && 1<=wid<20)
        length=len;
        width=wid;
    }
    int getlength()
    {
        return length;
    }
    int getwidth()
    {
        return width;
    }

};
int main()
{
    Rectangle r1(5,6),r2;
    cout << r1.getarea() << endl;
    cout << r1.getperimeter() << endl;
    cout << r2.getarea() << endl;
    cout << r2.getperimeter() << endl;
    Rectangle r3 (25,25);
}
