#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
        char c = '#';

    for(int i=0;i<n;i++){


        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i*2+1;j++){

                printf("%c",c);

        }
        printf("\n");
        if(c == '#'){
            c = '-';
        }else{
            c = '#';
        }
        
    }
    for(int i=n-2;i>=0;i--){
        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i*2+1;j++){
                printf("%c",c);

        // }
        
        
    }
    printf("\n");
        if(c == '#'){
            c = '-';
        }else{
            c = '#';
        }

}

    return 0;
}
