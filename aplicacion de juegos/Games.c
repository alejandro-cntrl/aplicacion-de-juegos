#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void menu(){
 int Juego;
 printf("Bienvenido a diversiti \n");
 printf("menu principal \n");
 printf("para jugar triki presione 1\npara jugar ahorcado presione 2\npara jugar sumas presione 3\n");
 scanf("%d", &Juego);

 if (Juego==1 )
 {
     printf("juegas triki");
     
 }
 if (Juego==2)
 {
     printf("juegas ahorcado");
     
 }
 if (Juego==3)
 {
     printf("juegas sumas");
    suma();
 }
}

void mulriplicar(){
    srand(time(NULL)); 

int test = rand() % 11;
int testOne = rand() % 11;
int resultado;
int puntaje;
printf("ahora vamos con la multiplicacion\n");
printf ("sus numeros a multiplicar son: %dx%d\n",test,testOne);
printf("dijite su respuesta \n");
scanf("%d",&resultado);

if (resultado == test*testOne)
{
    printf("correcto\n ganaste 2 puntos\n");
    puntaje=6;
    printf("su puntaje es %d \n", puntaje);
    retorno();
}
else{
    printf("incorrecto\n tienes 0 puntos ");
    mulriplicar();
}
}
void resta(){
srand(time(NULL)); 

int test = rand() % 11;
int testOne = rand() % 11;
int resultado;
int puntaje;
printf("ahora vamos con la resta\n");
printf ("sus numeros a restar son: %d-%d\n",test,testOne);
printf("dijite su respuesta \n");
scanf("%d",&resultado);

if (resultado == test-testOne)
{
    printf("correcto\nganaste 2 puntos\n");
   
    mulriplicar();
}
else{
    printf("incorrecto\n tienes 0 puntos\n ");
    resta();
}
}
int suma() {
srand(time(NULL)); 

int test = rand() % 11;
int testOne = rand() % 11;
int resultado;
int puntaje;
printf ("sus numeros a sumar son: %d+%d\n",test,testOne);
printf("dijite su respuesta \n");
scanf("%d",&resultado);

if (resultado == test+testOne)
{
    printf("correcto\n ganaste 2 puntos");
    resta();
}
else{
    printf("incorrecto\n tienes 0 puntos ");
    suma();
}
return 0;
}
int retorno(){
    int opcion;
    printf("¿Quieres jugar de nuevo?\nSi es asi presiona 1\nPara volver al menu presiona 2\n");
    scanf("%d",&opcion);
    if (opcion == 1)
    { 
        suma();
    }
    else{
        menu();
    }
    return 0;
}
    
int main (){
 
 menu();

    return 0;
}
