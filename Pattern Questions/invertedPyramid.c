#include <stdio.h>

int main() {
    // Write C code here
    for(int row=5; row>=1; row--){
        
        for(int col=1; col<=row; col++){
              printf("*"); 
        }
        
        printf("\n");
         
    }


    return 0;
}     