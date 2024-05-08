#include <stdio.h>

int main()


{

    int b = 0;
    int num2[100];

    while (b < 100)
    {
        printf("inserisci un numero\n");
        scanf("%d", &num2[b]);

        b = b + 1;
    }
}
