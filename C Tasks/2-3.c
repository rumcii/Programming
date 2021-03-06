/*Exercise 2-3. Write a function htoi(s) , which converts a string of hexadecimal digits*/
/*(including an optional 0x or 0X ) into its equivalent integer value. The allowable digits are 0*/
/*through 9 , a through f , and A through F .*/

#include <stdio.h>

int power(int);
int hexToInt(char);

main()
{
    int i = 0;
    char arr[10];
    int count = 0;
    int result = 0;
    int c;
    
    printf("\nEnter digits from 0 to 9 or letters from a to f or A to F:\n");
    while ((c = getchar()) != EOF) {
        if (c != '\n' && c != '\t' && c != ' ') {
            arr[i] = c;
            //printf("%c\n", arr[i]);
            i++;
        }
    }
    arr[i] = '\0';
    count = i - 1;
    //printf("%d\t%d\n", i, count);
    
    printf("The hex number is: %s\n", arr);
    
    //printf("%d\n", hexToInt('c'));
    
    for(i = 0; count >= 0; i++) {
        //printf("%d\n", hexToInt(arr[count]));
        result += hexToInt(arr[count]) * power(i);
        count--;
    }
    printf("\nNumber in decimal is: %d\n\n", result);
}

int power(int b)
{
    int result = 1;
    
    while (b > 0) {
        result = result * 16;
        b--;
    }
    
    return result;
}

int hexToInt(char a)
{
    if (a >= '0' && a <= '9') {
        return a - '0';
    }
    else {
        if (a == 'a' || a == 'A') {
            return 10;
        }
        else if (a == 'b' || a == 'B') {
            return 11;
        }
        else if (a == 'c' || a == 'C') {
            return 12;
        }
        else if (a == 'd' || a == 'D') {
            return 13;
        }
        else if (a == 'e' || a == 'E') {
            return 14;
        }
        else if (a == 'f' || a == 'F') {
            return 15;
        }
    }
    return 0;
}
