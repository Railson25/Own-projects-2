#include <stdio.h>
#include <stdlib.h>

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

void left(struct Array *arr){
    for(int i = 0; i < arr ->length -1; i++){
        arr->a[i] = arr->a[i + 1];
    }
    arr->a[arr->length - 1] = 0; 
}

void right(struct Array *arr){
    for(int i = arr->length -1; i > 0; i--){
        arr->a[i] = arr->a[i - 1];
    } 
    arr->a[0] = 0;
}


int main(){
    struct Array arr={{2,3,4,5,6}, 10, 5};
    // left(&arr);
    right(&arr);    
    Display(arr);

    return 0;
}
