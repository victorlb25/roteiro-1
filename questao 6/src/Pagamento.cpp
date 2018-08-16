#include "Pagamento.h"

Pagamento::Pagamento(){
    valorPagamento=0.0;
    nomeDoFuncionario="";
}
double Pagamento::getValorPagamento(){
    return valorPagamento;
};
std::string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
};
void Pagamento::setValorPagamento(double valorPagamento){
    this->valorPagamento=valorPagamento;
};
void Pagamento::setNomeDoFuncionario(std::string nomeDoFuncionario){
    this->nomeDoFuncionario=nomeDoFuncionario;
};
