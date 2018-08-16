#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
    public:
        int getInvoiceAmount(int p, int q);

        int getNumero();
        float getPreco();
        float getQuantidade();
        std::string getDescricao();

        void setNumero(int n);
        void setPreco(float p);
        void setQuantidade(float q);
        void setDescricao(std::string dsc);

    private:
        int numero;
        float quantidade, preco;
        std::string descricao;
};

#endif // INVOICE_H
