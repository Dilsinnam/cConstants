#include <stdlib.h>
#include <stdio.h>

int main()
{
    const int num = 5; /*const makes it so the variable CANNOT be modified*/
    const int FAV_NUM = 15; /*setting a random name to the constant*/
    printf("%d\n", num);
    /*num = 8; Change value to 8, does not work because a constant was set*/
    printf("%d", FAV_NUM);
    printf("Messi\n"); /*considered a constant because you can't modify it*/
    printf("%d\n", 70); /*also considered a constant*/
    return 0;
}