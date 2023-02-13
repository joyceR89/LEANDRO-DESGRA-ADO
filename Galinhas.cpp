#include <iostream>
#include <string>
#include "Galinhas.hpp"

int Galinhas :: N_Galinhas = 0;

Galinhas :: Galinhas(int age, float weight, sexo gender, float KgPrice)
        : Animais(age, weight, gender)
{
    setValorDoKg(KgPrice);
    N_Galinhas++;
}

float Galinhas :: getValorDoKg() const{
    return ValorDoKg;
}

void Galinhas ::setValorDoKg(float KgPrice){
    ValorDoKg = KgPrice;
}

string Galinhas ::emitir_som(sexo gender){
    if(gender == MACHO){
        return "cococoricóooo";
    }
    else{
        return "cocó cocó";
    }

}

void Galinhas ::movimentar(){
    float w = Peso - Peso* 0.001;

    if(w <= 0.9){
        setPeso(w);
    }
}

void Galinhas ::alimentar(){
    if(Peso + 0.2 < 1.8)
    {
        setPeso(Peso + 0.2);
    }
}

int Galinhas ::getN_Galinhas(){
    return N_Galinhas;
}

float Galinhas :: Preco_Estimado(){
    return Peso*ValorDoKg;
}

void Galinhas :: print(sexo gender){
    cout<< "Tipo de animal: Galinha"<< endl;
    cout<<"Peso: "<< Peso << endl;
    cout<<"idade: "<< Idade << endl;
    cout<<"Sexo: "<< Sexo << endl;
    cout<<"Valor do Kilo: "<< ValorDoKg << endl;
    cout << "Som do animal: "<< emitir_som(gender);
}

Galinhas :: ~Galinhas(){
    N_Galinhas--;
}



