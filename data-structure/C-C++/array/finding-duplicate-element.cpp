#include <stdio.h>
#include <stdlib.h>


// int main(){
//     int A[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};

//     int n = (int)(sizeof(A) / sizeof(A[0]));
    
//     int lastDuplicate = 0;

//     for(int i = 0; i < n; i++){
//         if(A[i] == A[i + 1] && A[i] != lastDuplicate){
//             printf("%d\n", A[i]);
//             lastDuplicate = A[i];
//         }
//     }

   
//     return 0;
// }

//Counting the duplicates
// int main(){
//     int A[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};

//     int n = (int)(sizeof(A) / sizeof(A[0]));
//     int j;

//     for(int i = 0; i < n - 1; i++){
//         if(A[i] == A[i + 1]){
//             j = i + 1;

//             while (A[j] == A[i]) j++;
            
//             printf("%d is appearing %d times\n", A[i], j - i);

//             i = j - 1;
           
//         }
//     }

//     return 0;
// }

//Counting the duplicates using hash table
int main(){
    int A[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};

    int n = (int)(sizeof(A) / sizeof(A[0]));

    int low = A[0];
    int max = A[0];

    for(int i = 0; i < n; i++){
        int x = A[i];

        if(x < low){
            low = x;
        }

        if(x > max){
            max = x;
        }
    }


    int *H = (int *)malloc((max + 1)* sizeof(int));

    if(max == NULL){
        perror("Malloc failed");
        return 1;
    }

    for(int i = 0; i <= max; i++){
        H[i] = 0;
    }

    for(int i = 0; i < n; i++){
        H[A[i]] = H[A[i]] + 1;
    }

    for(int i = low; i <= max; i++){
        if(H[i] > 1){
            printf("%d is appearing %d times\n", i, H[i]);
        }
    }

    free(H);

    return 0;
}
