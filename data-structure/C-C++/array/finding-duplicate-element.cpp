#include <stdio.h>


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
int main(){
    int A[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};

    int n = (int)(sizeof(A) / sizeof(A[0]));
    int j;

    for(int i = 0; i < n - 1; i++){
        if(A[i] == A[i + 1]){
            j = i + 1;

            while (A[j] == A[i]) j++;
            
            printf("%d is appearing %d times\n", A[i], j - i);

            i = j - 1;
           
        }
    }

   
    return 0;
}