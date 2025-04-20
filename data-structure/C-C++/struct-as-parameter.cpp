#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};


void fun(struct rectangle r1){
    r1.length = 45;
    cout << r1.length << endl;
    cout << r1.breadth << endl;
}

// Passing struct parameter as a value 
int main(){

    struct rectangle r= {10, 5};
    fun(r);
    printf("%d\n", r.length, r.breadth);

    return 0;
}