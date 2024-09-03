//Trabalho feito por: Kauã Araujo Serrano e Luan Simão Fernandes. 
#include <iostream> //Biblioteca que estamos utilizando.
using namespace std;// Para não ter que declarar cout nem cin.

// Função para calcular o Fatorial.
double fatorial(int n)
{
    double resultado = 1;
    for (int i = 1; i <= n; ++i)
    {
        resultado *= i;
    }
    return resultado;
}
// Função para calcular o Arranjo Simples.
double arranjoSimples(int n, int r)
{
    if (r > n)
    {
        cout<< "Erro: r não pode ser maior que n.";
        return -1; // Retorna um valor indicando erro.
    }
    return fatorial(n) / fatorial(n - r);// Chama a função fatorial para calcular o 'n' e o 'r'.
}
// Função para calcular a Combinação Simples.
double combinacaoSimples(int n, int r)
{
    if (r > n)
    {
        cout<< "Erro: r não pode ser maior que n.";
        return -1; // Retorna um valor indicando erro.
    }
    return fatorial(n) / (fatorial(r) * fatorial(n - r));// Chama a função fatorial para calcular o 'n' e o 'r'.
}

int main()
{
    // Aqui nos declaramos as variaveis que iremos utiliar para o usuario conseguir escolher que tipo de conta ele quer fazer.
    int escolha, r, n;
    // Nos fizemos uma identificação para o usuario conseguir escolher que tipo nde calculo ele quer fazer, como o 1 (Fatorial) 2 (Arranjo Simples) 3 (Combinação Simples).
    cout<< "Essa eh uma calculadora.\nVoce deseja fazer que calculo: \nFatorial(1)\nArranjo Simples(2)\nCombinacao Simples(3) \nEscolha:";
    cin>> escolha;
    if (escolha == 1)// Escolha 1(fatorial).
    {
        double numero;
     
        // Escolha do numero.
        cout << "Digite um numero para calcular o fatorial: ";
        cin >> numero;

        if (numero < 0)
        {
            cout << "Fatorial nao eh funcional para numeros negativos.";
        }
        else
        {
            cout << "O fatorial de " << numero << " eh " << fatorial(numero) << ".";// Chama a função Fatorial para calcular o Numero escolhido
            return 0;
        }
    }
    else if (escolha == 2)// Escolha 2(arranjo simples).
    {
        // Aqui o programa pergunta os valores que o usuario queira utilizar, ele vai escolher o valor de n e de r.
        cout << "De um valor para n: \n";
        cin >> n;

        cout << "De um valor para r: \n";
        cin >> r;

        // Aqui chamamos a função para fazer conta entre n e r, e definimos a função utilizando a variavel "resultado" para sair a conta entre o n e o r.
        double resultado = arranjoSimples(n, r);
       
        // Verifica se o calculo foi bem sucedido
        if (resultado != -1)
        {
            cout << "O valor do arranjo simples A(" << n << ", " << r << ") eh: " << resultado << ".";
        }

        return 0;
    }

    else if (escolha == 3)// Escolha 3 (Combinação simples).
    {
        // Aqui o programa pergunta os valores que o usuario queira utilizar, ele vai escolher o valor de n e de r.
        cout << "De um valor para n: \n";
        cin >> n;

        cout << "De um valor para r: \n";
        cin >> r;

        // Aqui chamamos a função para fazer conta entre n e r, e definimos a função utilizando a variavel "resultado" para sair a conta entre o n e o r.
        double resultado = combinacaoSimples(n, r);
        
        // Verifica se o calculo foi bem sucedido
        if (resultado != -1)
            cout << "O valor da Combinacao Simples C(" << n << ", " << r << ") eh: " << resultado << ".";

        return 0;// Indica que o código terminou.
    }
}