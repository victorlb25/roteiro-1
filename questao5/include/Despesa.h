#ifndef DESPESA_H
#define DESPESA_H
#include <string>

class Despesa
{
    private:
        double valor;
        std::string tipoDeGasto;

    public:
        Despesa();
        double getValor();
        std::string getTipoDeGasto();
        void setValor(double v);
        void setTipoDeGasto(std::string t);
};

#endif // DESPESA_H
