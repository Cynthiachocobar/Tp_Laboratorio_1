#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int suma (int num1,int num2);
int resta (int num1,int num2);
int multip (int num1,int num2);
float division (float num1,float num2);
int factorial (int num1);

int main()
{
 //* brief declaro las variables.
  /*param
  */
    int num11=0;
    int num22=0;
    int auxiliar;
    float auxiliard;
    int opcion;
    char seguir='s';



//*brief: muestro menu.
  /* param
*/
    do
    {


        printf("1- Ingresar 1er operando A=%d\n",num11);
        printf("2- Ingresar 2do operando B=%d\n",num22);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);
        fflush(stdin);
        //* brief: Pido los numeros al usuario.
        /* param:
        */

         switch(opcion)
        {
            case 1:
                printf("Ingrese el primer operando:\n");
                scanf("%d",&num11);
                break;
            case 2:
                printf("Ingrese un segundo numero:\n");
                scanf("%d",&num22);
                break;
            case 3:
                auxiliar= suma(num11,num22);
                printf("La suma es: %d \n",auxiliar);

                break;
            case 4:
                auxiliar= resta(num11,num22);
                printf("La resta es:%d\n",auxiliar);
                break;
            case 5:
                auxiliar= multip (num11,num22);
                printf("La multiplicacion es:%d\n",auxiliar);
                break;
            case 6:
                auxiliard = division(num11, num22);
                printf("La division es:%f \n",auxiliard);
                break;
            case 7:
                auxiliar= factorial (num11);
                printf("El factorial es:%d\n",auxiliar);
                break;
            case 8:
                auxiliar= suma(num11,num22);
                printf("La suma es:%d\n",auxiliar);

                auxiliar= resta(num11,num22);
                printf("La resta es:%d",auxiliar);

                auxiliar= multip (num11,num22);
                printf("La multiplicacion es:%d",auxiliar);

                auxiliar = division(num11, num22);
                printf("La division es:%d",auxiliar);

                auxiliar= factorial (num11);
                printf("El factorial es:%d",auxiliar);

                break;

            case 9:
                seguir='n';
                break;
        }
    }while(seguir=='s');

    return 0;
}
