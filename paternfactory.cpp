#include <iostream>
using namespace std;

// Abstract Product
class Product {
public:
    virtual void operation() = 0;
};

// Concrete Product A
class ConcreteProductA : public Product {
public:
    void operation() {
        cout << "Concrete Product A operation" << endl;
    }
};

// Concrete Product B
class ConcreteProductB : public Product {
public:
    void operation() {
        cout << "Concrete Product B operation" << endl;
    }
};

// Factory
class Factory {
public:
    virtual Product* createProduct() = 0;
};

// Concrete Factory A
class ConcreteFactoryA : public Factory {
public:
    Product* createProduct() {
        return new ConcreteProductA();
    }
};

// Concrete Factory B
class ConcreteFactoryB : public Factory {
public:
    Product* createProduct() {
        return new ConcreteProductB();
    }
};

int main() {
    // Create a Concrete Factory A
    Factory* factoryA = new ConcreteFactoryA();
    // Use the factory to create a Concrete Product A
    Product* productA = factoryA->createProduct();
    // Call the operation method of the Concrete Product A
    productA->operation();

    // Create a Concrete Factory B
    Factory* factoryB = new ConcreteFactoryB();
    // Use the factory to create a Concrete Product B
    Product* productB = factoryB->createProduct();
    // Call the operation method of the Concrete Product B
    productB->operation();

    return 0;
}
