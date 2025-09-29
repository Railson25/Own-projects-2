#include <stdio.h>


struct Array{
    int a[11];
    int size;
    int length;
};

// One missing element start from natural number 1
// int main(){
//     struct Array arr={{1,2,3,4,5,6,8,9,10,11,12}, 10, 11};
    
//     int sum = 0;

//     for(int i = 0; i < arr.size; i++){
//         sum = sum + arr.a[i];
//     }

//     int total = arr.length * (arr.length + 1) / 2;
    
//     return printf("%d\n", total - sum);
// }


// One missing element start from any point in a sorted array
// int main(){
//     struct Array arr={{6,7,8,9,10,11,13,14,15,16,17}, 10, 11};
    
//     int low = arr.a[0];
//     int high = arr.a[arr.length - 1];

//     int diff = low - 0;

//     for(int i = 0; i < arr.size; i++){
//         if(arr.a[i] - i != diff){
//             printf("%d\n", i + diff);
//             break;
//         }
//     }
 
//     return 0;
// }

// Find more than one missing element start from any point in a sorted array
int main(){
    struct Array arr={{6,7,8,9,11,12,15,16,17,18,19}, 10, 11};
    
    int low = arr.a[0];
    int high = arr.a[arr.length - 1];

    int diff = low - 0;

    for(int i = 0; i < arr.size; i++){
        if(arr.a[i] - i != diff){
         
            while(diff < arr.a[i] - i){
                printf("%d\n", i + diff);
                diff++;
            }
        }
    }
 
    return 0;
}