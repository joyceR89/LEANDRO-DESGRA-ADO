#ifndef _ANIMAIS_HPP_
#define _ANIMAIS_HPP_
#include <iostream>
#include <string>
#define IDADE_PADRAO 0
#define PESO_PADRAO 0

using namespace std;
enum sexo
{
    MACHO,
    FEMEA
};

class Animais{

public:

    Animais();

    Animais(int age = IDADE_PADRAO, float weight = PESO_PADRAO, sexo gender =  sexo::FEMEA);

    virtual int getIdade();
    virtual bool setIdade(int );
    sexo getSexo();
    virtual void setSexo(sexo);
    virtual float getPeso();
    virtual bool setPeso(float);

protected:
    int Idade;
    sexo Sexo;
    double Peso;

};
#endif