#include <iostream>
#include <string>
using namespace std;

//Se declaran los metodos que se usaran para cada opcion
void fibonacci();
void rombo();
void pareimpar();
void factorial();
void fibonacciVersion2();

int main()
{
    //Inicializa variables que se usaran para el menu 
    int opcion = 0;
    bool dentroDelMenu = true;
    

    //Se realizara un ciclo por medio del cual controlaremos si el usuario ingresa una opcion no valida.
    //Se usa la variable boleana dentroDelMenu para controlar este ciclo
    while (dentroDelMenu) {
        //Imprime menu de opciones
        cout << "Menu de Opciones:" << endl << "1. Serie de Fibonacci, generacion de serie de acuerdo a la cantidad deseada." << endl << "2. Area de Rombo." << endl << "3. Numero Par o Impar." << endl << "4. Factorial." << endl << "5. Serie de Fibonacci, busqueda por numero deseado." << endl << "Ingresa el numero de la opcion deseada." << endl;
        //Ingresa la opcion deseada por el usuario
        cin >> opcion;
        //Se usa un switch para ejecutar el metodo deseado por el usuario
        switch (opcion) {
        case 1:
            //Al ingresar a esta opcion podemos cambiar el valor de la variable boleana para que el ciclo se detenga
            dentroDelMenu = false;
            //Se llama al metodo correspondiente
            fibonacci();
            break;

        case 2:
            //Al ingresar a esta opcion podemos cambiar el valor de la variable boleana para que el ciclo se detenga
            dentroDelMenu = false;
            //Se llama al metodo correspondiente
            rombo();
            break;

        case 3:
            //Al ingresar a esta opcion podemos cambiar el valor de la variable boleana para que el ciclo se detenga
            dentroDelMenu = false;
            //Se llama al metodo correspondiente
            pareimpar();
            break;

        case 4:
            //Al ingresar a esta opcion podemos cambiar el valor de la variable boleana para que el ciclo se detenga
            dentroDelMenu = false;
            //Se llama al metodo correspondiente
            factorial();
            break;

        case 5:
            //Al ingresar a esta opcion podemos cambiar el valor de la variable boleana para que el ciclo se detenga
            dentroDelMenu = false;
            //Se llama al metodo correspondiente
            fibonacciVersion2();
            break;
        }
    }
    
}

//Comienza el bloque de codigo para Fibonacci
void fibonacci() {
    //Inicializamos variables
    int suma = 1; //Inicializaremos suma en 1 para auxiliarnos al momento de imprimir los valores
    int auxiliar = 0; //Esta variable servira para realizar la adicion
    int numAnterior = 0; //En esta variable almacenaremos el valor anterior de la secuencia
    int numControl = 0; //En esta variable almacenaremos el rango deseado por el usuario

    cout << "----------" << endl << "----------" << endl;
    cout << "Introdusca el valor hasta el cual se desglozara la serie de Fibonacci" << endl;
    cin >> numControl;
    cout << "Serie de Fibonacci:" << endl;
    //Se usa el ciclo For para generar la secuencia de fibonacci, usaremos el numero de control deseado por el usuario
    for (int i = 0; i < numControl; i++)
    {
        //Imprimiremos el valor actual de suma
        cout << suma << endl;
        //Guardaremos el valor actual de la suma en numero anterior para su uso posterior
        numAnterior = suma;
        //Incrementaremos el valor de la suma agregando el valor de auxiliar
        suma = suma + auxiliar;
        //Asignaremos el valor del numero anterior al auxiliar para usarlo en la siguiente iteracion
        auxiliar = numAnterior;
        
    }

    //Retornamos al bloque donde se llamo al metodo
    return;
}

//Comienza el bloque de codigo para saber el area de un rombo
void rombo() {
    //Inicializamos variables
    double diagonalMayor, diagonalMenor, area = 0;

    //Capturaremos los datos requeridos para realizar la formula (diagonalMayor * diagonalMenor)/2
    cout << "----------" << endl << "----------" << endl;
    cout << "Introduzca el valor de la Diagonal Mayor:" << endl;
    cin >> diagonalMayor;
    cout << "Introduzca el valor de la Diagonal Menor:" << endl;
    cin >> diagonalMenor;

    //Realizamos la operacion
    area = (diagonalMayor * diagonalMenor) / 2;

    //Imprimimos el area
    cout << "El area del rombo es: " << area << endl;

    //Retornamos al bloque donde se llamo al metodo
    return;
}

