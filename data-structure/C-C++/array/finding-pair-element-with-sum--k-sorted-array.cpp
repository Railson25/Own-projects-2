#include <stdio.h>


int main(){
    int target = 10;
    int A[] = {1,3,4,5,6,8,9,10,12,14};

    int n = (int)(sizeof(A) / sizeof(A[0]));

    int i = 0, j = n - 1;

    while (i < j)
    {
        if(A[i] + A[j] == target){
            printf("%d+%d=%d\n", A[i], A[j], target);
            i++;
            j--;
        }else if(A[i] + A[j] < target){
            i++;
        }else{
            j--;
        }
    }
    

    return 0;
}