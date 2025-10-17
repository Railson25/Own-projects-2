#include <stdio.h>
#include <stdlib.h>

//n square
// int main() {
//     char A[] = "finding";
//     int i, j;
//     int count;

//     for (i = 0; A[i] != '\0'; i++) {
//         count = 1; 

       
//         for (j = i + 1; A[j] != '\0'; j++) {
//             if (A[i] == A[j]) {
//                 count++;
//             }
//         }

 
//         if (count > 1) {
//             printf("%c is appearing %d times\n", A[i], count);
//         }
//     }

//     return 0;
// }

//using hash table

int main() {
    char A[] = "finding";
    int i, H[26]; // H[26] is the ASCII code for lower case interval 122-97

    //Fillend the new array with zeros!
    for(i = 0; i < 26; i++){
        H[i] = 0;
    }

    for (i = 0; A[i] != '\0'; i++) {
        H[A[i] - 97] += 1;
    }

    for(i = 0; i < 26; i++){
        if(H[i] > 1){
            printf("%c is appearing %d times\n", i+ 97, H[i]);
        }
    }

    return 0;
}