#pragma once
#include"cCajero.h"
class cCajXP:public cCajero
{
    int ContFallas;
public:
  
    cCajXP();
    ~cCajXP();

    bool IntroTarjeta(cTarjeta* tarjeta);
    cTarjeta* DevTarjeta();
    void Extraer();
    void CantOperaciones() const;
};

