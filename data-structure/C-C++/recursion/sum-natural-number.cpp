#include <stdio.h>

int sum(int n ){         // => Recursive function
    if(n == 0)
        return 0;
    return sum(n - 1) + n;    
}

 int sumP(int n)
 {
	 return n * (n + 1) / 2;
 }









int Isum(int n){      // => Iterative function
    int s = 0;
    int i;

    for (i = 1; i <= n; i++)
        s = s + i;
    return s;    
    
}


int main(){
    int r;
    r = 200;

    r = Isum(r);
    printf("%d ", r);

    return 0;;
}