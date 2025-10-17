#include <stdio.h>

//Comparing string
// int main(){
//     char A[] = "Painter";
//     char B[] = "Painting";

//     int i, j;

//     for(i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++){
//         if(A[i] != A[j]) break;
//     } 

//     if(A[i] == A[j]){
//         printf("Equal");
//     } else if(A[i] < A[j]){
//         printf("Smaller");
//     }else{
//         printf("Greater");
//     }

//     return 0;
// }

// Find a Palindrome with auxiliary array

// int main(){
//     char A[] = "madam";
//     char B[6];

//     int i, j;

//     for(i = 0; A[i] != '\0'; i++){}

//     i = i - 1;

//     for(j = 0; i >= 0; i--, j++){
//         B[j] = A[i];
//     }

//     B[j] = '\0';

//     printf("%s", B);
    
//     for(i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++){
//         if(A[i] != B[j]) break;
//     } 

//     if(A[i] == B[j]){
//         printf("Equal");
//     } else if(A[i] < A[j]){
//         printf("Smaller");
//     }else{
//         printf("Greater");
//     }

//     return 0;
// }

//Find a Palindrome with two pointers

int main(){
    char A[] = "madam";
    char t;

    int i, j;

    for(j = 0; A[j] != '\0'; j++){}

    j = j - 1;

    for(i = 0; i < j; i++, j--){
        t = A[i];
        A[i]= A[j];
        A[j] = t;
    }

    printf("%s", A);

    i = 0;

    for(j = 0; A[j] != '\0'; j++){}

    j = j - 1;


    while(i < j){
        if(A[i] != A[j]) break;
        i++;
        j--;
    } 

    if(A[i] == A[j]){
        printf("Equal");
    } else if(A[i] < A[j]){
        printf("Smaller");
    }else{
        printf("Greater");
    }

    return 0;
}