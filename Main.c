#include <stdio.h>
#include "misfunciones.h"

int main()
{
    int num1,num2,result, sum, rest;
        printf("%ld\n",sizeof(int));
    do{
        printf("Ingrese un numero: ");
        scanf("%d ",&num1);
        printf("Ingrese un numero: ");
        scanf("%d",&num2);

        sum=sumar_enteros(num1, num2);
        rest=restar_enteros(num1, num2);

        printf("%d + %d = %d\n",num1,num2,sum);
        printf("%d - %d = %d\n",num1,num2,rest);

    }   while(num1!=0 && num2!=0);
    return 0;
}
