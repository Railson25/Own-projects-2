#include <iostream>
#include <stdio.h>

using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:

    rectangle(){
        length = 0;
        breadth = 0;
    }

    rectangle( int l, int b){
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

    void setLength(int l){
        length = l;
    }

    void setBreadth(int b){
        length = b;
    }

    int getLength(){ 
        return length;
    }

    int getBreadth(){ 
        return breadth;
    }

    ~rectangle(){
        cout << "Destructor";
    };
};

int main(){
   rectangle r(10,5);

   cout << "Area " << r.area() << endl;
   cout << "Perimeter " << r.perimeter() << endl;
    return 0;
}