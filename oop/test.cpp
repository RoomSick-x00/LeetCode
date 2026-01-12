#include <iostream>
using namespace std;

// Function prototypes
float value(float p, int n, float r = 0.15);
void printline(char ch = '*', int len = 40);

int main() {
    float amount;

    printline();

    amount = value(5000.00, 5);

    cout << "\n final value=" << amount << endl;

    printline('=');

    return 0;
}

// Function definitions

float value(float p, int n, float r) {
    float si;
    si = (p * n * r) / 100;
    return si;
}

void printline(char ch, int len) {
    for (int i = 0; i < len; i++)
        cout << ch;
    cout << endl;
}


    void printline(char ch, int len)
    {
        for (int i = 0; i <= len; i++)
            cout << ch << endl;
    }

// #include <iostream>
// #include <stdio.h>

// using namespace std;

// // inline float mul(float x, float y)
// // {
// //     return (x * y);
// // }

// // inline double div(double p, double q)
// // {
// //     return (p / q);
// // }

// main()
// {
//     int mul(int i, int j = 5, int k = 10);     // illegal
//     int mul(int i = 0, int j, int k = 10);     // illegal
//     int mul(int i = 5, int j);                 // illegal
//     int mul(int i = 2, int j = 5, int k = 10); // illegal

//     // float a = 12.345;
//     // float b = 9.82;
//     // cout << mul(a, b) << endl;
//     // cout << div(a, b) << endl;
// }
