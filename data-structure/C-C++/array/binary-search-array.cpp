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

int binarySearch(struct Array arr, int key){
    int low, mid, high;
    low = 0;
    high = arr.length - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if(key == arr.a[mid])
            return mid;
        else if(key < arr.a[mid])
            high = mid - 1;
        else  
            low = mid + 1;       
    }
    return -1;
}

int binarySearchRecursive(int a[], int l, int h, int key){
    int mid;
 
    if(l <= h){
        mid = (l + h) / 2;
        if(key == a[mid])
            return mid;
        else if (key < a[mid])
            return binarySearchRecursive(a, l, mid - 1, key);
        else 
            return binarySearchRecursive(a, mid + 1, h, key);       
    }
    return -1;
}

int main(){
    struct Array arr={{2,3,4,5,6}, 10, 5};
    
    printf("%d\n", binarySearchRecursive(arr.a, 0, arr.length, 9));
    Display(arr);
    return 0;
}