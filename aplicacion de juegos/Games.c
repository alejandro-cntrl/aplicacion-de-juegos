#include <stdio.h>
#include <stdlib.h>

void menu()
{
    int Juego;

    printf("Bienvenido a diversiti \n");
    printf("menu principal \n");
    printf("para jugar piedra papel o tijeras presione 1\npara jugar preguntas de cultura presione 2\npara jugar aprendiendo presione 3\npara salir del programa presione 0\n");
    scanf("%d", &Juego);

    if (Juego == 1)
    {
        printf("Piedra papel o tijeras\n");
        azar();
    }
    if (Juego == 2)
    {
        printf("preguntas de cultura\n");
        primeraPregunta();
    }
    if (Juego == 3)
    {
        printf("aprendiendo\n");
        suma();
    }
    if (Juego == 0)
    {
        printf("saliendo\n");
        exit;
    }
    else
    {
        printf("dijite un numero valido\n");
        menu();
    }
}
void azar()
{
    srand(time(NULL));
    

    printf("Vamos a jugar piedra,papel o tijeras\ndescubre si puedes ganarle a la maquina\n");
    printf("Para ello tienes que conseguir mas de 3 puntos en el global\n");
    printf("0=papel\n1=tijera\n2=piedra\n");
    printf("elije si quieres papel,tijera o piedra\n");
    for (size_t i = 0; i < 5; i++)
    {
        int aleatorio = rand() % 3;
        int jugador;
        scanf("%d", &jugador);
        printf("%d \n", aleatorio);

        if (jugador == 0 && aleatorio == 0 || jugador == 1 && aleatorio == 1 || jugador == 2 && aleatorio == 2)
        {
            printf("empate\n");
            
        }
        else if (jugador == 0 && aleatorio == 1 || jugador == 1 && aleatorio == 2 || jugador == 2 && aleatorio == 0)
        {
            printf("pierdes\n");
            
        }
        else if (jugador == 0 && aleatorio == 2 || jugador == 1 && aleatorio == 0 || jugador == 2 && aleatorio == 1)
        {
            printf("ganaste\n");
            
        }
        else
        {
            printf("por favor ingresar una opcion valida\n");
            azar();
        }
    }
    printf("fin del juego\n");
    retorno();
}

int puntos[5];
void primeraPregunta()
{
    char respuesta;

    printf("vamos a poner aprueva tus conocimientos\n");
    printf("%cCual es el rio mas largo del mundo?\na:Rio nilo\nb:Rio amazonas\nc:Rio amarillo\nd:Rio orinoco\n", 168);
    printf("dijite su respuesta\n");
    scanf("%c", &respuesta);
    scanf("%c", &respuesta);
    if (respuesta == 'b')
    {
        printf("correcto\n");
        printf("siguiente pregunta\n");
        puntos[0] = 2;
        segundaPregunta();
    }
    else
    {
        printf("incorrecto\n");
        printf("siguiente pregunta\n");
        puntos[0] = 0;
        segundaPregunta();
    }
}

