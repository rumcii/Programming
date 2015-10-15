//word counting

#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
    int c;
    int wordCount = 0;
    int charCount = 0;
    int blankCount = 0;
    int tabCount = 0;
    int newLineCount = 0;
    int state;
    
    state = OUT;
    
    while ((c = getchar()) != EOF) {
        ++charCount;
        if (c == '\n') {
            ++newLineCount;
        } else if (c == '\t') {
            ++tabCount;
        } else if (c == ' ') {
            ++blankCount;
        }
        
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++wordCount;
            printf("\n");
            putchar(c);

        } else {
            putchar(c);
        }
    }
    
    printf("Blanks: %d\nTabs: %d\nNew lines: %d\nCharacters: %d\nWords: %d\n", blankCount, tabCount, newLineCount, charCount, wordCount);
    
        return 0;
}
