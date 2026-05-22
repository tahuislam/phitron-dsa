#include <stdio.h>

int main(void)
{
    char lowercase_letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i','j', 'k', 'l', 'm','n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int count[26] = {0};
    char s[100001];
    scanf("%s", &s);
    for(int i=0;i<strlen(lowercase_letters);i++){
        for(int j=0;j<strlen(s);j++){
            if(lowercase_letters[i] == s[j]){
                count[i]++;
            }
        }
    }
    for(int i=0;i<strlen(lowercase_letters);i++){
        if(count[i]!=0){
            printf("%c - %d\n", lowercase_letters[i], count[i]);
        }
    }

    return 0;
}
