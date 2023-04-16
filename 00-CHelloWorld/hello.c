#include <stdio.h>

int main(void)
{

    printf("Hello World! \n");

    FILE *HelloWorld = fopen("output.txt", "wt");

    printf(HelloWorld, "Hello World");
}
