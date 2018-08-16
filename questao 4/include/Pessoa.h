#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class Pessoa
{
    private:
        std::string nome;
        int idade;
        int telefone;

    public:
        Pessoa(std::string n);
        Pessoa(std::string n, int i, int t);
        std::string getNome();
        int getIdade();
        int getTelefone();
        void setNome(std::string n);
        void setIdade(int i);
        void setTelefone(int t);
};

#endif // PESSOA_H
