//Escreva um programa que peça ao usuário dois números e exiba 1 se ambos forem
//positivos e 0 caso contrário.


#include <iostream>
using namespace std;

int main () {
    int num1, num2;
    cout << "Digite um número inteiro: ";
    cin >> num1;

    cout << "\nDigite o segundo número inteiro: ";
    cin >> num2;

    cout << ((num1 > 0 && num2 > 0)? 1 : 0) << endl;

}