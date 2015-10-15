/*Problem statement*/
/*You have been given a secret mission where you must break the enemy's code. You have already figured out that they encode messages using the following method. Each letter between 'a' and 'z', inclusive, is assigned a distinct two-digit number between 01 and 26, inclusive. A message is encoded by simply replacing each letter with its assigned number. For example, if 't' is assigned 20, 'e' is assigned 05 and 's' is assigned 19, then the message "test" is encoded as "20051920". All original messages contain only lowercase letters. */
/*Given assignment of numbers to letters and the encoded message, you need to figure out the original message.*/

#include <stdio.h>

#define MAXSIZE 50

char code[MAXSIZE];
int codeList[MAXSIZE];
int countNumers = 0;

char* secretCode(int*, int);
int* uncode(int);
void reverse(int*, int);

main()
{
/*    int i = 01;*/
/*    char c = 'a';*/
/*    */
/*    while (i <= 26) {*/
/*        if (i < 10) {*/
/*            printf("0%d - %c\n", i++, c++);*/
/*        }*/
/*        else {*/
/*            printf("%d - %c\n", i++, c++);*/
/*        }*/
/*    }*/
/*    */
/*    int b = 1;*/
/*    printf("\n%03d\n", b);*/
/*    */
/*    printf("\n");*/

    int i;
    int number;
    int *numbers;
    
    printf("Enter code: ");
    scanf("%d", &number);
    
    printf("\n%d\n", number);
    
    uncode(number);
    
    for (i = 0; i < countNumers; i++) {
        printf("%d ", codeList[i]);
    }
    printf("\n");
    
    secretCode(codeList, countNumers);
    
    printf("%s\n", code);
}

char* secretCode(int arr[], int n)
{
    char c = 'a';
    int i;
    
    for (i = 0; i < n; i++) {
        code[i] = c + (arr[i] - 1);
    }
    code[i] = '\0';
    
    return code;
}

int* uncode(int n)
{
    int digits;
    
    while (n != 0) {
        digits = n % 100;
        
        codeList[countNumers++] = digits;
        
        n = n / 100;
    }
    reverse(codeList, countNumers);
    
    return codeList;
}

void reverse(int arr[], int n)
{
    int i;
    
    for (i = 0; i < n; i++, n--) {
        int temp = arr[i];
        arr[i] = arr[n - 1];
        arr[n - 1] = temp;
    }
}
