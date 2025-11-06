#include <stdio.h>

//using auxiliary array
// void perm(char S[], int k){
//     static int A[10] = {0};
//     static char res[10];

//     int i;

//     if(S[k] == '\0'){
//         res[k] = '\0';
//         printf("%s\n", res);
//     }else {
//         for(i = 0; S[i] != '\0'; i++){
//             if(A[i] == 0){
//                 res[k] = S[i];
//                 A[i] = 1;
//                 perm(S, k + 1);
//                 A[i] = 0;
//             }
//         }
//     }
// }

// int main(){
//     char S[] = "ABC";

//     perm(S, 0);

//     return 0;
// }

//using two pointers

void perm(char S[], int low, int high){
    int i; 

    if(low == high){
        printf("%s\n", S);
    }else {
        for(i = low; i <= high; i++){
            int temp = S[low];
            S[low] = S[i];
            S[i] = temp;

            perm(S, low + 1, high);
            temp = S[low];
            S[low] = S[i];
            S[i] = temp;
        }
    }
}

int main(){
    char S[] = "ABC";
    int i; 

    for(i = 0; S[i] != '\0'; i++);

    perm(S, 0, i - 1);

    return 0;
}