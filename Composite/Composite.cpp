#include <iostream>
#include <vector>

class Component {
public:
    virtual void display() const = 0;
    virtual ~Component() = default;
};

class Leaf : public Component {
private:
    int value;
public:
    Leaf(int v) : value(v) {}

    void display() const override {
        std::cout << "Leaf: " << value << std::endl;
    }
};

class Composite : public Component {
private:
    std::vector<Component*> children;
public:
    void add(Component* component) {
        children.push_back(component);
    }

    void display() const override {
        for (const auto& child : children) {
            child->display();
        }
    }
};

int main() {
    Leaf leaf1(1);
    Leaf leaf2(2);
    Leaf leaf3(3);

    Composite composite;
    composite.add(&leaf1);
    composite.add(&leaf2);

    Composite composite2;
    composite2.add(&leaf3);

    composite.add(&composite2);

    composite.display();

    return 0;
}
