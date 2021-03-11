#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float n1, n2;
	int operacao;

	cout << "\n\n               [ Calculadora ]" << endl;

	cout << "\n\n Informe a operação desejada: " << endl;

	cout << "\n [1] para Adição" << endl;
	cout << "\n [2] para Subtração" << endl;
	cout << "\n [3] para Multiplicação" << endl;
	cout << "\n [4] para Divisão" << endl;
	cin >> operacao;

	system("cls");

	switch (operacao)
	{
	case 1:
		cout << "Informe o número desejado: " << endl;
		cin >> n1;
		cout << "Informe outro número: " << endl;
		cin >> n2;
		cout << "\nO resultado da operação " << n1 << " + " << n2 << " é = " << n1 + n2;
		break;
	case 2:
		cout << "Informe o número desejado: " << endl;
		cin >> n1;
		cout << "Informe outro número: " << endl;
		cin >> n2;
		cout << "\nO resultado da operação " << n1 << " - " << n2 << " é = " << n1 - n2;
		break;
	case 3:
		cout << "Informe o número desejado: " << endl;
		cin >> n1;
		cout << "Informe outro número: " << endl;
		cin >> n2;
		cout << "\nO resultado da operação " << n1 << " * " << n2 << " é = " << n1 * n2;
		break;
	case 4:
		cout << "Informe o número desejado: " << endl;
		cin >> n1;
		cout << "Informe outro número: " << endl;
		cin >> n2;
		cout << "\nO resultado da operação " << n1 << " / " << n2 << " é = " << n1 / n2;
		break;
	default:
		cout << "\nOpção inválida! Por favor, escolha uma opção válida." << endl;
		break;
	}
	return 0;
}