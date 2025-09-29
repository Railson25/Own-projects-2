#include <stdio.h>

struct Array{
    int a[10];
    int size;
    int length;
};
int Min(struct Array arr){
    int min = arr.a[0];
    int i;
    for(i = 1; i < arr.length; i++)
    {
        if(arr.a[i] < min)
            min = arr.a[i];
    }

    return min;
}

int main(){
    struct Array arr={{25,3,14,5,6}, 10, 5};
    printf("%d\n", Min(arr));

    return 0;
}
