// Prototype base class
class Prototype {
public:
    virtual Prototype* clone() = 0;
};

// Concrete prototype class
class ConcretePrototype : public Prototype {
public:
    Prototype* clone() override {
        return new ConcretePrototype(*this);
    }
};

int main() {
    // Create an instance of the concrete prototype
    ConcretePrototype prototype;

    // Clone the prototype
    Prototype* clonedPrototype = prototype.clone();

    // Use the cloned prototype

    return 0;
}
