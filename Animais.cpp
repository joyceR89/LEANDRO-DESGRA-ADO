#include "Animais.hpp"

Animais:: Animais(){
    setIdade(IDADE_PADRAO);
    setSexo(sexo::FEMEA);
    setPeso(PESO_PADRAO);
}
Animais :: Animais(int age, float weight, sexo gender){
    setIdade(age);
    setSexo(gender);
    setPeso(weight);
}
 int Animais :: getIdade(){
    return Idade;
}
 bool Animais ::setIdade(int age){
     if(age >= 0 ){
         Idade = age;
         return true;
     }
     cerr << "\n ERRO: idade inválida !";
     return false;
 }

sexo Animais :: getSexo(){
    return Sexo;
}
void Animais ::setSexo(sexo gender){
    Sexo = gender;
}

float Animais ::getPeso(){
    return Peso;
}

bool Animais ::setPeso(float weight){
    if(weight >=0){
        Peso = weight;
        return true;
    }
    cerr << "\n ERRO: pseo inválido !";
    return false;
}


