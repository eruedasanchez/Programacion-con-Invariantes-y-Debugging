#ifndef EJERCICIOS_INCLUDED_H
#define EJERCICIOS_INCLUDED_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool estaOrdenadoAsc(vector<int> v);
bool estaOrdenadoDesc(vector<int> v);
bool estaOrdenado(vector<int> v);

bool pertenece(int elemento, vector<int> v);

long fibonacci(int k);

int sumaDoble(vector<int> v);

bool existePico(vector<int> v);

int todosImpares(vector<int> v);


bool esPrimo(int n);
int sumaPrimos(int n);

int indiceMinimoSubsec(vector<int>& v, int i, int j);

int sumatoria(vector<int> v);

void intercambiar(vector<int> &v, int indice, int minimo);
void ordenar(vector<int>& v);


string mostrarVector(vector<int> v);

#endif // EJERCICIOS_INCLUDED_H


