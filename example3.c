#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAXLEN 100

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        printf("Not enough arguments");
        return EXIT_FAILURE;
    }

    printf("%s", argv[1]);
    FILE *fp = fopen(argv[1], "r");
    char *line;
    fgets(line, 50, fp);
    printf("%s\n", line);
    fgets(line, 50, fp);
    printf("%s\n", line);
    fgets(line, 50, fp);
    printf("%s\n", line);
    fclose(fp);
    return 0;
}
