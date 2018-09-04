/*
 * ordenacion.cc
 *
 *  Created on: 9 ago. 2016
 *      Author: MTorterolo
 */

#include "ordenacion.hh"

void SelectionSort(int* a, int n) {
   int min, tmp;
   for (int i = 0; i < n - 1; i++) {
      min = i;
      for (int j = i + 1; j < n; j++) {
         if (a[j] < a[min])
            min = j;
      }

      // Intercambio de elementos
      tmp = a[i];
      a[i] = a[min];
      a[min] = tmp;
   }
}

void InsertionSort(int* a, int n) {
   int i, j, aFiltrar;
   for (i = 1; i <= n - 1; i++) {
      aFiltrar = a[i];
      j = i - 1;
      while (j >= 0 && a[j] > aFiltrar) {
         a[j + 1] = a[j];
         j--;
      }
      a[j + 1] = aFiltrar;
   }
}
