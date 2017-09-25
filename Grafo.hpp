//
//  Grafo.hpp
//  ListaAdjacenciaGrafos
//
//  Created by Martin Franzner on 22/08/17.
//  Copyright © 2017 Martin Franzner. All rights reserved.
//

#ifndef Grafo_hpp
#define Grafo_hpp

#include <stdio.h>
#include <list>
#include <iostream>
#include "No.hpp"
#include "NoGrafo.hpp"

using namespace std;
class Grafo {
private:
    int tamanho;
    list<No>* matrizAdj;
    NoGrafo *vertice;
    
public:
    Grafo(int tamanho);//ja cria a matriz
    void criaAdjacencia(int lin, int peso, int adjasen);//bota valor na matriz
    void removeAdjacencia(int lin, int col);// bota valor como NULL
    void imprimeAdjacencia();//imprime a matriz
    int adjacentes(int linha, int v[]); //mostra o numero de adjacencias em cada linha
    void setaInformacao();
    void imprimeInformacao();
};
#endif /* Grafo_hpp */
