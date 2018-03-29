/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void swap(int *a, int *b) {
    int *temp;
    printf("temp=%d(*=%d)(&=%d), a=%d(*=%d)(&=%d), b=%d(*=%d)(&=%d)\n", temp, *temp, &temp, a, *a, &a, b, *b, &b);
    temp = a;
    printf("temp=%d(*=%d)(&=%d), a=%d(*=%d)(&=%d), b=%d(*=%d)(&=%d)\n", temp, *temp, &temp, a, *a, &a, b, *b, &b);
    a = b;
    printf("temp=%d(*=%d)(&=%d), a=%d(*=%d)(&=%d), b=%d(*=%d)(&=%d)\n", temp, *temp, &temp, a, *a, &a, b, *b, &b);
    b = temp;
    printf("temp=%d(*=%d)(&=%d), a=%d(*=%d)(&=%d), b=%d(*=%d)(&=%d)\n", temp, *temp, &temp, a, *a, &a, b, *b, &b);
}

int main()
{
    int x, y;
    x=1;
    y=2;
    
    printf("x=%d, y=%d", x, y);
    swap(&x, &y);
    printf("x=%d, y=%d", x, y);
    
    return 0;
}
