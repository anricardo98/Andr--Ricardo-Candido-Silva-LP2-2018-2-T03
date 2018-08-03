#include <stdio>
#include <vector>
#include <string>
using namespace std;

class Palavras{
protected:
	string palavra;
	int vezes;
public:
	void setPalavra(string a);
	string getPalavra();
	void setVezes(int a);
	string getVezes();
};
