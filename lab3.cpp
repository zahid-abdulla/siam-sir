#include <iostream>
using namespace std;

class myclass {
    int a;
    double b;

public:
    // Default constructor
    myclass() {
        this->a = 0;  // Initialize a to a default value
        this->b = 0.0;  // Initialize b to a default value
        cout << "This is a default constructor" << endl;
        cout << "Here the values are " << this->a << " " << this->b << endl;
    }

    // Constructor with a single parameter
    myclass(int _a) {
        this->a = _a;
        this->b = 6.9;
        cout << "This is a single parameter constructor" << endl;
        cout << "Here the values are " << this->a << " " << this->b << endl;
    }

    // Constructor with two parameters
    myclass(int _a, double _b) {
        this->a = _a;
        this->b = _b;
        cout << "This is a double parameter constructor" << endl;
        cout << "Here the values are " << this->a << " " << this->b << endl;
    }

    // Copy constructor
    myclass(const myclass& other) {
        this->a = other.a;
        this->b = other.b;
        cout << "This is the copy constructor" << endl;
        cout << "Here the values are " << this->a << " " << this->b << endl;
    }
};

int main() {
    myclass ob1;
    myclass ob2(995);
    myclass ob3(345, 7.89);
    myclass ob4(ob3);

    return 0;
}
