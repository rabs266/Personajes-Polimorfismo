#include "Tanque.h"

Tanque::Tanque(int hp, int puntos_de_ataque)
{
    this->tipo = "Tanque";
    this->hp = hp;
    this->puntos_de_ataque = puntos_de_ataque;
    this->escudo_activado = false;
}

void Tanque::activarpoder()
{
    this->escudo_activado = true;
}

void Tanque::recibirataque(int ataque)
{
    if(escudo_activado == true)
    {
        this->hp -= ataque/2;
    }
    else
    {
        this->hp -= ataque;
    }
        escudo_activado = false;
}

Tanque::~Tanque()
{
    //dtor
}
