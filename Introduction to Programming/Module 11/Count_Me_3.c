#include <stdio.h>
#include <string.h>
int main(void)
{
    int t;
    char s[100001];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int small = 0, cap = 0, digit = 0;
        scanf("%s", &s);
        for (int j = 0; j<strlen(s); j++)
        {
            if (s[j] >= 48 && s[j] <= 57)
            {
                
                digit++;
            }
            else if (s[j] >= 65 && s[j] <= 90)
            {
                cap++;
            }
            else if (s[j] >= 97 && s[j] <= 122)
            {
                small++;
            }
            if (s[j] == '\0')
            {
                break;
            }
        }
        printf("%d %d %d\n", cap, small, digit);
    }

    return 0;
}
