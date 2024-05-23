#include <stdio.h>

/* incremento de precio.
el programa al recibir como dato el precio de un producto, incrementa al mismo 11% si es menor 1500 y 8% en caso contrario (mayor o igual).

PRE y NPR: variables de tipo real*/

void main()
{
    float PRE, NPR;
    printf("ingrse el precio del producto: ");
    scanf("%f", &PRE);
    if(PRE < 1500)
    {
        NPR = PRE * 1.11;
    }
    else
    {
        NPR = PRE *1.08;
    }
    printf("Nuevo precio del producto: %8.2f", NPR);
    printf("\n--------------------\n");
    system("pause");
}
