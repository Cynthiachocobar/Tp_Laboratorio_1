#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



#endif // FUNCIONES_H_INCLUDED

/**
* \ brief recibe dos variables int
* \ param guarda la primera variable int en num1
* \ param guarda la segunda variable ingresada en num2
* \ param realiza la suma entre ambos numeros
* \ return retorna el resultado de la suma
*/

int suma(int num1,int num2)
{
    int suma = 0;

    suma= num1 + num2;
    return suma;
}

/**
* \ brief recibe dos variables int
* \ param guarda la primera variable int en num1
* \ param guarda la segunda variable ingresada en num2
* \ param realiza la resta entre ambos numeros
* \ return retorna el resultado de la resta
*/


int resta(int num1,int num2)
{
    int resta =0;

    resta= num1- num2;
    return resta;
}

/**
* \ brief recibe dos variables int
* \ param guarda la primera variable int en num1
* \ param guarda la segunda variable ingresada en num2
* \ param realiza la multiplicacion entre ambos numeros
* \ return retorna el resultado de la multiplicacion
*/


int multip (int num1,int num2)
{
    int multip =0;

    multip = num1*num2;
    return multip;
}

/**
* \ brief recibe dos variables int
* \ param guarda la primera variable int en num1
* \ param guarda la segunda variable ingresada en num2
* \ param realiza la division entre ambos numeros
* \ param evalua si la variable int ingresada en num2 es diferente a 0
* \ param si es diferente realiza la operacion
* \ param y si no muestra el mensaje "La division por 0 no esta definida"
* \ return retorna el resultado de la division
*/
float division (float num1, float num2)
{
    float division =0;

    division=(float)num1/num2;
    if (num1!=0)
    {
        float division =0;
        division=(float)num1/num2;
    }
    else
    {
        printf("La division por 0 no esta definida\n");
    }
    return division;
}

/** brief recibe una variable int
* \ param guarda la variable int en num1
* \ param calcula el factorial del numero ingresado
* \ param evalua si el numero guardado en la variable num1 es menor a 0
* \ param muestra el mensaje "El factorial de numeros negativos no esta definido"
* \ return el factorial
*/

int factorial(int num1)
{
int fact;
    if(num1==1)
    {
    return 1;
    }
    else
    {
    fact=num1* factorial(num1-1);

    }
        if(num1<0)
        {
            printf("El factorial de numeros negativos no esta definido\n");
        }

    return fact;
}


