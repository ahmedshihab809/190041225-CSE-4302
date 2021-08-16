#include<bits/stdc++.h>
using namespace std;
class furniture;
void sort_furniture_price();
int furniture_count=0;
vector <pair<int,furniture*>>vect;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
class furniture
{
protected:
    int regular_price;
    int discounted_price;
    string material;
    int id;
    string product_name;
public:
    furniture(): regular_price(0),discounted_price(0),material("wood"),product_name("x")
    {
        id=furniture_count;
        furniture_count++;
    };
    void set_regular_price(int r)
    {
        regular_price=r;
    }
    void set_discounted_price(int d)
    {
        int i;
        for(i=0; i<furniture_count; i++)
        {
            if(vect[i].second->id==id)
                break;
        }
        discounted_price=d;
        vect[i].first=discounted_price;
    }
    void set_material(string s)
    {
        material=s;
    }
    void set_product_name(string s)
    {
        product_name=s;
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
    string get_product_name()
    {
        return product_name;
    }
    void details()
    {
        cout << "-----------------------------" << endl;
        cout << "Product Name : " << get_product_name() << endl;
        cout << "Regular Price : " << get_regular_price() << endl;
        cout << "Discounted Price : " << get_discounted_price() << endl;
        cout << "Material : " << get_material() << endl;
    }
    friend void sort_furniture_price();
};
class bed : public furniture
{
protected:
    string bedsize;
public:
    bed(string s) : bedsize(s)
    {
        vect.push_back(make_pair(discounted_price,this));
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
        vect.push_back(make_pair(discounted_price,this));
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
        vect.push_back(make_pair(discounted_price,this));
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
void sort_furniture_price()
{
    sort(vect.begin(),vect.end());
}
int main()
{
    bed b1("double");
    b1.set_regular_price(1000);
    b1.set_discounted_price(5200);
    b1.set_material("steel");
    b1.set_product_name("Dragon");
    b1.product_details();
    bed b2("double");
    b2.set_regular_price(1000);
    b2.set_discounted_price(1500);
    b2.set_material("steel");
    b2.set_product_name("Dragon");
    b2.product_details();
    bed b3("double");
    b3.set_regular_price(1000);
    b3.set_discounted_price(500);
    b3.set_material("steel");
    b3.set_product_name("Dragon");
    b3.product_details();
    bed b4("double");
    b4.set_regular_price(1000);
    b4.set_discounted_price(900);
    b4.set_material("steel");
    b4.set_product_name("Dragon");
    b4.product_details();
    sort_furniture_price();
    cout << "----Sorted furnitures----" << endl;
    for(int i=0;i<furniture_count;i++)
    {
        vect[i].second->details();
    }

}


