//Generador de números aleatorios

#include <stdio.h>

//Librerias necesarias para hacer los números aleatorios
#include <stdlib.h>
#include <time.h>

int main(){
    //Limite superior(desde 0 hasta n número)
        srand(time(NULL)); //Inicializar el generador de números aleatorios 
        printf("Numero en el rango 0 a 10: %i\n\n", rand()%11);  //Los numeros pueden ser 0, 1, 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10

    //Ejemplo: rand()%6, devovlera los numeros 0, 1 , 2 , 3 , 4 o 5

    //Limite superior e inferior (desde n hasta m número)
        //Se puede asignar a una varible si se desea
        int otro= rand()%11 + 20; //(Numeros entre 0 - 10) + 20, rango de 20 a 30
        printf("Numero en el rango 20 a 30: %i\n\n", otro);

    //En el caso de ciclos, lo correcto es inicializar el generador fuera del ciclo que se vaya a usar(while, for, do-while)
        //Si el generador esta dentro del ciclo, siempre devolvera el mismo numero 
        int array[5];
        for (int i = 0; i < 5; i++){
            //srand(time(NULL)); //---> Desbloquear en caso de ver lo que ocurre si se declara dentro del ciclo
            array[i] = rand()%13;
        }
        
        for (int i = 0; i < 5; i++){
            printf("Numero en la posicion #%i del arreglo: %i\n", i, array[i]);
        }
    
    return 0;
}