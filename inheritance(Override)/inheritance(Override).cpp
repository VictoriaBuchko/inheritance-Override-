#include <iostream>
using namespace std;

class Figure
{
protected:
    int side;

public:
    Figure()
    {
        side = 0;
    }

    Figure(int x)
    {
        side = x;
    }

    void SetSide()
    {
        cout << "Enter the side: ";
        cin >> side;
    }

    void Perimeter()
    {
        cout << "Perimeter ";
    }

    void Square()
    {
        cout << "Square ";
    }

};

class Squares : public Figure
{
public:
    Squares() : Figure() {}

    double Perimeter()
    {
        cout << "Square ";
        Figure::Perimeter();
        return 4 * side;
    }

    double Square()
    {
        cout << "Square ";
        Figure::Square();
        return side * side;
    }
};

class Rectangle : public Figure
{
public:
    Rectangle() : Figure() {}

    double Perimeter()
    {
        cout << "Rectengle ";
        Figure::Perimeter();
        return 2 * (side + side);
    }

    double Square()
    {
        cout << "Rectengle ";
        Figure::Square();
        return side * side;
    }
};

class Circle : public Figure
{
public:
    Circle() : Figure() {}

    double Perimeter()
    {
        cout << "Circle ";
;       Figure::Perimeter();
        return 2 * 3.14159 * side;
    }

    double Square()
    {
        cout << "Circle ";
        Figure::Square();
        return (side * side) / 4 * 3.14159;
    }
};

class TriangleEq : public Figure
{
public:
    TriangleEq() : Figure() {}

    double Perimeter()
    {
        cout << "Triangle ";
        Figure::Perimeter();
        return 3 * side;
    }

    double Square()
    {
        cout << "Triangle ";
        Figure::Square();
        return 0.25 * sqrt(3) * side;
    }
};

int main()
{
    Squares square;
    square.SetSide();
    cout << square.Perimeter() << endl;
    cout << square.Square() <<"\n\n";

    Rectangle rectangle;
    rectangle.SetSide();
    cout << rectangle.Perimeter() << endl;
    cout << rectangle.Square() << "\n\n";

    Circle circle;
    circle.SetSide();
    cout << circle.Perimeter() << endl;
    cout << circle.Square() << "\n\n";

    TriangleEq triangle;
    triangle.SetSide();
    cout << triangle.Perimeter() << endl;
    cout << triangle.Square() << "\n\n";

    return 0;
}


