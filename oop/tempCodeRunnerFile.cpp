#include <iostream>
using namespace std;

int main()
{
    int m = 20;
    {
        int k = m;
        int m = 30;
        cout << "we are in inner block";
        cout << "k=" << k << endl;
        cout << "m=" << m << endl;
        cout << ":: m=" << ::m << endl;
    }
    cout << "\n we are in outer block \n";
    cout << "m=" << m << endl;
    cout << ":: m=" << ::m << endl;

    return 0;
}
