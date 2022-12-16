#include <stdio.h>

int main() {
    int w;
    do{
    printf("put the weith of the watermelon w= \n");
    scanf("%d",&w);}
    while(w>=100 && w<=1);
    
    
    
    if (w%2==0){
        printf("yes %d ");
    }
    else {
        printf("no %d ");
    }
    
    

    return 0;
}
