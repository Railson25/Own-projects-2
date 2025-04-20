#include <iostream>

using namespace std;


//Call by value parameters!
//Every changes that happened  with (a,b) variables will not
//change the values of (num1, num2) variables.
// int add(int a, int b){
//     a++;
//      cout << a << endl;
//     return 0;
// }

// int main(){
//     int num1 = 10, num2 = 15, sum;

//     sum = add(num1, num2);

//     cout << num1;

//     return 0;
// }


//Call by address parameters!
//Parameters is type of Pointers.
// void swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){
//     int num1 = 10, num2 = 15;

//     //Passing the address of parameters
//     swap(&num1, &num2);

//     cout << num1 << endl;
//     cout << num2 << endl;

//     return 0;
// }


//Call by reference parameters (C++ only).
//Parameters now actually means (num1, num2) isn't a pointers.  
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int num1 = 10, num2 = 15;

    //This swap function may become inline function depends on the compiler!
    swap(num1, num2);

    cout << num1 << endl;
    cout << num2 << endl;

    return 0;
}
