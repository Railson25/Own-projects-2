#include <stdio.h>

struct Array{
    int a[10];
    int size;
    int length;
};

float Avg(struct Array arr){
    int s = 0;
    int i;
    for(i = 0; i < arr.length; i++)
       s = s + arr.a[i]; 
    return (float)s / arr.length;  
}

int main(){
    struct Array arr={{23,3,14,25,6}, 10, 5};
    printf("%f\n", Avg(arr));

    return 0;
}
