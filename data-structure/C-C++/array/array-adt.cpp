#include <stdio.h>
#include <stdlib.h>

struct Array{
    int *a;
    int size;
    int length;
};

void Display(struct Array arr){
    int i;

    printf("Elements are\n");
    for(i = 0; i < arr.length; i++)
     printf("%d", arr.a[i]);
}

int main(){
    struct Array arr;
    int n, i;

    printf("Enter size of array");
    scanf("%d", arr.size);

    arr.a = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter number of numbers");
    scanf("%d", &n);

    printf("\nEnter all Elements\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr.a[i]);
        
    arr.length = n;   
    
    Display(arr);

    return 0;
}