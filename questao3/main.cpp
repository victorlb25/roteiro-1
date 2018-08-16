#include <iostream>
#include "Empregado.h"
#include <string>
using namespace std;

int main()
{
    float salario,salarioAnual,aumento;
    std::string nome;
    std:string sobrenome;

 Empregado *emp1 = new Empregado();
 Empregado *emp2 = new Empregado();

    std::cout << "Digite o primeiro nome: "; std::cin >> nome;

    std::cout << "Digite o sobrenome: "; std::cin >> sobrenome;

    std::cout << "Digite o salario mensal: "; std::cin >> salario;
    while(salario<0){
        std::cout << "Digite o salario mensal (positivo): "; std::cin >> salario;
    }


    salarioAnual = emp1->getSalarioAnual(salario);
    std::cout << "\n O salario anual de "<< nome << "  eh: " << salarioAnual << "\n\n";

    aumento = emp1->getComAumento(salario);
    std::cout << "O salario anual de " << nome << " com 10% de aumento eh: " << aumento << "\n\n";


     std::cout << "Digite o primeiro nome: "; std::cin >> nome;

    std::cout << "Digite o sobrenome: "; std::cin >> sobrenome;

    std::cout << "Digite o salario mensal: "; std::cin >> salario;
    while(salario<0){
        std::cout << "Digite o salario mensal (positivo): "; std::cin >> salario;
    }


    salarioAnual = emp2->getSalarioAnual(salario);
    std::cout << "\n O salario anual de "<< nome << "  eh: " << salarioAnual << "\n\n";

    aumento = emp2->getComAumento(salario);
    std::cout << "O salario anual de " << nome << " com 10% de aumento eh: " << aumento << "\n\n";


}
