class Product {
    // Product class implementation
};

class Builder {
public:
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual Product* getResult() = 0;
};

class ConcreteBuilder : public Builder {
private:
    Product* product;

public:
    ConcreteBuilder() {
        product = new Product();
    }

    void buildPartA() override {
        // Build Part A of the product
    }

    void buildPartB() override {
        // Build Part B of the product
    }

    Product* getResult() override {
        return product;
    }
};

class Director {
private:
    Builder* builder;

public:
    void setBuilder(Builder* newBuilder) {
        builder = newBuilder;
    }

    Product* construct() {
        builder->buildPartA();
        builder->buildPartB();
        return builder->getResult();
    }
};

int main() {
    Director director;
    ConcreteBuilder builder;

    director.setBuilder(&builder);
    Product* product = director.construct();

    // Use the product
    // ...

    delete product;

    return 0;
}
