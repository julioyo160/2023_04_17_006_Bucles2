// 2023_04_17_006_Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//JULIO CESAR ESPINOZA VASQUEZ
//
//

#include <iostream>

int main()
{
    //Ciclo infinito.... hasta que se deje de cumplir la condición...
    bool credito = true;
    int aux = 0;
    while (credito)//Evalua la veracidad de la sentencia
    {
        std::cout << "Tienes crédito \n";
        aux = aux + 1;
        if (aux == 10)
        {
            credito = false;
        }
    }

    //Do While - se ejecuta forzozamente 1 vez.
    do {
        std::cout << "Quieres continuar?\n 0.- No 1.- si\n";
        std::cin >> credito;
    } while (credito);

    //For Ciclo de mayor control porque depende de 3 variables en su declaración
    // 1.- Variable de inicial; 2.- El Límite, 3.- Paso de variable aumento o disminución
    for (int i = 0; i < 10; i++) //i++ significa avance de 1 en 1. 
    {
        std::cout << "El contador va en: " << i << std::endl;
    }


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
