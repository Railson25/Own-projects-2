#include <stdio.h>

// O(n square)
double e(int x, int n){
    static double p = 1, f = 1;
    double r;
    if(n == 0)
        return 1;
    r = e(x, n - 1);    
    p = p * x;  
    f = f * n;

    return r + p / f ;

}

// Making faster O(n)
double eHorner(int x , int n){
    static double s;

    if(n == 0)
        return s;
    s = 1 + x * s / n;   
    return eHorner(x, n - 1);   
}

//Using loop
double Ie(int x, int n){
    double s = 1;
    int i;
    double num = 1, den = 1;
 
    for(i = 1; i <= n; i ++){
        num *= x;
        den *= i;
        s += num/den;
    }

    return s;
}

int main(){

    printf("%lf \n", Ie(1,10));
    return 0;
}