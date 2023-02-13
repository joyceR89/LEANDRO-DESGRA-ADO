#include <iostream>
#include <string>
#include "Bois.hpp"

int Bois :: N_Bois=0;

Bois :: Bois(int age, float weight, sexo gender, float KgPrice)
: Animais(age, weight, gender)
{
    setValorDoKg(KgPrice);
    N_Bois++;
}

float Bois :: getValorDoKg() const{
    return ValorDoKg;
}

void Bois :: setValorDoKg(float KgPrice){
    ValorDoKg = KgPrice;
}

string Bois::emitir_som(){
    cout<<"muuuu"<<endl;
}

void Bois::movimentar(){
    float w = Peso - Peso* 0.004;

    if(w <= 300){
        setPeso(w);
    }
}

void Bois:: alimentar(){
    if(Peso + 5 < 600)
    {
        Peso = Peso + 5;
    }
}

int Bois :: getN_Bois(){
    return N_Bois;
}

float Bois :: Preco_Estimado(){
    return Peso*ValorDoKg;
}

void Bois :: print(){
    cout<< "Tipo de animal: Boi"<< endl;
    cout<<"Peso: "<< Peso << endl;
    cout<<"idade: "<< Idade << endl;
    cout<<"Sexo: "<< Sexo << endl;
    cout<<"Valor do Kilo: "<< ValorDoKg << endl;
    cout<<"Som do animal: "<< emitir_som() << endl;
}

Bois :: ~Bois(){
    N_Bois--;
}
