#include <stdio.h>

struct Array{
    int a[10];
    int size;
    int length;
};

int Get(struct Array arr, int index){
    if(index >= 0 && index < arr.length)
        return arr.a[index];
    return -1;    
}

int main(){
    struct Array arr={{2,3,4,5,6}, 10, 5};
    printf("%d\n", Get(arr, 9));

    return 0;
}
