#include<iostream>
using namespace std;
class furniture
{
protected:
    int regular_price;
    int discounted_price;
    string material;
public:
    furniture(): regular_price(0),discounted_price(0),material("wood")
    {
    };
    void set_regular_price(int r)
    {
        regular_price=r;
    }
    void set_discounted_price(int d)
    {
        discounted_price=d;
    }
    void set_material(string s)
    {
        material=s;
    }
    int get_regular_price()
    {
        return regular_price;
    }
    int get_discounted_price()
    {
        return discounted_price;
    }
    string get_material()
    {
        return material;
    }
};
class bed : public furniture
{
protected:
    string bedsize;
public:
    bed(string s) : bedsize(s)
    {
    }
    void set_size(string s)
    {
        bedsize=s;
    }
    string get_size()
    {
        return bedsize;
    }
};
class sofa : public furniture
{
protected:
    int seat_num;
public:
    sofa(int n) : seat_num(n)
    {

    }
    void set_seat_num(int n)
    {
        seat_num=n;
    }
    int get_seat_num()
    {
        return seat_num;
    }
};
class dining_table
{
protected:
    int chair_count;
public:
    dining_table(int n) : chair_count(n)
    {

    }
    void set_chair_count(int n)
    {
        chair_count=n;
    }
    int get_chair_count()
    {
        return chair_count;
    }
};
int main()
{
    cout << "ok" << endl;
}
