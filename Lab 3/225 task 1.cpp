#include<iostream>
using namespace std;
class Counter
{
private:
    int increment_step;
    int Count=0;
public:
    void setIncrementStep(int step_val)
    {
        increment_step=step_val;
    }
    int getCount()
    {
        return Count;
    }
    void increment()
    {
        Count+=increment_step;
    }
    void resetCount()
    {
        Count=0;
    }
};
int main()
{
    Counter a;
    a.setIncrementStep(5);
    cout << a.getCount()<< endl;
    a.increment();
    cout << a.getCount()<< endl;
    a.resetCount();
    cout << a.getCount()<< endl;
    return 0;
}
