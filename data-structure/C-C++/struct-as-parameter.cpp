#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};


// void fun(struct rectangle r1){
//     r1.length = 45;
//     cout << r1.length << endl;
//     cout << r1.breadth << endl;
// }

// // Passing struct parameter as a value 
// int main(){

//     struct rectangle r= {10, 5};
//     fun(r);
//     printf("%d\n", r.length, r.breadth);

//     return 0;
// }


// void fun(struct rectangle *p){
//     p -> length = 45;
//     cout << p -> length << endl;
//     cout << p -> breadth << endl;
// }

// // Passing struct parameter as a address 
// int main(){

//     struct rectangle r= {10, 5};
//     fun(&r);
//     printf("%d\n", r.length, r.breadth);

//     return 0;
// }

struct rectangle *fun(){
    struct rectangle *p;
    // Creating a struct in a heap memory
    p = new rectangle;

    p -> length = 15;
    p -> breadth = 48;

    // returning the pointer
    return p;
}

int main(){
    struct rectangle *ptr = fun();

    cout << ptr -> length << endl;
    cout << ptr -> breadth << endl;

    return 0;
}