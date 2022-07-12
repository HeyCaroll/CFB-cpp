#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
	int n1,n2,media;
	char opc;
	
	inicio:
	system("cls");
	cout << "Primeira nota: ";
	cin >> n1;
	cout << "Segunda nota: ";
	cin >> n2;
	
	media=n1+n2;
	
	if (media >= 5) {
		cout << "\nAprovado!\n";
	}
	else {
		cout << "\nReprovado!\n";
	}
	
	cout << "\nDeseja digitar mais notas? [s/n]: ";
	cin >> opc;
	
	if (opc == 's' or opc=='S');{
		goto inicio;
		}
return 0;	
}
