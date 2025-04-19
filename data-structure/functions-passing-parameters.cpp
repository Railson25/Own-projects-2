#include <iostream>

using namespace std;


//Call by value parameters!
//Every changes that happened  with (a,b) variables will not
//change the values of (num1, num2) variables.
int add(int a, int b){
    a++;
     cout << a << endl;
    return 0;
}

int main(){
    int num1 = 10, num2 = 15, sum;

    sum = add(num1, num2);

    cout << num1;

    return 0;
}

