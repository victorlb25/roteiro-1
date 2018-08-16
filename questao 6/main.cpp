#include <iostream>
#include "ControleDePagamentos.h"

using namespace std;

int main()
{
    Pagamento joao;
    Pagamento maria;
    ControleDePagamentos mesFevereiro;
    std::string nome;

    joao.setNomeDoFuncionario("joao");
    maria.setNomeDoFuncionario("maria");
    joao.setValorPagamento(500.0);
    maria.setValorPagamento(670.50);

    mesFevereiro.setPagamentos(joao);
    mesFevereiro.setPagamentos(maria);

    std::cout<<mesFevereiro.calculaTotalDePagamentos()<<std::endl;
    std::cout<<"Digite o nome do funcionario que desejas pesquisar: ";
    std::cin>>nome;
    if(mesFevereiro.existePagamentoParaFuncionario(nome)==true)
        std::cout<<"Sim"<<std::endl;
    else
        std::cout<<"Nao"<<std::endl;

    return 0;
}
