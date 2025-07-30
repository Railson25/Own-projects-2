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

void Rearrange(struct Array *arr){
    int i, j;
    i = 0;
    j = arr->length -1;

    while (i < j)
    {
        while(arr->a[i] < 0) i++;
        while(arr->a[j] >= 0) j--;

        if(i < j){
            int temp = arr->a[i];
            arr->a[i] = arr->a[j];
            arr->a[j] = temp;
        }
    }
    
}

int main(){
    struct Array arr={{2,-3,5,10,-15, -7}, 10, 6};
    Rearrange(&arr);
    Display(arr);
    return 0;
}
