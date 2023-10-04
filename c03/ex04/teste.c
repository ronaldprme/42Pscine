#include<stdio.h>
#include<string.h>

int main(void)
{
    char src[40] = "ousar sonhar, ousar realizar";
    char to_find[40] = "sonhar";
    printf("%s", strstr(src, to_find));
    return (0);
}