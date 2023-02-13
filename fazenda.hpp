#ifndef _FAZENDA_HPP_
#define _FAZENDA_HPP_

#include <string>

using namespace std;

// Classe Fazenda
class Fazenda
{
public:
    Fazenda(string cidade, string estado, float dimensao);
    ~Fazenda();
    float getDimensao() const;          // metodo get atributo dimensao
    string getCidade() const;

    string getEstado() const;

    void setDimensao(const float & n);  // metodo set atributo dimensao
    void setCidade(const string & n);

    void setEstado(const string & n);
    void print();
protected:
    float dimensao;            // atributo protegido dimensao
    string cidade;

    string estado;
};

#endif