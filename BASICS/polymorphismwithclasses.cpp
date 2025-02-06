#include <iostream>
using namespace std;
// Base class
class Shape 
{
public:
    virtual void draw() 
    {
        cout << "Drawing a shape." << endl;
    }
};
// Derived class
class Circle : public Shape 
{
public:
    void draw() override 
    {
        cout << "Drawing a circle." << endl;
    }
};
// Derived class of rectangle
class Rectangle : public Shape 
{
public:
    void draw() override 
    {
        cout << "Drawing a rectangle." << endl;
    }
};
int main() 
{
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();
    shape1->draw();  // Calls Circle's draw()
    shape2->draw();  // Calls Rectangle's draw()
    delete shape1;
    delete shape2;
    return 0;
}
