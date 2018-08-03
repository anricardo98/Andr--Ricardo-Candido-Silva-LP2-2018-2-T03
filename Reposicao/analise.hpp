#include <stdio>
#include <vector>
#include <string>
using namespace std;

class Analise{
protected:
	vector<Palavras*> stop_words;
	vector<Palavras*> dados;

public:
	void inserir_stop(palavras *a);
	void inserir_normal(palavras *a);
	void imprimir();
};