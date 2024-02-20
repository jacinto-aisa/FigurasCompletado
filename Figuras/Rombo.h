#pragma once
#include "Figura.h"
ref class Rombo : public Figura
{
	private:
		int ladoLargo;
		int ladoCorto;

	public:
		int dameLadoLargo();
		void ponLadoLargo(int valorLadoLargo);
		Rombo(int ladoLargo, int ladoCorto, int x, int y);
		float damePerimetro() override;
		float dameSuperficie() override;
};


