#include<iostream>
using namespace std;
class seat
{
protected:
    string comfort;
    bool seat_warmer;
public:
    seat(string c="Comfy",bool s=0): comfort(c),seat_warmer(s)
    {

    }
    void set_comfort(string s)
    {
        comfort=s;
    }
    void set_seat_warmer(bool x)
    {
        seat_warmer=x;
    }
    string get_comfort()
    {
        return comfort;
    }
    bool get_seat_warmer()
    {
       return seat_warmer;
    }
    void seat_details()
    {
        cout << "Seat : " << endl;
        cout << "Seat comfort is " << comfort << endl;
        cout << "Seat warmer is ";
        if(get_seat_warmer())
            cout << "present" << endl;
        else
            cout << "absent" << endl;
        cout << endl;
    }
};
class wheel
{
protected:
    double circumference;
public:
    wheel(double c=0) : circumference(c)
    {

    }
    void set_circumference(double c)
    {
        circumference=c;
    }
    double get_circumference()
    {
        return circumference;
    }
    void wheel_details()
    {
        cout << "Wheel : "<<endl;
        cout << "Wheel's Circumference is " << get_circumference() <<endl;
        cout << endl;
    }
};
class Engine
{
protected:
    double max_cons_rate;
    double max_energy_rate;
    double avg_rpm;
public:
    Engine(double max_c=0,double max_e=0,double avg_r=0):max_cons_rate(max_c),max_energy_rate(max_e),avg_rpm(avg_r)
    {

    }
    void set_max_cons_rate(double x)
    {
        max_cons_rate=x;
    }
    void set_max_energy_rate(double x)
    {
        max_energy_rate=x;
    }
    void set_avg_rpm(double x)
    {
        avg_rpm=x;
    }
    double get_max_cons_rate()
    {
        return max_cons_rate;
    }
    double get_max_ener_rate()
    {
        return max_energy_rate;
    }
    double get_avg_rpm()
    {
        return avg_rpm;
    }
    void engine_details()
    {
        cout << "Engine : " << endl;
        cout << "Engine's max fuel consumption rate is " << get_max_cons_rate() << endl;
        cout << "Engine's max energy production rate is " << get_max_ener_rate() << endl;
        cout << "Engine's average RPM is " << get_avg_rpm() << endl;
        cout << endl;
    }
};
class door
{
protected:
    bool opening_mode;
public:
    door(bool x=0):opening_mode(x)
    {

    }
    void set_door(bool x)
    {
        opening_mode=x;
    }
    bool get_door()
    {
        return opening_mode;
    }
    void door_details()
    {
        cout << "Door : " <<endl;
        cout << "Door is ";
        if(get_door())
            cout << "sideways" << endl;
        else
            cout << "upwards" << endl;
        cout << endl;
    }
};
class car : public seat,public wheel,public Engine, public door
{
private:
    double maximum_acceleration;
    double fuel_capacity;
public:
    car(double max_acc=0,double fuel_cap=0): maximum_acceleration(max_acc),fuel_capacity(fuel_cap)
    {

    }
    void set_maximum_acceleration(double max_a)
    {
        maximum_acceleration=max_a;
    }
    void set_fuel_capacity(double fuel_cap)
    {
        fuel_capacity=fuel_cap;
    }
    double get_maximum_acceleration()
    {
        return maximum_acceleration;
    }
    double get_fuel_capacity()
    {
        return fuel_capacity;
    }
    void display()
    {
        cout << "Car Details: " << endl;
        cout << "Car's maximum acceleration is " << get_maximum_acceleration()<< endl;
        cout << "Car's fuel capacity is " << get_fuel_capacity() << endl;
        engine_details();
        seat_details();
        wheel_details();
        door_details();
        cout << "Car details ends " << endl;
    }
};
int main()
{
    car lambo;
    lambo.display();
    return 0;
}
















