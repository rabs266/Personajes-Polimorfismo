#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>

using namespace std;

class Personaje
{
    public:
        int hp;
        int puntos_de_ataque;
        string tipo;

        Personaje()
        {
            //Constructor vacio a huevos tiene que ir
        }

        Personaje(int hp, int puntos_de_ataque, string tipo);

        virtual ~Personaje();

        void imprimir();
        virtual void recibirataque(int ataque);
        virtual void activarpoder() = 0;
        virtual void atacar(Personaje *objetivo);

    protected:
    private:
};

#endif // PERSONAJE_H
