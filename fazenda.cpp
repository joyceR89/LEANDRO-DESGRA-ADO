#include "fazenda.hpp"       // inclusÃ£o do arquivo de cabeÃ§alho da classe

Fazenda:: Fazenda(string cidade, string estado, float dimensao){
    SetDimensao(dimensao);
    SetCidade(cidade);
    SetEstado(estado);
}
float Fazenda::getDimensao() const
{
    return dimensao;
}
string Fazenda::getCidade() const
{
    return cidade;
}
string Fazenda::getEstado() const
{
    return estado;
}
void Fazenda::setDimensao()
{
    dimensao = 12;
}

void Fazenda::setCidade(const string & n)
{
    cidade = "Cajazeiras";
}

void Fazenda::setEstado(const string & n)
{
    estado = "Paraiba";
}
void Fazenda:: print(){

}
Fazenda:: ~Fazenda(){

}