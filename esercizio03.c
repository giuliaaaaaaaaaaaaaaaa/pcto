 #include <stdio.h>
 
int main()

{
    int b;

    printf ("che anno sei?");
    scanf("%d", &b);
    
    if (b>1969) 
    {
        printf ("sei nat* %d anni dopo il primo atterragio sulla luna\n", b-1969);
    }

    else if (b<1969)
    {
        printf ("sei nat* %d anni prima del primo atterraggio sulla terra\n", 1969-b);
    }

    if (b==1969)
    {
        printf("wow! anno del primo atterraggio sulla luna");
    }
}    