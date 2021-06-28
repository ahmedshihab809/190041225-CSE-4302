#include<iostream>
using namespace std;
class Calculator
{
private:
    int current;
public:
    Calculator():current(0)
    {

    }
    Calculator(int value)
    {
        current=value;
    }
    int getValue()
    {
        return current;
    }
    void setValue(int value)
    {
        current=value;
    }
    void add(int value)
    {
        current+=value;
    }
    void subtract (int value)
    {
        current-=value;
    }
    void multiply(int value)
    {
        current=current*value;
    }
    void divideBy(int value)
    {
        if(value==0)
            cout << "Error : divide by 0 is undefined"<< endl;
        else
            current=current/value;
    }
    void clear()
    {
        current=0;
    }
    void display()
    {
        cout << "Calculator Display : " << getValue() << endl;
    }
    ~Calculator()
    {
        cout << "Calculator object is destroyed " << endl;
    }
};
int main()
{
    Calculator c1;
    c1.add(10);
    c1.display();
    c1.add(7);
    c1.display();
    c1.multiply(31);
    c1.display();
    c1.subtract(42);
    c1.display();
    c1.divideBy(7);
    c1.display();
    c1.divideBy(0);
    c1.display();
    c1.add(3);
    c1.display();
    c1.subtract(1);
    c1.display();
    c1.clear();
    c1.display();
}
