#include<iostream>
using namespace std;
class RationalNumber
{
private:
    int denominator;
    int numerator;
public:
    void Assign(int num,int denom)
    {
        if(num==0)
        {
            cout << "Invalid Numerator"<<endl;
            return;
        }
        numerator=num;
        denominator=denom;
    }
    double convert()
    {
        return (double)numerator/(double)denominator;
    }
    void invert()
    {
        int temp=denominator;
        denominator=numerator;
        numerator=temp;
    }
    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }
};
int main()
{
    RationalNumber a;
    a.Assign(3,2);
    a.print();
    cout << a.convert() << endl;
    a.invert();
    a.print();


}
