#include <iostream>
using namespace std;

int main() {
    const double precoQuartoPequeno = 100.0;
    const double precoQuartoGrande = 150.0;
    const double taxaImpostos = 0.06;

    int numQuartosPequenos, numQuartosGrandes;
    
    cout << "Solicite o número de quartos pequenos: ";
    cin >> numQuartosPequenos;
    
    cout << "Solicite o número de quartos grandes: ";
    cin >> numQuartosGrandes;
    
    double custoQuartosPequenos = numQuartosPequenos * precoQuartoPequeno;
    double custoQuartosGrandes = numQuartosGrandes * precoQuartoGrande;
    double custoTotal = custoQuartosPequenos + custoQuartosGrandes;
    double impostos = custoTotal * taxaImpostos;
    
    cout.precision(2);
    cout << fixed;
    cout << "Orçamento para serviço de limpeza de carpetes:" << endl;
    cout << "Número de quartos pequenos: " << numQuartosPequenos << endl;
    cout << "Número de quartos grandes: " << numQuartosGrandes << endl;
    cout << "Preço por quarto pequeno: R$" << precoQuartoPequeno << endl;
    cout << "Preço por quarto grande: R$" << precoQuartoGrande << endl;
    cout << "Custo: R$" << custoTotal << endl;
    cout << "Imposto: R$" << impostos << endl;
    cout << "=============================" << endl;
    cout << "Orçamento Total: R$" << custoTotal + impostos << endl;
    cout << "Orçamento válido por 30 dias" << endl;

    return 0;
}
