#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    double divisao;  // Corrigido o nome da variável e alterado o tipo para double
    n1 = 5;
    n2 = 2;
    divisao = static_cast<double>(n1) / n2;  // Garantindo que a divisão seja em ponto flutuante

    cout << divisao << endl;

    return 0;
}
