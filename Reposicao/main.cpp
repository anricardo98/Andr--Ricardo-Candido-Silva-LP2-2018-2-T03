#include <stdio>
#include <vector>
#include <string>
#include "analise.hpp"
#include "palavras.hpp"

int main (int argc, char *argv){
	string arquivo;
	arquivo = argv[0];

	Analise info;

	ifstream leitor;
	leitor.open(arquivo);

	if (leitor.is_open()){
		while (leitor != eof()){
			if (){
				info.inserir_stop(leitor);
			} else (){
				info.inserir_normal(leitor);
			}

		}

	leitor.close();

	info.imprimir();


	} else {
		cout << "Falha na abertura do arquivo" << endl;
	}

	return 0;
}