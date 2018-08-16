#include <iostream>
#include "ControleDeGastos.h"

int main()
{
    Despesa agua;
    Despesa luz;
    ControleDeGastos mesJaneiro;
    std::string tipo;

    agua.setTipoDeGasto("agua");
    agua.setValor(50.50);
    luz.setTipoDeGasto("luz");
    luz.setValor(300.67);

    mesJaneiro.setDespesas(agua);
    mesJaneiro.setDespesas(luz);

    std::cout<<mesJaneiro.calculaTotalDeDespesas()<<std::endl;
    std::cout<<"Digite o tipo de despesa que desejas procurar:";
    std::cin>>tipo;
    if(mesJaneiro.existeDespesaDoTipo(tipo)==true)
        std::cout<<"Sim"<<std::endl;
    else
        std::cout<<"Nao"<<std::endl;

    return 0;
}
