#include <iostream>

using namespace std;


//Arrays are always passed by address.
void fun(int a[]){

    for(int i = 0; i < 5; i++)
    cout << a[i] << endl;
}

int main(){
    int a[] = {2,4,6,8,10};
    int n = 5;

    fun(a);
    for(int x:a)
    cout << x;

    return 0;
}