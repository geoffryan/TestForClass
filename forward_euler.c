#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int i;
    for(i=0; i< 100; i++)
    {
        printf("%lg %lg\n", (double)i, sin(i));
    }

    printf("Hello!\n");

    return 0;
}
