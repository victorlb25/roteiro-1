#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"

class ControleDeGastos
{
    private:
        Despesa despesas[100];

    public:
        ControleDeGastos();
        void setDespesas(Despesa despesas);
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo(std::string tipo);
};

#endif // CONTROLEDEGASTOS_H
