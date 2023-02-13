#include <iostream>
#include <string>
#include "Porcos.hpp"

int Porcos :: N_Porcos=0;

Porcos :: Porcos(int age, float weight, sexo gender, float KgPrice)
        : Animais(age, weight, gender)
{
    setValorDoKg(KgPrice);
    N_Porcos++;
}

float Porcos :: getValorDoKg() const{
    return ValorDoKg;
}

void Porcos :: setValorDoKg(float KgPrice){
    ValorDoKg = KgPrice ;
}

string Porcos :: emitir_som(){
    return "oinc oinc";
}

void Porcos ::movimentar(){
    float w = Peso - (Peso * 0.003);

    if(w <= 2){
        setPeso(w);
    }
}

void Porcos :: alimentar(){
    if(Peso + 2 < 120)
    {
        Peso = Peso + 2;
    }
}

int Porcos :: getN_Patos(){
    return N_Porcos;
}

float Porcos :: Preco_Estimado(){
    return Peso*ValorDoKg;
}

void Porcos ::print(){
    cout<< "Tipo de animal: Boi"<< endl;
    cout<<"Peso: "<< Peso << endl;
    cout<<"idade: "<< Idade << endl;
    cout<<"Sexo: "<< Sexo << endl;
    cout<<"Valor do Kilo: "<< ValorDoKg << endl;
    cout<<"Som do animal: "<< emitir_som() << endl;
}

Porcos :: ~Porcos(){
    N_Porcos--;
}