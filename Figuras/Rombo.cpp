#include "pch.h"
#include "Rombo.h"

int Rombo::dameLadoLargo()
{
    return this->ladoLargo;
}

void Rombo::ponLadoLargo(int valorLadoLargo)
{
    if (valorLadoLargo < 1)
        this->ladoLargo = 1;
    else
        this->ladoLargo = valorLadoLargo;
}

Rombo::Rombo(int ladoLargo, int ladoCorto, int x, int y): Figura (x,y)
{
    this->ponLadoLargo(ladoLargo);
    this->ladoCorto = ladoCorto;
}

float Rombo::damePerimetro()
{
    return (ladoLargo + ladoCorto) * 2;
}

float Rombo::dameSuperficie()
{
    return ladoLargo * ladoCorto;
}


