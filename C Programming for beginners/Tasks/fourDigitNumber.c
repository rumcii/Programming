//Напишете програма, която приема за вход четирицифрено число във
//формат abcd и след това извършва следните действия върху него:
//- Пресмята сбора от цифрите на числото.
//- Разпечатва на конзолата цифрите в обратен ред: dcba.
//- Поставя последната цифра, на първо място: dabc.
//- Разменя мястото на втората и третата цифра: acbd.


#include <stdio.h>
#include <stdlib.h>

int iFourDigit;
int sumOfDigits(int);
int reverseDigit(int);
int lastDigitFirst(int);
int twoThree(int);

int main()
{
    printf("Enter four digit number: ");
    scanf("%d", &iFourDigit);

    printf("\nThe sum of digits is: %d\n\n", sumOfDigits(iFourDigit));
    printf("The reverse number is: %d\n\n", reverseDigit(iFourDigit));
    printf("Last digit on the top: %d\n\n", lastDigitFirst(iFourDigit));
    printf("Reverse two and three digits: %d\n\n", twoThree(iFourDigit));
}

int sumOfDigits(iFourDigit)
{
    int iResult = 0;
    int iDigit;
    int n = iFourDigit;

    while (n != 0) {
        iDigit = n % 10;

        iResult += iDigit;

        n = n / 10;
    }
    return iResult;
}

int reverseDigit(iFourDigit)
{
    int n = iFourDigit;
    int iResult = 0;
    int iDigit;

    while (n != 0) {
        iDigit = n % 10;

        iResult = iResult * 10 + iDigit;

        n = n / 10;
    }

    return iResult;
}

int lastDigitFirst(iFourDigit)
{
    int iResult = 0;
    int iDigit;
    int n = iFourDigit;

    iDigit = n % 10;

    n = n / 10;

    iResult = iDigit * 1000 + n;

    return iResult;
}

int twoThree(iFourDigit)
{
    int iResult = 0;
    int n = iFourDigit;
    int iDigit;
    int iSecondDigit;
    int iThirdDigit;
    int iFourthDigit;
    int iCounter = 0;

    while (1) {
        iDigit = n % 10;
        
        n = n / 10;

        if (iCounter == 0) {
            iFourthDigit = iDigit;
        } else if (iCounter == 1) {
            iThirdDigit = iDigit;
        } else {
            iSecondDigit = iDigit;
            break;
        }

        iCounter++;
    }

    iResult = n * 1000 + iThirdDigit * 100 + iSecondDigit * 10 + iFourthDigit;

    return iResult;
}