#include <iostream>
#include "Personaje.h"
#include "Curador.h"
#include "Tanque.h"
#include "MagoOscuro.h"

using namespace std;

int main()
{
    Curador Curador(100,10,20);
    Tanque Tanque (200,5);
    MagoOscuro mago(80,20);

    Tanque.imprimir();

    mago.atacar(&Tanque);

    Tanque.imprimir();

    mago.activarpoder();
    mago.atacar(&Tanque);

    Tanque.imprimir();

    mago.activarpoder();
    Tanque.activarpoder();
    mago.atacar(&Tanque);

    Tanque.imprimir();


    return 0;
}
