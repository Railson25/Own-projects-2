#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};


void initialize(struct rectangle *r, int l, int b){
    r -> length = l;
    r -> breadth = b;
}

int area(struct rectangle r){
    return r.length * r.breadth;
}

int perimeter(rectangle r){
    int p;
    p = 2 * (r.length + r.breadth);

    return p;
}

int main(){
   rectangle r = {0,0};
    int l, b;
    printf("Enter Length and Breadth");
    cin >> l >> b;

    initialize(&r, l, b);
    int a = area(r);
    int per = perimeter(r);

    printf("Area=%d\nPerimeter=%d\n", a, per);

    return 0;
}