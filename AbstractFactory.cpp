// Abstract Product A
class AbstractProductA {
public:
    virtual void operationA() = 0;
};

// Concrete Product A1
class ConcreteProductA1 : public AbstractProductA {
public:
    void operationA() override {
        // Implementation for Product A1
    }
};

// Concrete Product A2
class ConcreteProductA2 : public AbstractProductA {
public:
    void operationA() override {
        // Implementation for Product A2
    }
};

// Abstract Product B
class AbstractProductB {
public:
    virtual void operationB() = 0;
};

// Concrete Product B1
class ConcreteProductB1 : public AbstractProductB {
public:
    void operationB() override {
        // Implementation for Product B1
    }
};

// Concrete Product B2
class ConcreteProductB2 : public AbstractProductB {
public:
    void operationB() override {
        // Implementation for Product B2
    }
};

// Abstract Factory
class AbstractFactory {
public:
    virtual AbstractProductA* createProductA() = 0;
    virtual AbstractProductB* createProductB() = 0;
};

// Concrete Factory 1
class ConcreteFactory1 : public AbstractFactory {
public:
    AbstractProductA* createProductA() override {
        return new ConcreteProductA1();
    }

    AbstractProductB* createProductB() override {
        return new ConcreteProductB1();
    }
};

// Concrete Factory 2
class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA* createProductA() override {
        return new ConcreteProductA2();
    }

    AbstractProductB* createProductB() override {
        return new ConcreteProductB2();
    }
};

int main() {
    // Create a Concrete Factory 1
    AbstractFactory* factory1 = new ConcreteFactory1();

    // Create Product A1 and Product B1 using Factory 1
    AbstractProductA* productA1 = factory1->createProductA();
    AbstractProductB* productB1 = factory1->createProductB();

    // Use the created products
    productA1->operationA();
    productB1->operationB();

    // Create a Concrete Factory 2
    AbstractFactory* factory2 = new ConcreteFactory2();

    // Create Product A2 and Product B2 using Factory 2
    AbstractProductA* productA2 = factory2->createProductA();
    AbstractProductB* productB2 = factory2->createProductB();

    // Use the created products
    productA2->operationA();
    productB2->operationB();

    return 0;
}
