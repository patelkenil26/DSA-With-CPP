#include <iostream>
using namespace std;

// runtime polymorphism -> achivied by using virtual keyword -> Late Binding

// Final keyword:
// - with classes(prevent inheritance)
// - with virtual keyword: prevent overriding in derived classes

class Shape
{
public:
    virtual void draw()
    {
        cout << "Generic Drawing" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override // override is not necessary to write
    {
        cout << "Circle is drawing" << endl;
    }
};

class Ractangle : public Shape
{
public:
    void draw()
    {
        cout << "Ractangle is drawing" << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "Triangle is drawing" << endl;
    }
};

void ShapeDrawing(Shape *s)
{
    s->draw(); // draw is polymorphic -> calls relevant draw function
}

int main()
{
    // Circle c;
    // Triangle t;
    // ShapeDrawing(&t);
    // ShapeDrawing(&c);

    // without virtual
    Shape *s = new Shape();
    s->draw();

    // UPCASTING: object of child class but holding it in parent
    Shape *s1 = new Circle();
    s1->draw();

    Circle *c = new Circle();
    c->draw();

    // DOWNCASTING: object of parent but holding it in child
    Shape *c2 = new Shape();
    Circle *c1 = (Circle *)c2;
    c1->draw();
    return 0;
}