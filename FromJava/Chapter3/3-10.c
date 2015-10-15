/*Напишете програма, която приема за вход четирицифрено число във*/
/*формат abcd и след това извършва следните действия върху него:*/
/*- Пресмята сбора от цифрите на числото.*/
/*- Разпечатва на конзолата цифрите в обратен ред: dcba.*/
/*- Поставя последната цифра, на първо място: dabc.*/
/*- Разменя мястото на втората и третата цифра: acbd.*/

#include <stdio.h>

int digitsSum(int);
int reverseNumber(int);
int lastFirst(int);
int secondThird(int);
int digitsCount(int);

int main()
{
    int n;
    
    printf("\nEnter some number: ");
    scanf("%d", &n);
    
    printf("\nSum of digits is: %d\n\n", digitsSum(n));
    printf("Reversed number is: %d\n\n", reverseNumber(n));
    printf("Last digit on first place: %d\n\n", lastFirst(n));
    printf("Reversed second and third digits: %d\n\n", secondThird(n));
}

int digitsSum(int n)
{
    int digit;
    int result = 0;
    
    while (n != 0) {
        digit = n % 10;
        
        result += digit;
        
        n = n / 10;
    }
    return result;
}

int reverseNumber(int n)
{
    int digit;
    int result = 0;
    
    while (n != 0) {
        digit = n % 10;
        result = result * 10 + digit;
        n = n / 10;
    }
    return result;
}

int digitsCount(int n)
{
    int result = 0;
    
    while (n != 0) {
        n = n / 10;
        result++;
    }
    return result;
}

int lastFirst(int n)
{
    int lastDigit;
    int count = 0;
    int result;
    
    lastDigit = n % 10;
    n = n / 10;
    
    while (count < digitsCount(n)) {
        lastDigit *= 10;
        count++;
    }
    result = lastDigit + n;
    return result;
}

int secondThird(int n)
{
    int result = 0;
    int count = 1;
    int secondDigit;
    int thirdDigit;
    int digit;
    int x = 1;
    
    while (n != 0) {
        digit = n % 10;
        if (count == 2) {
            thirdDigit = digit;
        }
        else if (count == 3) {
            secondDigit = digit;
            result = result + thirdDigit * x + secondDigit * 10;
        }
        else {
            result = digit * x + result;
        }
        n = n / 10;
        count++;
        x *= 10;
    }
    return result;
}
