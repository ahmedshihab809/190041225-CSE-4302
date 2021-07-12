#include<iostream>
using namespace std;
class counter
{
    private:
        int count;
        int incrementStep;
    public:
        counter():count(0),incrementStep(1)
        {

        }
        counter(int d,int i=1)
        {
            count=d;
            incrementStep=i;
        }
        void setincrementStep(int step_val=1)
        {
            incrementStep=step_val;
        }
        int getCount()
        {
            return count;
        }
        void increment()
        {
            count+=incrementStep;
        }
        void resetCount()
        {
            count=0;
        }
        counter operator ++()
        {
            return counter(count+incrementStep);
        }
        counter operator ++ (int )
        {
            counter temp;
            temp.count=count;
            count=count+incrementStep;
            return temp;
        }
        counter operator + (counter c)
        {
            int c1=count+c.count;
            int i=min(incrementStep,c.incrementStep);
            return counter(c1,i);
        }
        counter operator + (int var)
        {
            return counter(count+var,incrementStep);
        }
        counter operator +=(counter right)
        {
            count=count+right.count;
        }
        void display()
        {
            cout << count <<" " << incrementStep << endl;
        }
        friend counter operator +(int,counter);
};
counter operator + (int lop, counter rop)
{
    return counter(lop+rop.getCount(),rop.incrementStep);
}
int main()
{
    counter c1(10,5),c2,c3,c4;
    c1.display();
    c2=c1++;
    c2.display();
    c3=++c1;
    c3.display();
    c4=c2+c3;
    c4.display();
    c4=c4+5;
    c4.display();
    c4=5+c4;
    c4.display();
    c4+=5;
    c4.display();
    return 0;
}

