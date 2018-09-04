/*
 * main.cc
 *
 *  Created on: 9 ago. 2016
 *      Author: MTorterolo
 */

#include <iostream>
#include <limits.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>
#include "ordenacion.hh"

using namespace std;

void crearArreglo(int *a, int N) {
   const float MAX = 10000;

   cout << "--- ARRAY DE INT ---\n";

   // asigna la semilla para la funcion que
   // obtiene numeros aleatorios
   srand(time(0));
   for (int i = 0; i < N; i++) {
      // se asigna a la posicion i del vector a un valor aleatorio
      // entre 1 y MAX.
      a[i] = (MAX * rand()) / (RAND_MAX + 1.0);
      cout << a[i] << " ";
   }
   cout << "\n\n";
}

void pruebaSelectionSort(int *a, int N) {
   int valor = INT_MIN;

   cout << "--- SELECTION SORT ---\n";
   SelectionSort(a, N);
   for (int i = 0; i < N; i++) {
      assert(valor <= a[i]);
      valor = a[i];
      cout << a[i] << " ";
   }
   cout << "\n\n";
}

void pruebaInsertionSort(int *a, int N) {
   int valor = INT_MIN;

   cout << "--- INSERTION SORT ---\n";
   InsertionSort(a, N);
   for (int i = 0; i < N; i++) {
      assert(valor <= a[i]);
      valor = a[i];
      cout << a[i] << " ";
   }
   cout << "\n\n";
}

int main() {
   const int N = 500;
   int *a = new int[N];

   crearArreglo(a, N);
   pruebaSelectionSort(a, N);
   pruebaInsertionSort(a, N);

   delete a;
   return 0;
}

