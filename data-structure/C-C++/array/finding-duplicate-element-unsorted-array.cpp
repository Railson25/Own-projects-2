#include <stdio.h>
#include <stdlib.h>


// int main(){
//     int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};

//     int n = (int)(sizeof(A) / sizeof(A[0]));
    
//     for(int i = 0; i < n - 1; i++){
//         int count = 1;

//         if(A[i] != -1){
//             for(int j = i + 1; j < n; j++){
//                 if(A[i] == A[j]){
//                     count++;
//                     A[j] = -1;
//                 }
//             }

//             if(count > 1) printf("%d %d\n", A[i], count);
//         }
//     }

//     return 0;
// }

//Using hash table
int main(){
    int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};

    int n = (int)(sizeof(A) / sizeof(A[0]));
    int max = 0;
    
    for(int i  = 0; i <= n; i++){
        int x = A[i];

        if(x > max) max = x;
    }

    int *H = (int *)malloc((max + 1)* sizeof(int));

    if(max == NULL){
        perror("Malloc failed");
        return 1;
    }

      for(int i  = 0; i < n; i++){
        H[i] = 0;
     }

    
    for(int i = 0; i < n - 1; i++){
        H[A[i]] ++;
    }

    for(int i = 0; i <= n; i++){
        if(H[i] > 1){
            printf("%d %d\n", i, H[i]);
        }
    }

    return 0;
}