
float factorial(float num1);

float factorial(float num1)
{
    float respuesta;

    if(num1 == 1)
    {
        return 1;
    }

    respuesta = num1 * factorial(num1 - 1);

    return respuesta;
}


float suma(float A, float B);

float suma(float A, float B)
{
    float respuesta;

    respuesta = A + B;
    printf("La suma da: %.2f\n", respuesta);

    return respuesta;
}


float resta(float A, float B);

float resta(float A, float B)
{
    float respuesta;

    respuesta = A - B;
    printf("La resta da: %.2f\n", respuesta);

    return respuesta;
}




float multiplicar(float A, float B);

float multiplicar(float A, float B)
{
    float respuesta;

    respuesta = A * B;
    printf("La multiplicacion da: %.2f\n", respuesta);

    return respuesta;
}



float division(float A, float B);

float division(float A, float B)
{
    float respuesta;

    respuesta = A / B;

    if(B == 0)
    {
        printf("ERROR, vuelva a ingresar numero\n");
    }
    else
    {
        printf("La division da: %.2f\n", respuesta);
    }


    return respuesta;


}


