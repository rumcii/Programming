#include <stdio.h>
#include <stdlib.h>

int c;

int *test(int);

main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b = 5;
    //test(b);
    printf("%p\n%d\n", &b, b);
/*    printf("%p\n", test(&b));*/
    
    int *c = test(b);
    
    //*c = test(&b);
    
    printf("%p\n%d\n%p\n", c, *c, &c);
}

int *test (int a)
{
/*    printf("%p\n%d\n", a, *a);*/
    c = a + 1;
    //а = 8;
    
    //printf("a: %p\n%d\n", &a, a);
    
    return &c;
}
