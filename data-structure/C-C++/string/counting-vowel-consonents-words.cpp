#include <stdio.h>

//Counting vowels and consonants
// int main(){
//     char A[] = "How are you";
//     int i, vCount = 0, cCount = 0;
    
//     for(i = 0; A[i] != '\0'; i++){
//         if(A[i] == 'a' || A[i] == 'A' ||A[i] == 'e' || A[i] == 'E' ||A[i] == 'i' ||A[i] == 'I' ||A[i] == 'o' ||A[i] == 'O' ||A[i] == 'u' ||A[i] == 'U'){
//             vCount++;
//         }else if((A[i] >= 65  && A[i] <= 90) ||(A[i] >= 97  && A[i] <= 122)){
//             cCount++;
//         }
//     }

//     printf("The number of vowels is %d and the number of consonants is %d", vCount,cCount);
//     return 0;
// }


//Counting Words
int main(){
    char A[] = "How are you";
    int i, world = 0;
    
    for(i = 0; A[i] != '\0'; i++){
        if(A[i] == ' ' && A[i - 1] != ' '){
            world++;
        }
    }

    printf("The number of worlds is %d",world + 1);
    return 0;
}