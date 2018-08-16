#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento
{
    private:
        double valorPagamento;
        std::string nomeDoFuncionario;
    public:
        Pagamento();
        double getValorPagamento();
        std::string getNomeDoFuncionario();
        void setValorPagamento(double valorPagamento);
        void setNomeDoFuncionario(std::string nomeDoFuncionario);
};

#endif // PAGAMENTO_H
