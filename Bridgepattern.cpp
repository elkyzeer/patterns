// Abstraction class
class Abstraction {
protected:
    class Implementation* implementation;
public:
    virtual void operation() = 0;
};

// Implementation class
class Implementation {
public:
    virtual void performOperation() = 0;
};

// Concrete Abstraction class
class ConcreteAbstraction : public Abstraction {
public:
    void operation() {
        implementation->performOperation();
    }
};

// Concrete Implementation class
class ConcreteImplementationA : public Implementation {
public:
    void performOperation() {
        // Perform operation A
    }
};

// Concrete Implementation class
class ConcreteImplementationB : public Implementation {
public:
    void performOperation() {
        // Perform operation B
    }
};

int main() {
    Abstraction* abstraction = new ConcreteAbstraction();
    Implementation* implementationA = new ConcreteImplementationA();
    Implementation* implementationB = new ConcreteImplementationB();

    abstraction->implementation = implementationA;
    abstraction->operation();

    abstraction->implementation = implementationB;
    abstraction->operation();

    delete abstraction;
    delete implementationA;
    delete implementationB;

    return 0;
}
