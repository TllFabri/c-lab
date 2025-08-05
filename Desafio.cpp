// Escreva um programa que solicite dois números inteiros ao usuário e exiba a soma,
//subtração, multiplicação, divisão inteira e o resto da divisão.

#include <iostream>
using namespace std;

int main () {
    int num1, num2;
    cout << "Digite um número inteiro: ";
    cin >> num1;

    cout << "\nDigite o segundo número inteiro: ";
    cin >> num2;

    cout << "\nSoma: " << num1 + num2 << endl;
    cout << "\nMultiplicação: " << num1 * num2 << endl;
    cout << "\nDivisão: " << num1 / num2 << endl;
    cout << "\nResto: " << num1 % num2 << endl;
} 