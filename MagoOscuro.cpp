#include "MagoOscuro.h"

MagoOscuro::MagoOscuro(int hp, int puntos_de_ataque)
{
    this->tipo = "Mago Oscuro";
    this->hp = hp;
    this->puntos_de_ataque = puntos_de_ataque;
    this->super_ray_activado = false;
}


void MagoOscuro::activarpoder()
{
    this->super_ray_activado = true;
}

void MagoOscuro::atacar(Personaje *objetivo)
{
    if(super_ray_activado == false)
    {
        objetivo->recibirataque(this->puntos_de_ataque);
    }
    else
    {
        objetivo->recibirataque(this->puntos_de_ataque*2);
    }
        super_ray_activado = false;
}

MagoOscuro::~MagoOscuro()
{
    //dtor
}










