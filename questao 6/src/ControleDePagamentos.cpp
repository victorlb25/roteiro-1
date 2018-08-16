#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos(){
}
void ControleDePagamentos::setPagamentos(Pagamento pagamento){
    static int i;
    pagamentos[i++]=pagamento;
};
double ControleDePagamentos::calculaTotalDePagamentos(){
    double totalPagamentos=0;
    for(int j=0;j<100;j++){
        totalPagamentos+=pagamentos[j].getValorPagamento();
    }
    return totalPagamentos;
};
bool ControleDePagamentos::existePagamentoParaFuncionario(std::string funcionario){
    int flag=0;

    for(int j=0;j<100;j++){
        if(funcionario==pagamentos[j].getNomeDoFuncionario())
            flag=1;
    }
    if(flag==1)
        return true;
    else
        return false;
};
