#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[]){
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;

	cout << "Digite o nome do joador 1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do joador 2:" << endl;
	cin >> jog2;

	cout << " o                 o" << endl;
	cout << ".T./             \\.T." << endl;
	cout << " ^                 ^" << endl;
	cout << jog1 << "             " << jog2 << endl;
	cout << "Vida: " << vida1 << "        " << "Vida: " << vida2 << endl;

	int dado6;

	srand(1234);
	//Gera uma numero aleatório entre 1 e 6
	dado6 = rand() % 100 + 1;
	//Causa um dano igual ao valor gerado em "dado"
	vida1 = vida1 = dado6;

	//Mesma coisa para jogador 2
	dado6 = rand() % 100 + 1;
	vida2 = vida2 = dado6;

	return 0;
}