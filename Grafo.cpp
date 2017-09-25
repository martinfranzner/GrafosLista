//
//  Grafo.cpp
//  ListaAdjacenciaGrafos
//
//  Created by Martin Franzner on 22/08/17.
//  Copyright © 2017 Martin Franzner. All rights reserved.
//

#include "Grafo.hpp"
#include <algorithm>
#include <list>
using namespace std;
Grafo::Grafo(int tamanho) {
    
    //list<string> * L = new list<string>();
    this->tamanho = tamanho;
    
    this->matrizAdj = new list<No>[tamanho];
    
    
    this->vertice[tamanho];
    for(int i = 0; i < tamanho; ++i) {
        this->vertice[i] = *new NoGrafo();
    }
    
}
void Grafo::setaInformacao(){
    string nom = "";
    for(int i=0; i<tamanho; ++i){
        cout<<"Digite a informacao do no"<<endl;
        cin>>nom;
        this->vertice[i].addAdjNome(nom);
    }
}

void Grafo::imprimeInformacao(){
    for(int i=0; i<tamanho; ++i){
        cout<<i<<" - "<<this->vertice[i].getAdjNome()<<endl;
    }
}


void Grafo::criaAdjacencia(int lin, int valor, int adjasen){
    //list<No>::iterator it=this->matrizAdj[adj].begin();
    No p;
    p.addPeso(valor);
    p.addAdj(adjasen);
    this->matrizAdj[lin].push_back(p);
}


void Grafo::removeAdjacencia(int lin, int col){
        for(list<No>::iterator it=this->matrizAdj[lin].begin();it != this->matrizAdj[lin].end(); ++it){
            advance(it,col);
            this->matrizAdj[lin].erase(it);
    }
}


void Grafo::imprimeAdjacencia(){
    cout<<"-----------------------------------"<<endl;
    for(int adj=0; adj < tamanho; adj++){
        cout<<"Linha: "<<adj<<"|| ";
        for(list<No>::iterator it=this->matrizAdj[adj].begin(); it != this->matrizAdj[adj].end(); ++it) {
            cout<<"("<<it->getAdj()<<")"<<(it->getPeso())<<" - ";
            
        }
        cout<<"\r";
    }
}

int Grafo::adjacentes(int linha, int v[]){
    int count = 0;
    for(list<No>::iterator it=this->matrizAdj[linha].begin(); it != this->matrizAdj[linha].end(); ++it){
        v[count] = it->getAdj();
        count++;
    }
    return count;
}


