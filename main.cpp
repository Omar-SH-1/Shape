#include <iostream>
class Shape {
private:
    std::string name;
public:
    Shape(std::string n) : name(n) {}
    const std::string& GetName() const {
        return name;
    }
    virtual  std::string Form() const = 0;
    virtual ~Shape(){};
};
class Triangle : public Shape {
public:
    Triangle(const std::string& n): Shape(n) {
    }
    std::string Form() const override{
        return "Triangle";
    }
};
class Rectangle : public Triangle {
public:
    Rectangle(const std::string& n): Triangle(n) {}
    std::string Form() const override {
        return "Rectangle";
    }
};

int main() {

    return ;
}
