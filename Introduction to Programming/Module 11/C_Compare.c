#include <stdio.h>
#include <string.h>

int main(void) {
    char a[101], b[101];
    int charCodeA = 0, charCodeB = 0;
    scanf("%s", &a);
    scanf("%s", &b);
    int i=0;
    while(1){
        charCodeA = a[i];
        charCodeB = b[i];
            if(charCodeA == charCodeB){
                if(charCodeA == '\0' && charCodeB == '\0'){
                    printf("%s", a);
                    break;
                }else{
                    i++;
                    continue;
                }
            }else if( charCodeA == '\0'){
                printf("%s", a);
                break;
            }else if(charCodeB == '\0'){
                printf("%s", b);
                break;
            }else if(charCodeA<charCodeB){
                printf("%s", a);
                break;
            }else if(charCodeA>charCodeB){
                printf("%s", b);
                break;
            }
        }

        

    return 0;
}
