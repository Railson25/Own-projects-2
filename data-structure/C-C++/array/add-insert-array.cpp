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

void Append(struct Array *arr, int x){
    if(arr -> length < arr -> size)
        arr -> a[arr -> length ++] = x;
}

void Insert(struct Array *arr, int index, int x){
    int i;
    if(index >= 0 && index <= arr -> length){
        for(i = arr -> length; i > index; i--)
            arr -> a[i] = arr -> a[i - 1];
        arr -> a[index] = x;
        arr -> length++;   
    }
}   

int main(){
    struct Array arr={{2,3,4,5,6}, 10, 5};
    
    Insert(&arr, 1, 11);
    Display(arr);
    return 0;
}