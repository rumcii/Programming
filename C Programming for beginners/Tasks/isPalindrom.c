// n a com.hackbulgaria.51.week1 package, create a IntegerPalindrome class, where you:

// read one integer n from the standard input
// Output "YES" if the sum of n and the reversed number n is palindrome.
// Output "NO" otherwise.
// An integer n is palindrome if you reverse it and get the same number n.

// For example, 121 is a palindrome.

// Examples

// Input:

// 123
// Output:

// We have to calculate 123 + 321 = 444 and check if 444 is a palindrome.

// YES
// Input:

// 5
// Output:

// We have to calculate 5 + 5 = 10 and check if 10 is a palindrome.

// NO

#include <stdio.h>

int reverse(int);
char isPalindrome(int);

main()
{
	char a[3] = {'y', 'e', 's'};
	printf("\n%s\n", a);
}

// int reverse(int a)
// {
// 	int b = a;
// 	int iReverse = 0;

// 	while (b != 0) {
// 		int iDigit = b % 10;

// 		iReverse = iReverse * 10 + iDigit;

// 		b = b / 10;
// 	}

// 	return iReverse;
// }

// char isPalindrome(int a)
// {
// 	char result[3];
// 	if (reverse(a) == a) {
// 		result = "YES";
// 		return result;
// 	}
// 	result = "NO";
// 	return result;
// }