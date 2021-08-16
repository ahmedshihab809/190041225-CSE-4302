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
    void details()
    {
        cout << "-----------------------------" << endl;
        cout << "Regular Price : " << get_regular_price() << endl;
        cout << "Discounted Price : " << get_discounted_price() << endl;
        cout << "Material : " << get_material() << endl;
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
    void product_details()
    {
        details();
        cout << "Bed Size : " << get_size()<< endl;
        cout << "###################################"<< endl;
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
    void product_details()
    {
        details();
        cout << "Sofa Size : " << get_seat_num() << endl;
        cout << "###################################"<< endl;
    }
};
class dining_table : public furniture
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
    void product_details()
    {
        details();
        cout << "Dining Table Size : " << get_chair_count()<< endl;
        cout << "###################################"<< endl;
    }
};
int main()
{
    bed b("double");
    b.set_regular_price(1000);
    b.set_discounted_price(500);
    b.set_material("steel");
    b.product_details();
}

