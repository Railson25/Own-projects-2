#include <iostream>
#include <stdio.h>

using namespace std;

class rectangle
{
    public:
    int length;
    int breadth;

    void initialize( int l, int b){
        length = l;
        breadth = b;
    }

    int area(){
        return length * breadth;
    }

    int perimeter(){
        int p;
        p = 2 * (length + breadth);

        return p;
    }
};

int main(){
   rectangle r;
    int l, b;
    printf("Enter Length and Breadth");
    cin >> l >> b;

    r.initialize( l, b);
    int a = r.area();
    int per = r.perimeter();

    printf("Area=%d\nPerimeter=%d\n", a, per);

    return 0;
}