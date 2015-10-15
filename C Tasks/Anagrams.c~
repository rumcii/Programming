/*Problem statement*/
/*Given two words, verify whether they are anagram or not. Two strings are anagrams if they are rearrangements of the same set of letters. for example , the words 'creative'and 'reactive' have same set of letters, so they are anagrams.*/

/*Input*/
/*First line of input will contain a number T = number of test cases. Next T lines will contain two words each separated by a space.*/

/*Output*/
/*For each pair of words, print "YES", if they are anagrams, else print "NO"*/

# include <stdio.h>

#define MAXLINE 1000

int findSecondString(char []);
int anagram(char[]);


int main()
{
    char arr[MAXLINE];

    printf("T = ");
    scanf("%s", arr);
    
    if (anagram(arr)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}

int findSecondString(char arr[])
{
    int i;
    
    for (i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == ' ') {
            return i + 1;
        }
    }
    return -1;
}

int anagram(char arr[])
{
    int i;
    int j;
    int check;
    
    for (i = 0; arr[i] != ' '; i++) {
        check = 0;
        for (j = findSecondString(arr); arr[j] != '\0'; j++) {
            if (arr[i] == arr[j]) {
                check = 1;
            }
        }
        if (check = 0) {
            return -1;
        }
    }
    return 1;
}
