#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* myName();

main()
{
    char *I = (char*)malloc(6 * sizeof(char));
    
    //strcpy(I, myName());
    I = myName();
    printf("%s\n", I);
}

char* myName()
{
    char *name = (char*)malloc(6 * sizeof(char));
    name = "Rumen";
    return name;
}
