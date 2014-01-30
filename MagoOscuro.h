#ifndef MAGOOSCURO_H
#define MAGOOSCURO_H
#include "Personaje.h"

class MagoOscuro : public Personaje
{
    public:
        MagoOscuro(int hp, int puntos_de_ataque);

        bool super_ray_activado;

        void activarpoder();
        void atacar(Personaje *objetivo);

        virtual ~MagoOscuro();
    protected:
    private:
};

#endif // MAGOOSCURO_H
