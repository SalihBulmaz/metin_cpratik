#include <stdlib.h>
#include <stdio.h>
#define MAXLEN 50

void rstrip(const char* src, char* dst) {
    int len = 0;
    while(src[len] != '\0') {
        len++;
    }

    for (size_t i = 0; i < len; i++)
    {
        dst[i] = src[i];
    }

    while(dst[len-1] == ' ') {
        dst[len-1] = '\0';
        len--;
    }
}

void lstrip(const char *src, char *dst) {

    int first = 0;  // index of first non-space character
    while (src[first] == ' ') {
        first++;
    }
    int i = 0;
    while (src[first] != '\0') {
        dst[i] = src[first];
        first++;
		i++;		// increment, decrement, ...
    }
    dst[i] = '\0'; 		//|  dennis ritchie    |

}

void strip(const char* src, char* dst) {
    lstrip(src, dst);
    char dst2[MAXLEN];
    rstrip(dst, dst2);
    int i = 0;
    while(dst2[i] != '\0') {i++;}
    for (size_t j = 0; j < i; j++)
    {
        dst[i] = dst2[i];
    }
    dst[i] = '\0';
}

int main(int argc, char const *argv[])
{
    char s[MAXLEN];
    s = "  metin a ";
    char test[MAXLEN];
    strip(s, test);
    printf("normal: |%s|\nstripped: |%s|\n", s, test);
    return 0;
}
