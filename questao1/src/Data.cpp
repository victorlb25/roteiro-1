#include "Data.h"

int Data::verifier(int d, int m, int a){

    if(d>=1 && d<=31){
        if(m>=1 && m<=12){
            if(a>0) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

void Data::avancarDia(int d, int m, int a){

    if(d>=1 && d<=30){
        this->dia = d+1;
        this->mes = m;
        this->ano = a;
    }
    else if(d==31 && m!=12){
        this->dia = 1;
        this->mes = m+1;
        this->ano = a;
    }
    else if(d==31 && m==12){
        this->dia = 1;
        this->mes = 1;
        this->ano = a+1;
    }

}
