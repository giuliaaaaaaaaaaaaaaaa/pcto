#include <stdio.h>

int main()


{
    int a;
scanf ( "%d", &a);

if ( a> 18 && a <30 || a>60 && a<100)
{
printf("daje\n");
}

if (! (a> 18 && a <30) || (a>60 && a<100) )
{
printf("scansati\n");
}


}
