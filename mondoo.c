#include <stdio.h>


{
 char nome[5]={'s','a','r','a','\0'};
 int i=0;

 while (nome[i]!='\0')
{
    printf("%c", nome[i]);
    i=i+1;
    //oppure//
    printf("%s", nome);
    //oppure//
    char nome2[]="ciao come stai";
}
}