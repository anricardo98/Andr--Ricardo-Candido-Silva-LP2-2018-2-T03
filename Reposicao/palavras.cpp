#include <stdio>
#include <vector>
#include <string>
#include "palavras.hpp"
using namespace std;

void Palavras::setPalavra(string a){
	this->palavra = a;
}

string Palavras::getPalavra(){
	return this->palavra;
}

void Palavras::setVezes(int a){
	this->vezes = a;
}

string Palavras::getVezes(){
	return this->vezes;
}