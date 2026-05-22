#include <stdio.h>
#include <string.h>

int main(void) {
    char a[101], b[101];
    int charCodeA = 0, charCodeB = 0;
    scanf("%s %s", &a, &b);
    printf("%d\n", strcmp(a,b));
    int i=0;
    while(1){
        charCodeA = a[i];
        charCodeB = b[i];
            if(charCodeA == charCodeB){
                if(charCodeA == '\0' && charCodeB == '\0'){
                    printf("both are same\n");
                    break;
                }else{
                    i++;
                    continue;
                }
            }else if( charCodeA == '\0'){
                printf("a is smaller\n");
                break;
            }else if(charCodeB == '\0'){
                printf("b is smaller\n");
                break;
            }else if(charCodeA<charCodeB){
                printf("a is smaller\n");
                break;
            }else if(charCodeA>charCodeB){
                printf("b is smaller\n");
                break;
            }
        }

        

    return 0;
}
