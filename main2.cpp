#include<iostream>     // Biblioteca padrão para entrada e saída de dados
#include<locale.h>     // Biblioteca para configuração de localização (acentuação e caracteres especiais)
using namespace std;   // Permite o uso dos elementos do namespace std sem precisar prefixá-los com std::

int main() {
    setlocale(LC_ALL, "Portuguese");   // Configura a localidade para o idioma português (suporte a acentos)
    
    string like;    // Declara uma variável do tipo string para armazenar a entrada do usuário
    
    cout << "Deixa o like e se inscreva aí, mano" << endl;  // Exibe uma mensagem para o usuário
    cin >> like;   // Captura a entrada do usuário e armazena na variável 'like'
    
    cout << "Obrigado!" << endl;  // Exibe uma mensagem de agradecimento
    
    return 0;  // Retorna 0 indicando que o programa foi executado com sucesso
}