void segundaPregunta()
{
    char respuesta;

    printf("%cCual es el pais con mas habitantes del mundo?\na:Japon\nb:Rusia\nc:China\nd:Alemania\n", 168);
    printf("dijite su respuesta\n");
    scanf("%c", &respuesta);
    scanf("%c", &respuesta);
    if (respuesta == 'c')
    {
        printf("correcto\n");
        printf("siguiente pregunta\n");
        puntos[1] = 2;
        terceraPregunta();
    }
    else
    {
        printf("incorrecto\n");
        printf("siguiente pregunta\n");
        puntos[1] = 0;
        terceraPregunta();
    }
}
void terceraPregunta()
{
    char respuesta;

    printf("%cCuantas notas muisicales existen?\na:doce\nb:siete\nc:ocho\nd:15\n", 168);
    printf("dijite su respuesta\n");
    scanf("%c", &respuesta);
    scanf("%c", &respuesta);
    if (respuesta == 'a')
    {
        printf("correcto\n");
        printf("siguiente pregunta\n");
        puntos[2] = 2;
        cuartaPregunta();
    }
    else
    {
        printf("incorrecto");
        printf("siguiente pregunta\n");
        puntos[2] = 0;
        cuartaPregunta();
    }
}
void cuartaPregunta()
{
    char respuesta;

    printf("%cEn que a%co llego el hombre a la luna?\na:1969\nb:1980\nc:1959\nd:1970\n", 168, 164);
    printf("dijite su respuesta\n");
    scanf("%c", &respuesta);
    scanf("%c", &respuesta);
    if (respuesta == 'a')
    {
        printf("correcto\n");
        printf("siguiente y ultima pregunta\n");
        puntos[3] = 2;
        quintaPregunta();
    }
    else
    {
        printf("incorrecto");
        puntos[3] = 0;
        quintaPregunta();
    }
}
void quintaPregunta()
{
    char respuesta;

    printf("%cQue le dio el premio nobel a Albert Einstein?\na:ley del efecto fotoelectrico\nb:relatividad general\nc:relatividad especial\nd:unificacion de la gravedad con la termodinamica\n\n", 168);
    printf("dijite su respuesta\n");
    scanf("%c", &respuesta);
    scanf("%c", &respuesta);
    if (respuesta == 'a')
    {
        printf("correcto\n");
        puntos[4] = 4;
        puntos[5] = puntos[0] + puntos[1] + puntos[2] + puntos[3] + puntos[4];
        printf("su puntuacion final es de %d \n", puntos[5]);
        retorno();
    }
    else
    {
        printf("incorrecto");
        puntos[4] = -2;
        puntos[5] = puntos[0] + puntos[1] + puntos[2] + puntos[3] + puntos[4];
        printf("su puntuacion final es de %d\n", puntos[5]);
        retorno();
    }
}

int PuntajeTwo[3];
void multiplicar()
{
    srand(time(NULL));

    int test = rand() % 11;
    int testOne = rand() % 11;
    int resultado;
    printf("ahora vamos con la multiplicacion\n");
    printf("sus numeros a multiplicar son: %dx%d\n", test, testOne);
    printf("dijite su respuesta \n");
    scanf("%d", &resultado);

    if (resultado == test * testOne)
    {
        printf("correcto\n ganaste 2 puntos\n");
        PuntajeTwo[2] = 2;
        PuntajeTwo[3] = PuntajeTwo[0] + PuntajeTwo[1] + PuntajeTwo[2];
        printf("su puntaje es %d \n", PuntajeTwo[3]);
        retorno();
    }
    else
    {
        printf("incorrecto\n tienes 0 puntos ");
        PuntajeTwo[2] = 0;
        PuntajeTwo[3] = PuntajeTwo[0] + PuntajeTwo[1] + PuntajeTwo[2];
        printf("su puntaje es %d \n", PuntajeTwo[3]);
        retorno();
    }
}
void resta()
{
    srand(time(NULL));

    int test = rand() % 11;
    int testOne = rand() % 11;
    int resultado;
    printf("ahora vamos con la resta\n");
    printf("sus numeros a restar son: %d-%d\n", test, testOne);
    printf("dijite su respuesta \n");
    scanf("%d", &resultado);

    if (resultado == test - testOne)
    {
        printf("correcto\nganaste 2 puntos\n");
        PuntajeTwo[1] = 2;
        multiplicar();
    }
    else
    {
        printf("incorrecto\n tienes 0 puntos\n ");
        PuntajeTwo[1] = 0;
        multiplicar();
    }
}
int suma()
{
    srand(time(NULL));

    int test = rand() % 11;
    int testOne = rand() % 11;
    int resultado;
    printf("sus numeros a sumar son: %d+%d\n", test, testOne);
    printf("dijite su respuesta \n");
    scanf("%d", &resultado);

    if (resultado == test + testOne)
    {
        printf("correcto\n ganaste 2 puntos\n");
        PuntajeTwo[0] = 2;
        resta();
    }
    else
    {
        printf("incorrecto\n tienes 0 puntos\n ");
        PuntajeTwo[0] = 0;
        resta();
    }
    return 0;
}
int retorno()
{
    int opcion;

    printf("Para volver al menu presiona 1\n");
    scanf("%d", &opcion);
    if (opcion == 1)
    {
        menu();

    }
    return 0;
}
int main()
{
    menu();
    return 0;
}

