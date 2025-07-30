#include <stdio.h>

struct Array{
    int a[10];
    int size;
    int length;
};

int isSorted(struct Array arr){

    int i;
    for(i = 0; i < arr.length - 1; i++){
        if(arr.a[i] > arr.a[i + 1])
            return 0;
    }

    return 1;
}


int main(){
    struct Array arr={{2,3,25,10,15}, 10, 5};
    printf("%d \n", isSorted(arr));
   
    return 0;
}
