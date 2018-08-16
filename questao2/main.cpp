#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

int main()
{
    int numero;
    float quantidade, preco, faturaTotal;
    std::string descricao;

    Invoice *inv1 = new Invoice();

    std::cout << "Digite o numero: "; std::cin >> numero;
    inv1->setNumero(numero);
    std::cout << "Digite a quantidade: "; std::cin >> quantidade;
    inv1->setQuantidade(quantidade);
    std::cout << "Digite o preco: "; std::cin >> preco;
    inv1->setPreco(preco);

    std::cout << "Digite a descricao: "; std::getline( std::cin, descricao);
    inv1->setDescricao(descricao);

    faturaTotal = inv1->getInvoiceAmount(preco, quantidade);


    std::cout << "A fatura total eh: " << faturaTotal << "\n\n";

    return 0;
}
