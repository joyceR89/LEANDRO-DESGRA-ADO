#ifndef _PORCOS_HPP_
#define  _PORCOS_HPP_
#include <iostream>
#include <string>
#include "Animais.hpp"

using namespace std;

class Porcos: public Animais {

public:
    Porcos(int age, float weight, sexo gender, float KgPrice);

    ~Porcos();

    void print();

    virtual string emitir_som();

    virtual void movimentar();

    virtual void alimentar();

    float getValorDoKg() const;

    void setValorDoKg(float);

    static int getN_Patos();

    float Preco_Estimado();

private:
    float ValorDoKg{};
    static float preco;
    static int N_Porcos;

};
#endif
