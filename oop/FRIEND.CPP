#include <iostream>
using namespace std;

class B; // Forward declaration of class B

class A {
private:
    int privateData;

public:
    A() : privateData(0) {} // Constructor to initialize privateData

    // Friend function declaration inside class A
    friend void showPrivateData(A objA, B objB);

    // Friend class declaration
    friend class B;
};

class B {
private:
    int privateData;

public:
    B() : privateData(10) {} // Constructor to initialize privateData

    // Friend function definition outside class A
    friend void showPrivateData(A objA, B objB) {
        // Access privateData of both A and B
        cout << "Private data in class A: " << objA.privateData << endl;
        cout << "Private data in class B: " << objB.privateData << endl;
    }
};

int main() {
    A objA;
    B objB;

    // Call friend function using objects of both classes
    showPrivateData(objA, objB);

    return 0;
}
