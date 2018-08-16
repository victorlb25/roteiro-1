#ifndef DATA_H
#define DATA_H

class Data
{
    public:
        int dia, mes, ano;
        int verifier(int dia, int mes, int ano);
        void avancarDia(int dia, int mes, int ano);
    private:
};

#endif // DATA_H
