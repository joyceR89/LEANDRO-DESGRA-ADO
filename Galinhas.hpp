#ifndef _GALINHAS_HPP_
#define  _GALINHAS_HPP_
#include <iostream>
#include <string>
#include "Animais.hpp"

using namespace std;

class Galinhas: public Animais{
    public:

        Galinhas(int age, float weight, sexo gender, float KgPrice);
        ~Galinhas();
        void print(sexo gender);

        virtual string emitir_som(sexo gender);
        virtual void movimentar();
        virtual void alimentar();

        float getValorDoKg() const;
        void setValorDoKg(float );
        static int getN_Galinhas();
        float Preco_Estimado();

    private:
        float ValorDoKg{};
        static float preco;
        static int N_Galinhas;


};
#endif
