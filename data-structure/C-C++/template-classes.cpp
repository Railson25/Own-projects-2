#include <iostream>
#include <stdio.h>

using namespace std;

template <class T>
class arithmetic
{
    private:
    T a;
    T b;

    public: 

    arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
arithmetic<T>::arithmetic(T a, T b){
    this -> a = a;
    this -> b = b;
}

template <class T>
T  arithmetic<T>::add(){
    int c;
    c = a + b;
    return c;
}

template <class T>
T  arithmetic<T>::sub(){
    int c;
    c = a - b;
    return c;
}

int main(){
    // arithmetic<double> ar(10.0,5.3);
    arithmetic<char> ar('B','A');

    cout << ar.add() << endl;
    cout << ar.sub() << endl;

    return 0;
}