#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"

class ControleDePagamentos
{
    private:
        Pagamento pagamentos[100];
    public:
        ControleDePagamentos();
        void setPagamentos(Pagamento pagamento);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(std::string funcionario);
};

#endif // CONTROLEDEPAGAMENTOS_H
