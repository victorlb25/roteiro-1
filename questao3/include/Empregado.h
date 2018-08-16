#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>

class Empregado
{
    public:
       int getSalarioAnual(float s);
       int getComAumento(float s);
       std::string getNome();
       std::string getSobrenome();
       float getSalario();

       void setNome(std::string nome);
       void setSobrenome(std::string sobrenome);
       void setSalario(float s);

    private:
        float salario;
        std::string nome;
        std::string sobrenome;
};

#endif // EMPREGADO_H
