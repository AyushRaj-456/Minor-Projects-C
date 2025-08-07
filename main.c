#include <stdio.h>

int pattern(int);
int pattern(int){
    printf("*");
    return 0;
}

int main() {
    int i;
    
    printf("Right angled star pattern :\n");
    for(i=1;i<6;i++){
    for(int j=0;j<i;j++){
        pattern(j);
    }   
        printf("\n");
    }
    printf("\n");
    
    printf("Inverted triangle star pattern :\n");
    for(i=5;i>0;i--){
    for(int j=0;j<i;j++){
        pattern(j);
    }   
        printf("\n");
    }
    return 0;
}