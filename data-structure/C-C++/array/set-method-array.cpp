#include <stdio.h>

struct Array{
    int a[10];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;

    printf("Elements are\n");
    for(i = 0; i < arr.length; i++)
     printf("%d", arr.a[i]);
}

void Set(struct Array *arr, int index, int x){
     if(index >= 0 && index < arr ->length)
        arr ->a[index] = x;
}


int main(){
    struct Array arr={{2,3,4,5,6}, 10, 5};
    Set(&arr, 2, 15);
    Display(arr);

    return 0;
}
