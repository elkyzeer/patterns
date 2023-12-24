// Target interface
class Target {
public:
    virtual void request() = 0;
};

// Adaptee class
class Adaptee {
public:
    void specificRequest() {
        // Perform specific request
    }
};

// Adapter class
class Adapter : public Target {
private:
    Adaptee* adaptee;

public:
    Adapter(Adaptee* adaptee) : adaptee(adaptee) {}

    void request() override {
        // Call the specific request method of the adaptee
        adaptee->specificRequest();
    }
};

// Client code
int main() {
    // Create an instance of the Adaptee class
    Adaptee* adaptee = new Adaptee();

    // Create an instance of the Adapter class, passing the Adaptee object
    Target* adapter = new Adapter(adaptee);

    // Call the request method of the Target interface, which internally calls the specificRequest method of the Adaptee
    adapter->request();

    // Clean up
    delete adapter;
    delete adaptee;

    return 0;
}
