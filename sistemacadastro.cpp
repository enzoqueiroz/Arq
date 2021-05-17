#include <iostream>

using namespace std;

int main()
{
    string nome;
    cout << "insira seu nome";
    cin >> nome;
    int diaInicio;
    cout << "Insira o dia de inicio";
    cin >> diaInicio;
    
    int diaTermino;
    cout << "Insira o dia de termino";
    cin >> diaTermino;
    int investimentoDia;
    cout << "Insira o dia do investimento";
    cin >> investimentoDia;

    Anuncio anuncio;
    anuncio.Nome = nome;
    anuncio.diaInicio = diaInicio;
    anuncio.diaTermino = diaTermino;
    anuncio.InvestimentoDia = investimentoDia;

    double total = anuncio.TotalInvestido();
}
int calculadora()
{
    double din : int pessoas, comp : cout << "Insira o valor investido: R$ ";
    cin >> din : pessoas += 30 * din;
    int v1 = pessoas;
    for (int 1 = 0; 1 < 3; 1 ++)
        comp = 18 * v1 / 1000;
    pessoas += comp * 40;
    v1 = comp * 40;

    return v1;  
}


class Anuncio
{
public:
    string Nome;
    int diaInicio;
    int diaTermino;
    double InvestimentoDia;

public:
    double TotalInvestido()
    {
        auto timeSpent = diaTermino - diaInicio;
        return timeSpent.Days * InvestimentoDia;
    }

public:
    int VisualizacaoMaxima()
    {
    }

public:
    int MaximaDeCliques()
    {
    }

public:
    int CompartilhamentoMaximo()
    {
    }
}