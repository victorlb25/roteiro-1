#include "Despesa.h"

Despesa::Despesa(){
    valor=0.0;
    tipoDeGasto="";
}
double Despesa::getValor(){
    return valor;
};
std::string Despesa::getTipoDeGasto(){
    return tipoDeGasto;
};
void Despesa::setValor(double v){
    valor=v;
};
void Despesa::setTipoDeGasto(std::string t){
    tipoDeGasto=t;
}
