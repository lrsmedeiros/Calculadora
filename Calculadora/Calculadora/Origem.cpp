#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float n1, n2;
	int operacao;

	cout << "\n\n               [ Calculadora ]" << endl;

	cout << "\n\n Informe a opera��o desejada: " << endl;

	cout << "\n [1] para Adi��o" << endl;
	cout << "\n [2] para Subtra��o" << endl;
	cout << "\n [3] para Multiplica��o" << endl;
	cout << "\n [4] para Divis�o" << endl;
	cin >> operacao;

	system("cls");

	switch (operacao)
	{
	case 1:
		cout << "Informe o n�mero desejado: " << endl;
		cin >> n1;
		cout << "Informe outro n�mero: " << endl;
		cin >> n2;
		cout << "\nO resultado da opera��o " << n1 << " + " << n2 << " � = " << n1 + n2;
		break;
	case 2:
		cout << "Informe o n�mero desejado: " << endl;
		cin >> n1;
		cout << "Informe outro n�mero: " << endl;
		cin >> n2;
		cout << "\nO resultado da opera��o " << n1 << " - " << n2 << " � = " << n1 - n2;
		break;
	case 3:
		cout << "Informe o n�mero desejado: " << endl;
		cin >> n1;
		cout << "Informe outro n�mero: " << endl;
		cin >> n2;
		cout << "\nO resultado da opera��o " << n1 << " * " << n2 << " � = " << n1 * n2;
		break;
	case 4:
		cout << "Informe o n�mero desejado: " << endl;
		cin >> n1;
		cout << "Informe outro n�mero: " << endl;
		cin >> n2;
		cout << "\nO resultado da opera��o " << n1 << " / " << n2 << " � = " << n1 / n2;
		break;
	default:
		cout << "\nOp��o inv�lida! Por favor, escolha uma op��o v�lida." << endl;
		break;
	}
	return 0;
}