#include <iostream>
#include "Pessoa.h"

int main()
{
  	Pessoa pessoa1("Victor");

  	std::cout<<pessoa1.getNome()<<" "<<pessoa1.getIdade()<<" "<<pessoa1.getTelefone()<<std::endl;
	pessoa1.setIdade(18);
	std::cout<<pessoa1.getNome()<<" "<<pessoa1.getIdade()<<" "<<pessoa1.getTelefone()<<std::endl;
	pessoa1.setTelefone(986708044);
	std::cout<<pessoa1.getNome()<<" "<<pessoa1.getIdade()<<" "<<pessoa1.getTelefone()<<std::endl;

    return 0;
}
