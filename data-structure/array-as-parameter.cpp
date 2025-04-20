#include <iostream>

using namespace std;


//Arrays are always passed by address.
void fun(int *a, int n){

    a[0] = 28;
}

int main(){
    int a[] = {2,4,6,8,10};
    int n = 5;

    fun(a, n);
    for(int x:a)
    cout << x << endl;

    return 0;
}