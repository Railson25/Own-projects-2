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

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int linearSearch(struct Array arr, int key ){
    int i;

    for(i = 0; i < arr.length; i++){
        if(key ==arr.a[i])
            return i;
    }
    return -1;
}

//Swap the element with the previous element
int linearSearchTransposition(struct Array *arr, int key ){
    int i;
    for(i = 0; i < arr -> length; i++){
        if(key ==arr -> a[i]){
            swap(&arr -> a[i], &arr -> a[i - 1]);
            return i;
        }
    }
    return -1;
}

//Bring the element that we are seaching for the first position
int linearSearchMoveToHead(struct Array *arr, int key ){
    int i;
    for(i = 0; i < arr -> length; i++){
        if(key ==arr -> a[i]){
            swap(&arr -> a[i], &arr -> a[0]);
            return i;
        }
    }
    return -1;
}


int main(){
    struct Array arr={{2,3,4,5,6}, 10, 5};
    
    printf("%d\n", linearSearchMoveToHead(&arr,5));
    Display(arr);
    return 0;
}