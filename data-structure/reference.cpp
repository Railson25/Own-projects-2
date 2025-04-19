#include <iostream>

using namespace std;

// Conceptually a reference doesn't consume memory.

int main(){

    int a = 10;

    int &r = a;

    a = 25;

    cout << a << endl;

    // r++;

    cout << r << endl;
    cout << a << endl;

    return 0;
}