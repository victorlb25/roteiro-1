#include "Invoice.h"

int Invoice::getInvoiceAmount(int p,int q)
{
    if(p<=0) {
            p=0.0;
   } else if(q<0){
        q=0;
    }
    return p*q;
}

int Invoice::getNumero(){
    return this->numero;
}

void Invoice::setNumero(int n){
    this->numero = n;
}

float Invoice::getPreco(){
    return this->preco;
}

void Invoice::setPreco (float p){
    this->preco = p;
}

float Invoice::getQuantidade(){
    return this->quantidade;
}

void Invoice::setQuantidade(float q){
    this->quantidade = q;
}

std::string Invoice::getDescricao(){
    return this->descricao;
}

void Invoice::setDescricao(std::string dsc){
    this->descricao = dsc;
}
