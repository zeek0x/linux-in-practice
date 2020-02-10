#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = NULL;
    puts("before invalid access");
    *p = 114514;
    puts("after invalid access");
    exit(EXIT_SUCCESS);
}
