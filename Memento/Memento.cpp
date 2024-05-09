#include <iostream>
#include <string>

class Memento {
public:
    Memento(const std::string& state) : state_(state) {}

    std::string getState() const {
        return state_;
    }

private:
    std::string state_;
};

class Originator {
public:
    void setState(const std::string& state) {
        state_ = state;
    }

    std::string getState() const {
        return state_;
    }

    Memento createMemento() const {
        return Memento(state_);
    }

    void restoreFromMemento(const Memento& memento) {
        state_ = memento.getState();
    }

private:
    std::string state_;
};

int main() {
    Originator originator;

    originator.setState("Estado Inicial");
    Memento memento = originator.createMemento();

    originator.setState("Estado Alterado");

    originator.restoreFromMemento(memento);
    std::cout << "Estado restaurado para: " << originator.getState() << std::endl;

    return 0;
}
