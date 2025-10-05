#include <stdio.h>
#include <stdlib.h>


//slower solution using less memory
// int main(){
//     int A[] = {6,3,8,10,16,7,5,2,9,14};

//     int n = (int)(sizeof(A) / sizeof(A[0]));
//     int target = 10;

//     for(int i = 0; i < n - 1; i++){
//         for(int j = i + 1; j < n; j++){
//             if(A[i] + A[j] == target){
//                 printf("%d%d\n", A[i], A[j], target);
//             }

//         }
//     }

//     return 0;
// }

//faster solution using more memory

int main(){
    int target = 10;
    int A[] = {6,3,8,10,16,7,5,2,9,14};

    int n = (int)(sizeof(A) / sizeof(A[0]));

    int biggestElement = 0;

    for(int i  = 0; i <= n; i++){
        int x = A[i];

        if(x > biggestElement) biggestElement = x;
    }

    //Creating hash table
    int *H = (int *)malloc((biggestElement + 1) * sizeof(int));

    if(H == NULL){
        perror("Malloc failed");
        return 1;
    }

    //Initializing the array with zero on heap memory
    for(int i  = 0; i < n; i++){
        H[i] = 0;
     }


    for(int i = 0; i < n; i++){
        if(H[target - A[i]] != 0){
            printf("%d%d%d\n", A[i], target - A[i], target);
        }

        H[A[i]]++;
    }

    return 0;
}

