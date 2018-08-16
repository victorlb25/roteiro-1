#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos(){
}
void ControleDeGastos::setDespesas(Despesa despesas){
    static int i;
    this->despesas[i++]=despesas;
};
double ControleDeGastos::calculaTotalDeDespesas(){
    double despesaTotal=0;
    for(int j=0;j<100;j++){
        despesaTotal+=despesas[j].getValor();
    }
    return despesaTotal;
};
bool ControleDeGastos::existeDespesaDoTipo(std::string tipo){
    int flag=0;
    for(int j=0;j<100;j++){
        if(tipo==despesas[j].getTipoDeGasto())
            flag=1;
    }
    if(flag==1)
        return true;
    else
        return false;
};
