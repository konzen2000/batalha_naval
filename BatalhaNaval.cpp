#include <iostream>
#include <string>

const int TAM = 10;
const int DESTROIER = 2;
const int SUBMARINO = 3;
const int CRUZADOR = 3;
const int ENCOURACADO = 4;
const int PORTAAVIAO = 5;

using namespace std;

void mostraTabulerio(char matriz[][]);
void inserirBarco1(int * TAM);
int main() {

	return 0;
}

void mostraTabulerio(char matriz[][]) {
	for(unsigned int i = 0; i < TAM; i++) {
		for(unsigned int j = 0; j < TAM; j++) {
			cout << "***Tabuleiro do menino" << endl;
			cout << matriz[i][j] << endl;
		}
	}
}

void inserirBarco1(int * TAM) {
	int linha, coluna, i, j;
	cout << "Qual linha posicionar o barco? (0 - 9)";
	cin >> linha;
	if(linha < * TAM && linha >= 0) {
		cout << "Qual coluna posicionar o barco? (0 - 9)";
		cin >> coluna;
		if(coluna < * TAM && coluna >= 0) {
		}
	}
}
