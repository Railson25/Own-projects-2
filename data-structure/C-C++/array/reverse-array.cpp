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

void ReverseWithAuxiliaryArray(struct Array *arr){
    int *b;
    int i, j;
    b = (int *)malloc(arr->length * sizeof(int));

    for(i = arr->length -1, j = 0; i >= 0; i--, j++){
        b[j] = arr->a[i];
    }

   for(i = 0; i < arr->length; i++){
        arr->a[i] = b[i];
    }
}

void Reverse(struct Array *arr){
    int i = 0, j = arr->length -1;

    for(; i < j; i++, j--){
      int temp = arr->a[i];
      arr->a[i] = arr->a[j];
      arr->a[j] = temp;  
    }
}
int main(){
    struct Array arr={{2,3,4,5,6}, 10, 5};
    Reverse(&arr);
    Display(arr);

    return 0;
}
