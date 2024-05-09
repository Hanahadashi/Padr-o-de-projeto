#include <iostream>

class Shape {
public:
    virtual ~Shape() {}
    virtual Shape* clone() const = 0;
    virtual void draw() const = 0;
};

class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}

    Shape* clone() const override {
        return new Circle(*this);
    }

    void draw() const override {
        std::cout << "Desenhando um círculo com raio " << radius << std::endl;
    }

private:
    double radius;
};

class Square : public Shape {
public:
    Square(double side) : side(side) {}

    Shape* clone() const override {
        return new Square(*this);
    }

    void draw() const override {
        std::cout << "Desenhando um quadrado com lado " << side << std::endl;
    }

private:
    double side;
};

int main() {
    Circle originalCircle(5.0);

    Shape* clonedCircle = originalCircle.clone();

    clonedCircle->draw();

    delete clonedCircle;

    Square originalSquare(4.0);

    Shape* clonedSquare = originalSquare.clone();

    clonedSquare->draw();

    delete clonedSquare;

    return 0;
}
