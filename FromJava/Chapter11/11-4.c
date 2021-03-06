#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cat {
    char name[10];
    char color[10];
};

void setName(struct cat*, char*);
void setColor(struct cat*, char*);
void getName(struct cat*);
void getColor(struct cat*);
void sayMiau(struct cat*);

main()
{
    struct cat myCats[3];
    int i;
    
    char name[10];
    char color[10];
    
    for (i = 0; i < 3; i++) {
        printf("%d: Enter cat name: ", i + 1);
        scanf("%9s", name);
        printf("%d: Enter cat color: ", i + 1);
        scanf("%9s", color);
        
        setName(&myCats[i], name);
        setColor(&myCats[i], color);
    }
    
    for (i = 0; i < 3; i++) {
        getName(&myCats[i]);
        getColor(&myCats[i]);
        sayMiau(&myCats[i]);
        printf("\n");
    }
}

void setName(struct cat *mashko, char arr[])
{
    strcpy(mashko->name, arr);
}

void setColor(struct cat *mashko, char color[])
{
    strcpy(mashko->color, color);
}

void getName(struct cat *mashko)
{
    printf("%s\n", mashko->name);
}

void getColor(struct cat *mashko)
{
    printf("%s\n", mashko->color);
}

void sayMiau(struct cat *mashko)
{
    printf("%s said: Miauuuuuu!\n", mashko->name);
}
