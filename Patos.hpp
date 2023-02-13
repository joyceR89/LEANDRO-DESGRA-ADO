#ifndef _PATOS_HPP_
#define  _PATOS_HPP_
#include <iostream>
#include <string>
#include "Animais.hpp"

using std:: cout;

class Patos: public Animais
{
public:
    Patos(int age, float weight, sexo gender, float KgPrice);
    ~Patos();
    void print();

    virtual string emitir_som();
    virtual void movimentar();
    virtual void alimentar();

    float getValorDoKg() const;
    void setValorDoKg(float );
    static int getN_Patos();
    float Preco_Estimado();

private:
    float ValorDoKg;
    static float preco;
    static int N_Patos;


};
#endif