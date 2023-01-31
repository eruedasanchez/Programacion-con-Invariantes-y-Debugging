#include <iostream>
#include "ejercicios.h"
#include <math.h>
#include <assert.h>

using namespace std;

/************* Ejercicio 1 *************/

/* Tomando el vector [2,1], el programa no me da el resultado esperado  

bool estaOrdenadoAsc(vector<int> v){
    int i = 0;
    int longitud = v.size();
    bool esMenor = true;
    while(i <= longitud-2 && esMenor){
        esMenor = v[i] <= v[i+1];
        i++;
    }
    return i == longitud-1;
}

Lo soluciono de la siguiente manera: */

bool estaOrdenadoAsc(vector<int> v){
    int i = 0;
    int longitud = v.size();
    bool esMenor = true;
    while(i <= longitud-2){
        if(v[i] > v[i+1]){
            esMenor = false;
        } 
        i++;
    }
    return esMenor;
}

/* Tomando el vector [1,2], el programa no me da el resultado esperado  

bool estaOrdenadoDesc(vector<int> v){
    int longitud = v.size();
    int i=0;
    bool esMayor = true;
    while(i <= longitud-2 && esMayor){
        esMayor = v[i] >= v[i+1];
        i++;
    }

    return i == longitud-1;
}

Lo soluciono de la siguiente manera: */

bool estaOrdenadoDesc(vector<int> v){
    int i = 0;
    int longitud = v.size();
    bool esMayor = true;
    while(i <= longitud-2){
        if(v[i] < v[i+1]){
            esMayor = false;
        } 
        i++;
    }
    return esMayor;
}

bool estaOrdenado(vector<int> v){
    int longitud = v.size();
    if (longitud == 0 || longitud == 1){
        return true;
    } else {
        return estaOrdenadoDesc(v) || estaOrdenadoAsc(v);
    }        
}

/************* Ejercicio 2 *************/

/* En el caso que tengamos un vector de longitud 1 y dicho vector este compuesto por un unico valor distinto a elemento
el programa va a retornar verdadero cuando en realidad, el resultado es falso */

bool pertenece(int elemento, vector<int> v){
    int longitud = v.size();
    if(longitud == 0){
        return false;
    } else {
        int i = 0;
        bool sigo = false;
        while((i < longitud)){
            if(v[i] == elemento){
                sigo = true;
            }
            i++;
        }
        return sigo;
    }
}

/************* Ejercicio 3 *************/

/* 
long fibonacci(int k){
    if(k == 0)[
        return 0;
    ] else if (k == 1){
        return 1;
    } else {
        long i=0;
        long j=1;
        long m;
        int nesimo;
        for(nesimo==1; nesimo<=k; nesimo++){
            m = j;
            j = i+j;
            i = m;
        }
        return j;
    }
}

Solucionamos el problema de la siguiente manera */

long fibonacci(int k){
    if (k == 0){
        return 0;
    } else if(k == 1){
        return 1;
        } else {
            return fibonacci(k-1) + fibonacci(k-2); 
        }
}

/************* Ejercicio 4 *************/

int sumaDoble(vector<int> s){
    int res = 0;
    int i = 0;
    while(i < s.size()){
        if((s[i] > 0) && (s[i] % 2 == 0)){
            res = res + (2 * s[i]);
        }
        i++;
    }
    return res;
}

/************* Ejercicio 5 *************/

bool existePico(vector<int> v){
    assert(v.size() > 2);

    int i = 1;
    bool res = false;
    while(i < v.size()-1){
        res = res || (v[i] > v[i-1] && v[i] > v[i+1]);
        i++;
    }
    return res;
}

/************* Ejercicio 6 *************/

int todosImpares(vector<int> v){
    assert(v.size() > 0);

    int res = true;
    int i = v.size()-1;
    while(i >= 0){
        res  = res && (v[i] % 2 == 1);
        i--;
    }
    return res;
}

/************* Ejercicio 7 *************/

bool esPrimo(int n){
    assert(n > 1);

    bool res = true;
    for(int i = 2; i < n; i ++){
        if(n % i == 0){
            res = false;
        }
    }
    return res;
}

int sumaPrimos(int n){
    assert(n > 2);

    int suma = 0;
    int i = 1;
    while(i <= n) {
        if (esPrimo(i)){
            suma = suma + i;
        }
        i = i + 2;
    }
    return suma;
}


/************* Ejercicio 8 *************/
int indiceMinimoSubsec(vector<int> v, int i, int j){
    assert((v.size() > 0) && (0 <= i <= j < v.size()));

    int minIndice = i;
    for(int k = 0; k < v.size(); k++){
        if(v[k] < v[minIndice]){
            minIndice = k;
        }
    }
    return minIndice;
}


/************* Ejercicio 9 *************/
int sumatoria(vector<int> v) {
    //Implementar
    return 0;
}


/************* Ejercicio 10 *************/

void ordenar(vector<int>& v){
    //Implementar
}


/************* auxiliar *************/

string mostrarVector(vector<int> v){
    string res = "[";
    for(int i = 0; i < v.size()-1; i++){
        res = res + to_string(v[i]) + ", ";
    }
    if(v.size() > 1){
        res = res + to_string(v[v.size()-1]) ;
    }
    res += "]";
    return res;
}
