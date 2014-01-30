#include "Personaje.h"

Personaje::Personaje(int hp, int puntos_de_ataque, string tipo)
{
    this->hp = hp;
    this->puntos_de_ataque = puntos_de_ataque;
    this->tipo = tipo;
}

void Personaje::imprimir()
{
    cout << "TYPE: " << tipo<< endl;
    cout << "HP: " << hp << endl;
    cout << "ATK: " << puntos_de_ataque << endl;
}

void Personaje::recibirataque(int ataque)
{
    this->hp-=ataque;
}

void Personaje::atacar(Personaje *objetivo)
{
    objetivo->recibirataque(puntos_de_ataque);
}

Personaje::~Personaje()
{
    //dtor
}
