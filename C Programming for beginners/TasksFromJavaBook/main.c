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

int main()
{
    printf("Enter four digit number: ");
    scanf("%d", &iFourDigit);

    printf("\nThe sum of digits is: %d\n\n", sumOfDigits(iFourDigit));
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

    }
}
