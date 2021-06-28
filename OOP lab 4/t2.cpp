#include<iostream>
using namespace std;
class flight
{
private:
    int number;
    string destination;
    float distance;
    float maxFuelCapacity;
    int CalFuel()
    {
        if(distance<=1000 && maxFuelCapacity>=500)
            return 1;
        else if(distance>1000 && distance<=2000 && maxFuelCapacity>=1100)
            return 1;
        else if(distance>2000 && maxFuelCapacity>=2200)
            return 1;
        else
            return 0;

    }
public:
    flight():number(0),destination(" "),distance(0),maxFuelCapacity(0)
    {
    }
    void FeedInfo(int num,string dest,float dist,float max)
    {
        number=num;
        destination=dest;
        distance=dist;
        maxFuelCapacity=max;
        if(CalFuel())
            cout << "Fuel Capacity is fit for this flight" << endl;
        else
            cout << "Not sufficient Fuel capacity for this flight" << endl;
    }
    void ShowInfo()
    {
        cout <<"Flight number : " << number << endl;
        cout <<"Destination : " << destination << endl;
        cout <<"Distance : " << distance << endl;
        cout <<"Max Fuel Capacity : " << maxFuelCapacity << endl;
    }
};
int main()
{
    flight f1;
    f1.FeedInfo(767,"phuket",1200,400);
    f1.ShowInfo();
    flight f2;
    f2.FeedInfo(787,"Delhi",1300,1100);
    f2.ShowInfo();
}
