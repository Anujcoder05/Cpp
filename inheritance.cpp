// create a parent class name shape, and a child class name circle. name objects of both classes and print details

#include <iostream>
using namespace std;
class Person
{
    public :
    string colour;
    float area, perimeter;

    void fillshapes()
    {
        cout<<"Shape is filled";
    }
};
class Circle : public Person
{
    public :
    int radius,area;
    void input()
    {
        cout<<"Enter the radius";
        cin>>radius;
    }
    void calculate()
    {
        area=3.14*(radius*radius);
    }
    void display()
    {
        cout<<"The area of the circle is : "<<area;
        cout<<"\nTHANK YOU FOR YOUR TIME";
    }
};
class Square : public Person
{
    public:
    int side,area;
    void input()
    {
        cout<<"Enter the side : ";
        cin>>side;
    }
    void calculate()
    {
        area=side*side;
    }
    void display()
    {
        cout<<"The area of Square is : "<<area;
        cout<<"\nTHANK YOU FOR YOUR TIME";
    }
};
class Rectangle : public Person
{
    public:
    int l,b,area;
    void input()
    {
        cout<<"Enter the length : ";
        cin>>l;
        cout<<"Enter the breath : ";
        cin>>b;
    }
    void calculate()
    {
        area=l*b;
    }
    void display()
    {
        cout<<"The area of the Rectangle is : "<<area;
        cout<<"\nTHANK YOU FOR YOUR TIME";
    }
};
int main()
{
    int choice;
    cout<<"Enter the choice for which u want to calculate the area : \n1 for Circle\n2 for Square\n3 for Rectangle\nYour choice = ";
    cin>>choice;
    Circle c;
    Square s;
    Rectangle r;
    switch(choice)
    {      
    case 1:
    c.input();
    c.calculate();
    c.display();
    break;

    case 2:
    s.input();
    s.calculate();
    s.display();
    break;

    case 3:
    r.input();
    r.calculate();
    r.display();
    break;
   
    default:
    cout<<"Invalid Input";
    }
}
