#include <stdio.h>
#include <stdlib.h>


int main(){
    int A[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    
    //Dividing the total number of bytes in an array by the number of bytes of a single element gives the number of elements in the array.
    int n = (int)(sizeof(A) / sizeof(A[0])); 

    int l =  A[0]; // declaring the lower number
    int h =  A[0]; // declaring the higher number

    //Finding the lowest and highest number
    for(int i = 1; i < n; i++){
        int x  = A[i];

        if(x < l){
            l = x;
        }

        if(x > h){
            h = x;
        }
    }

    //creating the new array with the size of our higher element
     int *H = (int *)malloc((h + 1) * sizeof(int));

     //Checking if we have our memory allocated!
     if (H == NULL) {
        perror("malloc failed");
        return 1;
    }

     //Initializing the new array with 0
     for(int i = 0; i <= h; i++){
        H[i] = 0;
     }
   
     //Incrementing the new array with number 1 using element
     //os Array A as index from array H
    for(int i = 0; i < n; i++){
        H[A[i]] = 1;
    }
 
    //Scanning array H and imprint the missing elements/index
    for(int i = l; i <= h; i++){
        if(H[i] == 0) printf("%d\n", i);
    }

    //Releasing the memory 
    free(H);

    return 0;
}