#include "Empregado.h"

int Empregado::getSalarioAnual(float s){
 return s*12;
}

int Empregado::getComAumento(float s )
{
    return (((s*10)/100)+s)*12;
}

float Empregado::getSalario(){
  return this->salario;
}
void Empregado::setSalario(float s){
       this->salario = s;
}
