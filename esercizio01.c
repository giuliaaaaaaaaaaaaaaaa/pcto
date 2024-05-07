#include <stdio.h>

 int main()

{
    int a;
    int b;
    
    a=18;

    printf("%d", a);
    scanf("%d", &b);

    if (a>b)
    {
        printf ("minorenne");
    }

    else if (a<b)
    {
        printf ("maggiorenne");
    }

    else if (a==b)
    {
        printf ("maggiorenne");
    }

}