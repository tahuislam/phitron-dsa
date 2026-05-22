#include <stdio.h>
#include <string.h>
int main(void) {
    char s[100001];
    int count;
    scanf("%s", &s);
    for(int i=0;i<strlen(s);i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            continue;
        }else{
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}
