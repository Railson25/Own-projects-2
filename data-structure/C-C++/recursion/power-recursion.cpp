#include <stdio.h>

int power(int m, int n){
    if(n == 0)
        return 1;
    return power(m, n - 1) * m;    
};

int fastPower(int m, int n){
    if(n == 0)
        return 1;
    if(n % 2 == 0)
        return fastPower(m * m, n / 2);  
    return m * fastPower(m * m, (n - 1) / 2);
};

int Ipower(int m, int n){
    if(n == 0)
        return 1;
    
    int result = 1;
    for(;  0 < n; ){
        if(n % 2 == 0){
            m = m * m;
            n = n / 2;
        }else{
            result = result * m;
            m = m * m;
            n = (n - 1) / 2;
        }
    }
     return result  ;
}

int main(){
    int r = power(2, 9);

    printf("%d ", r);
    return 0;
};