//Comienza el bloque de codigo para determinar si un numero es par o impar
void pareimpar() {
    //Inicializamos variables
    int numeroIngresado, residuo = 0;

    //Capturamos los datos
    cout << "----------" << endl << "----------" << endl;
    cout << "Introduzca un valor entero para daterminar si es par o impar: " << endl;
    cin >> numeroIngresado;

    //Determinamos si el valor es par o impar usando la funcion mod
    //mod retornara el residuo de una division
    //de esta forma sabremos si se trata de un numero par (cuando retorne 0 al dividirlo entre 2)
    //o impar (cuando retorne cualquier numero difernte a 0 al dividirlo entre 2)
    residuo = numeroIngresado % 2;
    if (residuo == 0) {
        cout << "Se trata de un numero Par." << endl;
    }
    else {
        cout << "Se trata de un numero Impar." << endl;
    }

    //Retornamos al bloque donde se llamo al metodo
    return;
}

//Comienza el bloque de codigo para desglocar un numero Factorial
void factorial() {
    //Inicializaremos variables
    int valorIngresado, auxiliar = 0;
    int valorFinal = 1; //Inicializaremos el valor final en 1 para auxiliarnos al momento de realizar la operacion
    string secuencia = "";

    //Solicitamos el numero del cual realizaremos la funcion factorial
    cout << "----------" << endl << "----------" << endl;
    cout << "Introduzca el valor al que se le aplicara la funcion factorial:" << endl;
    cin >> valorIngresado;

    

    //Se usa un ciclo para realizar la operacion factorial y concatenar la secuencia consecutivamente
    //Este ciclo se ejecutara por medio de una resta en el controlador, permitiendonos realizar el proceso
    //de forma mas sencilla y facil de entender
    for (int i = valorIngresado; i > 0; i--)
    {

        //Concatenamos la secuencia
        secuencia += to_string(i);
        //Se coloca una coma de acuerdo a la iteracion, al ser la ultima iteracion, no se agregara la coma
        if (i > 1) {
            secuencia += ", ";
        }

        //Se multiplica el valor actual por el siguiente
        valorFinal *= i;

    }

    //Imprimiremos la secuencia a continuacion
    cout << "La secuencia es: " << secuencia << endl;

    //Imprimiremos el factorial
    cout << "El valor factorial es: " << valorFinal << endl;

    //Retornamos al bloque donde se llamo al metodo
    return;
}

//Comienza el bloque de codigo para Fibonacci para realizar busquedas por numero ingresado
void fibonacciVersion2() {
    //Inicializamos variables
    int suma = 1; //Inicializaremos suma en 1 para auxiliarnos al momento de imprimir los valores
    int auxiliar = 0; //Esta variable servira para realizar la adicion
    int numAnterior = 0; //En esta variable almacenaremos el valor anterior de la secuencia
    int numBuscado = 0; //En esta variable almacenaremos el numero deseado por el usuario
    bool encontrado = false; //Variable de control para el funcionamiento del ciclo while

    cout << "----------" << endl << "----------" << endl;
    cout << "Introdusca el valor que se buscara, se desglozara la serie de Fibonacci hasta encontrarlo" << endl;
    cin >> numBuscado;
    cout << "Serie de Fibonacci:" << endl;

    //Se usa el ciclo While para generar la secuencia de fibonacci, usaremos el boolean encontrado para controlarlo
    while (encontrado == false)
    {
        //Imprimiremos el valor actual de suma
        cout << suma << endl;
        //Comprobamos si ya hemos encontrado el numero deseado o si hemos encontrado un numero que lo ha superado
        if (suma >= numBuscado) {
            encontrado = true;//Dentremos el ciclo en la siguiente iteracion
            //Imprimiremos un mensaje adicional indicando si encontramos el numero o si el numero no se encuentra en la serie
            if (suma == numBuscado) {
                cout << "Numero Encontrado." << endl;
            }
            else {
                cout << "El Numero no aparece en la serie." << endl;
            }
        }
        //Guardaremos el valor actual de la suma en numero anterior para su uso posterior
        numAnterior = suma;
        //Incrementaremos el valor de la suma agregando el valor de auxiliar
        suma = suma + auxiliar;
        //Asignaremos el valor del numero anterior al auxiliar para usarlo en la siguiente iteracion
        auxiliar = numAnterior;
    }

    //Retornamos al bloque donde se llamo al metodo
    return;
}