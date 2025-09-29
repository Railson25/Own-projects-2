#include <stdio.h>

struct Array{
    int a[10];
    int size;
    int length;
};

int Max(struct Array arr){
    int max = arr.a[0];
    int i;
    for(i = 1; i < arr.length; i++)
    {
        if(arr.a[i] >max)
            max = arr.a[i];
    }

    return max;
}

int main(){
    struct Array arr={{25,3,14,5,6}, 10, 5};
    printf("%d\n", Max(arr));

    return 0;
}

