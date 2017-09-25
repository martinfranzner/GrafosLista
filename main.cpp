//
//  main.cpp
//  ListaAdjacenciaGrafos
//
//  Created by Martin Franzner on 22/08/17.
//  Copyright © 2017 Martin Franzner. All rights reserved.
//

#include <iostream>
#include <list>
#include <string>
#include "Grafo.hpp"
#include "No.hpp"
#include "NoGrafo.hpp"


using namespace std;

int main(int argc, const char * argv[]) {
    
    
    int size = 3;
    int vet[size];
    
    Grafo *g = new Grafo(size);
    g->setaInformacao();
    g->criaAdjacencia(2, 13, 0);
    g->criaAdjacencia(2, 23, 1);
    g->criaAdjacencia(0, 8, 1);
    g->criaAdjacencia(1, 12, 2);
    g->imprimeAdjacencia();
    //g->removeAdjacencia(1, 0);
    g->imprimeAdjacencia();
    
    int x = g->adjacentes(2, vet);
    
    cout<<"Numero de adajacencias na linha eh: "<<x<<endl;
    
    cout<<"vetor = [";
    for(int i=0; i < x; ++i){
        cout<<vet[i]<< ",";
    }
    cout<<"]"<<endl;
    
    return 0;
}
