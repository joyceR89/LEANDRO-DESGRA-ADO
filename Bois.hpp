#ifndef _BOIS_HPP_
#define  _BOIS_HPP_
#include <iostream>
#include <string>
#include "Animais.hpp"

using namespace std;

class Bois: public Animais
{
public:

    Bois(int age, float weight, sexo gender, float KgPrice);
    ~Bois();
    void print();

    virtual string emitir_som();
    virtual void movimentar();
    virtual void alimentar();

    float getValorDoKg() const;
    void setValorDoKg(float );
    static int getN_Bois();
    float Preco_Estimado();

private:
    float ValorDoKg{};
    static float preco;
    static int N_Bois;
};
#endif