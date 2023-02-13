#include <iostream>
#include <string>
#include "Patos.hpp"


int Patos :: N_Patos=0;

Patos :: Patos(int age, float weight, sexo gender, float KgPrice)
        : Animais(age, weight, gender)
{
    setValorDoKg(KgPrice);
    N_Patos++;
}

float Patos :: getValorDoKg() const{
    return ValorDoKg;
}

void Patos ::setValorDoKg(float KgPrice){
    ValorDoKg = KgPrice ;
}

string Patos ::emitir_som(){
    return "quá quá";
}

void Patos ::movimentar(){
    float w = Peso - (Peso* 0.002);

    if(w <= 2){
        setPeso(w);
    }
}

void Patos :: alimentar(){
    if(Peso + 0.5 < 4.5)
    {
        Peso = Peso + 0.5;
    }
}

int Patos :: getN_Patos(){
    return N_Patos;
}

float Patos :: Preco_Estimado(){
    return Peso*ValorDoKg;
}

void Patos :: print(){
    cout<< "Tipo de animal: Boi"<< endl;
    cout<<"Peso: "<< Peso << endl;
    cout<<"idade: "<< Idade << endl;
    cout<<"Sexo: "<< Sexo << endl;
    cout<<"Valor do Kilo: "<< ValorDoKg << endl;
    cout<<"Som do animal: "<< emitir_som() << endl;
}

Patos :: ~Patos(){
    N_Patos--;
}
