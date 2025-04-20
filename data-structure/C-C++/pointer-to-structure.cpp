#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct rectangle {
    int length ;
    int breadth ;
};

// int main(){
//     struct rectangle r = {10, 5};

//     struct rectangle *p =& r;

//     cout << p -> length << endl;
//     cout << p -> breadth << endl;

//     return 0;
// }

int main(){
    struct rectangle *p;

    //creating a object in heap memory
    p=(struct rectangle *)malloc(sizeof(struct rectangle));
    
    // C++ doing the same thing 
    // p= new rectangle; 

    p -> length = 65;
    p -> breadth = 48;

    cout << p -> length << endl;
    cout << p -> breadth << endl;

    return 0;
}
