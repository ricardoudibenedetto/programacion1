float suma(float a, float b)
{

 float resultado;

 resultado=(float)a+b;

 return resultado;


}
float resta(float a, float b)
{
 float resultado;

 resultado=(float)a-b;

 return resultado;
}

float division(float a, float b)
{
 float resultado;

 resultado=(float)a/b;

 return resultado;
}

float multiplicar(float a, float b)
{
 float resultado;

 resultado=(float)a*b;

 return resultado;
}
long factorial(int aux)
{
   int contador;
   long result = 1;

   for( contador = 1 ; contador <=aux ; contador++ )
         result = result*contador;

   return ( result );
}
