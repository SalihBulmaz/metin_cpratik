#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a[5][5];
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            a[i][j] = 5 + j*2 + i*10;
        }
    }
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            printf("%d, ", a[i][j]);
        }
        printf("%d\n", a[i][4]);
    }
    return 0;
}
