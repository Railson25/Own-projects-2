#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


// int main(){
   
//     int *p;
//     // p=(int *)malloc(5 * sizeof(int));
//     p = new int[5];
//     p[0] = 10;
//     p[1] = 18;
//     p[2] = 9;
//     p[3] = 21;
//     p[4] = 50;

//     for(int i = 0; i < 5;i++)
//     cout << p[i] << endl;

//     delete [ ] p;
//     return 0;
// }


struct rectangle
{
    int length;
    int breadth;
};


// Pointer takes 8bytes independent of the data in latest compiler they take 8 bytes! in earlier they take 4bytes.
int main(){
   
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;


    return 0;
}