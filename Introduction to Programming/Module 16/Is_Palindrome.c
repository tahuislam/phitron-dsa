#include <stdio.h>

int is_palindrome(char s[])
{
    int status = 0;
    int length = strlen(s);
    for (int i = 0; i < length; i++){
        int rear = length - i-1;
        if(rear>=i){
            if(s[rear] == s[i]){
                status = 1;
            }else{
                status = 0;
                break;
            }
        }else if(rear<i){
            break;
        }
    
    }
    return status;
}

int main(void)
{
    char s[1001];
    scanf("%s", &s);
    int status = is_palindrome(s);
    if(status == 1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }

    return 0;
}
