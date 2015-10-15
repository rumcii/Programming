/*Да се напише програма, която създава масив с всички букви от*/
/*латинската азбука. Да се даде възможност на потребител да въвежда*/
/*дума от конзолата и в резултат да се извеждат индексите на буквите от*/
/*думата.*/

#include <stdio.h>
#include <stdlib.h>

char* alphabetArray();
char* makeArray(int);

main()
{
    char *alphabet = alphabetArray();
    int i;
    int j;
    
    char word[100];
    
    printf("Emter word: ");
    scanf("%99s", word);
    
    for (i = 0; word[i] != '\0'; i++) {
        for (j = 0; alphabet[j] != '\0'; j++) {
            if (word[i] == alphabet[j]) {
                printf("%2c: %2d\n", word[i], j);
            }
        }
    }
    printf("\n");
}

char* alphabetArray()
{
    char *alphabet = makeArray(100);
    int i = 0;
    char letter = 'a';
    
    while (letter <= 'z') {
        alphabet[i++] = letter++;
    }
    alphabet[i] = '\0';
    
    return alphabet;
}

char* makeArray(int n)
{
    char* arr = (char*)malloc(n * sizeof(char));
    
    return arr;
}
