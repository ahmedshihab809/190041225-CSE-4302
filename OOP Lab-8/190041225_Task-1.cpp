#include<iostream>
#include<cmath>
using namespace std;
class Shape
{
protected:
    char character;
    int random;
public:
    void Dummy()
    {
        cout << "I am shape" << endl;
    }

};
class TwoDimensionalShape : public Shape
{
protected:
    double area;
    double perimeter;
public:
    TwoDimensionalShape(double a=0, double p=0):area(a),perimeter(p)
    {

    }
    void set_area(double a)
    {
        area=a;
    }
    void set_perimeter(double p)
    {
        perimeter=p;
    }
    double get_area()
    {
        return area;
    }
    double get_perimeter()
    {
        return perimeter;
    }
    void Dummy2D()
    {
        cout << "I am 2D Shape" << endl;
    }
};
class ThreeDimensionalShape : protected Shape
{
protected:
    double surface_area;
    double volume;
public:
    ThreeDimensionalShape(double a=0, double v=0) : surface_area(a),volume(v)
    {

    }
    void set_surface_area(double a)
    {
        surface_area=a;
    }
    void set_volume(double v)
    {
        volume=v;
    }
    double get_surface_area()
    {
        return surface_area;
    }
    double get_volume()
    {
        return volume;
    }
    void Dummy3D()
    {
        cout << "I am 3D Shape" << endl;
    }
};
class etriangle : public TwoDimensionalShape
{
private:
    double side;
public:
    void update()
    {
        area=(sqrt(3)*side*side)/4;
        perimeter=3*side;
    }
    etriangle(double s=0): side(s)
    {
        area=(sqrt(3)*side*side)/4;
        perimeter=3*side;
    }
    void set_side(double s)
    {
        side=s;
        void update();
    }
    double get_side()
    {
        return side;
    }
    void details()
    {
        cout << "Shape : etriangle" << endl;
        cout << "Side is " << get_side() << endl;
        cout <<"Area is " << get_area() <<endl;
        cout << "Perimeter is " << get_perimeter() << endl;
        cout << "\n";
    }
};
class rectangle : public TwoDimensionalShape
{
private:
    double length;
    double breadth;
public:
    void update()
    {
        area=length*breadth;
        perimeter=2*(length+breadth);
    }
    rectangle(double l=0,double b=0):length(l),breadth(b)
    {
        area=length*breadth;
        perimeter=2*(length+breadth);
    }
    void set_breadth(double b)
    {
        breadth=b;
        void update();
    }
    void set_length(double l)
    {
        length=l;
        void update();
    }
    double get_length()
    {
        return length;
    }
    double get_breadth()
    {
        return breadth;
    }
    void details()
    {
        cout << "Shape : rectangle" << endl;
        cout << "Length is " << get_length() << endl;
        cout << "Breadth is " << get_breadth() << endl;
        cout <<"Area is " << get_area() <<endl;
        cout << "Perimeter is " << get_perimeter() << endl;
        cout << "\n";
    }
};
class square : public TwoDimensionalShape
{
private:
    double side;
public:
    void update()
    {
        area=side*side;
        perimeter=4*side;
    }
    square(double s=0): side(s)
    {
        area=side*side;
        perimeter=4*side;
    }
    void set_side(double s)
    {
        side=s;
        void update();
    }
    double get_side()
    {
        return side;
    }
    void details()
    {
        cout << "Shape : square" << endl;
        cout << "Side is " << get_side() << endl;
        cout <<"Area is " << get_area() <<endl;
        cout << "Perimeter is " << get_perimeter() << endl;
        cout << "\n";
    }
};
class circle : private TwoDimensionalShape
{
private:
    double radius;
public:
    void update()
    {
        area=3.1416*radius*radius;
        perimeter=2*3.1416*radius;
    }
    circle(double r=0): radius(r)
    {
        area=3.1416*radius*radius;
        perimeter=2*3.1416*radius;
    }
    void set_radius(double r)
    {
        radius=r;
        void update();
    }
    double get_radius()
    {
        return radius;
    }
    void details()
    {
        cout << "Shape : circle" << endl;
        cout << "radius is " << get_radius() << endl;
        cout <<"Area is " << get_area() <<endl;
        cout << "Perimeter is " << get_perimeter() << endl;
        cout << "\n";
    }
};
class cube : public ThreeDimensionalShape
{
private:
    double side;
public:
    void update()
    {
        surface_area=6*side*side;
        volume=side*side*side;
    }
    cube(double s=0): side(s)
    {
        surface_area=6*side*side;
        volume=side*side*side;
    }
    void set_side(double s)
    {
        side=s;
        void update();
    }
    double get_side()
    {
        return side;
    }
    void details()
    {
        cout << "Shape : cube" << endl;
        cout << "Side is " << get_side() << endl;
        cout << "Surface area is " << get_surface_area() << endl;
        cout << "Volume is " << get_volume() << endl;
        cout << "\n";
    }
};
class sphere : public ThreeDimensionalShape
{
private:
    double radius;
public:
    void update()
    {
        surface_area=4*3.1416*radius*radius;
        volume=3.1416*radius*radius*radius;
    }
    sphere(double r=0): radius(r)
    {
        surface_area=4*3.1416*radius*radius;
        volume=3.1416*radius*radius*radius;
    }
    double set_radius(double r)
    {
        radius=r;
        void update();
    }
    double get_radius()
    {
        return radius;
    }
    void details()
    {
        cout << "Shape : sphere" << endl;
        cout << "radius is " << get_radius() << endl;
        cout << "Surface area is " << get_surface_area() << endl;
        cout << "Volume is " << get_volume() << endl;
        cout << "\n";
    }
};
class cylinder : public ThreeDimensionalShape
{
private:
    double radius;
    double height;
public:
    void update()
    {
        surface_area=2*3.14*radius*height+2*3.14*radius*radius;
        volume=3.14*radius*radius*height;
    }
    cylinder(double r=0,double h=0):radius(r),height(h)
    {
        surface_area=2*3.14*radius*height+2*3.14*radius*radius;
        volume=3.14*radius*radius*height;
    }
    void set_radius(double r)
    {
        radius=r;
        void update();
    }
    void set_height(double h)
    {
        height=h;
        void update();
    }
    double get_radius()
    {
        return radius;
    }
    double get_height()
    {
        return height;
    }
    void details()
    {
        cout << "Shape : cylinder" << endl;
        cout << "radius is " << get_radius() << endl;
        cout << "height is " << get_height() << endl;
        cout << "Surface area is " << get_surface_area() << endl;
        cout << "Volume is " << get_volume() << endl;
        cout << "\n";
    }
};
class cone : public ThreeDimensionalShape
{
private:
    double radius;
    double height;
public:
    void update()
    {
        surface_area=3.14*radius*radius+3.14*radius*sqrt(height*height+radius*radius);
        volume=(3.14*radius*radius*height)/3;
    }
    cone(double r=0,double h=0): radius(r),height(h)
    {
        surface_area=3.14*radius*radius+3.14*radius*sqrt(height*height+radius*radius);
        volume=(3.14*radius*radius*height)/3;
    }
    void set_radius(double r)
    {
        radius=r;
        void update();
    }
    void set_height(double h)
    {
        height=h;
        void update();
    }
    double get_radius()
    {
        return radius;
    }
    double get_height()
    {
        return height;
    }
    void details()
    {
        cout << "Shape : cone" << endl;
        cout << "radius is " << get_radius() << endl;
        cout << "height is " << get_height() << endl;
        cout << "Surface area is " << get_surface_area() << endl;
        cout << "Volume is " << get_volume() << endl;
        cout << "\n";
    }
};
int main()
{
    etriangle tri(1);
    tri.details();
    square sq(2);
    sq.details();
    circle circ(3);
    circ.details();
    rectangle rect(4,4);
    rect.details();
    cube cu(5);
    cu.details();
    cone co(6,6);
    co.details();
    sphere sp(7);
    sp.details();
    cylinder cy(8,8);
    cy.details();
    cout <<"\n\n";
    ///cu.Dummy();  ///This will not work because 3D class inherits shape class as protected
    ///and the dummy function is under public specifier so it will become protected.///

    sq.Dummy();   ///This will work because 2D class inherits shape class as public and the dummy
    ///function is also under public specifier.///
    cout << "\n";
    ///circ.Dummy2D(); ///This wont work because circle class inherits 2D class as private and thus
    ///Dummy2D function is a public function but gets converted to private.
    co.Dummy3D();   ///This works because cone class inherits 3D class as public and the Dummy3D
    /// function is public as well.
    return 0;
}
