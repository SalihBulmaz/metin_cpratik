#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAXLEN 50
int main(void)
{
    char *s[5];
    for (size_t i = 0; i < 5; i++)
    {
        s[i] = malloc(MAXLEN);
        itoa(i * 1201 + 331, s[i], 10);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%s\n", s[i]);
    }
    
    return 0;
}
