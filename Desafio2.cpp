//Escreva um programa que peça dois números ao usuário e exiba 1 se o primeiro
//número for maior que o segundo e 0 caso contrário.

#include <iostream>
using namespace std;

int main () {
    int num1, num2;
    cout << "Digite um número inteiro: ";
    cin >> num1;

    cout << "\nDigite o segundo número inteiro: ";
    cin >> num2;

    cout << num1 && num2;

    return 0;
}