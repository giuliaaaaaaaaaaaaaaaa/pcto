#include <stdio.h>

 int main()

{
    int a;
    int b;
    int c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if ((b+c>a)&&(a+c>b)&&(a+b>c))
    {
        printf ("triangolo\n");
        if ((a==b) && (b==c)) 
        {
            printf ("equilatero\n");
        }
        else if ((a==c)||(a==b)||(b==c))
        {
            printf ("isoscele\n");
        }
        else  
        {
            printf ("scaleno\n");
        }
    }
    else 
    {
        printf ("no triangolo\n");
    }
}    