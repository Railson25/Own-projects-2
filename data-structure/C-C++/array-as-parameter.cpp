#include <iostream>

using namespace std;


//Arrays are always passed by address.
int * fun(int size){
    int * p;
    // Create an array in heap memory
    p = new int[size];

    for(int i = 0; i < size; i++)
    p[i] = i + 1;

    // returning a pointer
    return p;
}

int main(){
    int *ptr, sz = 5;

    // This function will create an array and returning the pointer for that array
    ptr = fun(sz);
    for(int i = 0; i < sz; i++)
    cout << ptr[i] << endl;

    return 0;
}