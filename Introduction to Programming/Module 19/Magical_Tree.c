#include <stdio.h>
#include <math.h>

int printTree(int n){
    int rows=((n-1)/2)+6;

    for(int i=0;i<rows;i++){

        for (int j = 1; j<rows-i; j++)
        {
            printf(" ");
        }
        
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}


int printTrunk(int n){
    int trunkWidth = n;
    int rows=((n-1)/2)+6;
    int stars = 2*rows - 1;
    int spaces = (stars-trunkWidth)/2; 
    for(int i=0;i<5;i++){
        for(int j=0;j<spaces;j++){
            printf(" ",rows);
        }
        for(int j=0;j<trunkWidth;j++){
            printf("*");

        }
        printf("\n");
    }
    return 0;
}
int main(void) {
    int n;
    scanf("%d",&n);
    printTree(n);
    printTrunk(n);

    return 0;
}
