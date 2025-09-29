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

void InsertSort(struct Array *arr, int x){

    int i = arr->length -1;
    if(arr->length == arr->size)
        return;

    while(i >= 0 && arr->a[i] > x){
        arr->a[i + 1] = arr->a[i];
        i--;
    }

    arr->a[i + 1] = x;
    arr->length++;
}


int main(){
    struct Array arr={{2,3,5,10,15}, 10, 5};
    InsertSort(&arr, 4);
    Display(arr);
    return 0;
}
