#include <cmath>
#include <iostream>
#include <locale>
using namespace std;

int main() {

  setlocale(LC_ALL, "Portuguese");

  int nlinhas, ncolunas;

  cout << "Insira o número de linhas da matriz: \n";
  cin >> nlinhas;
  cout << "Insira o número de colunas da matriz: \n";
  cin >> ncolunas;

  int x[nlinhas][ncolunas], y[(nlinhas + ncolunas) - 1],
      i = 0, j = 0, k = 0, maiorElemento = 0, contlinhas = (nlinhas - 1),
      soma = 0, lim = 0, lim2 = 0;
  bool flag = true;

  for (i = 0; i < nlinhas; i++) {
    for (j = 0; j < ncolunas; j++) {
      cout << "Insira o elemento da linha " << i << " coluna " << j
           << " da matriz: \n";
      cin >> x[i][j];
    }
  }

  for (contlinhas, k; contlinhas > 0; contlinhas--, k++) {
    for (i = contlinhas, j = 0; i < nlinhas; i++, j++) {
      if (i == nlinhas - 1 || maiorElemento < x[i][j]) {
        maiorElemento = x[i][j];
      }
    }
    y[k] = maiorElemento;
    maiorElemento = 0;
  }

  if (ncolunas % 2 == 0 && nlinhas != 1 && ncolunas != 1) {
    for (lim = 0, k; lim < (ncolunas / 2) - 1; lim++, k++) {
      for (i = 0, j = lim; i < nlinhas; i++, j++) {
        if (x[i][j] % 2 == 0) {
          soma = soma + x[i][j];
        }
      }
      y[k] = soma;
      soma = 0;
    }

    for (lim2 = (ncolunas/ 2), k; lim2 < ncolunas; lim2++, k++) {
      for (i = 0, j = lim2; j < ncolunas; i++, j++) {
        if (x[i][j] <= 10) {
          flag = false;
        }
      }
      if (flag == true) {
        y[k] = 1;
      } else {
        y[k] = -1;
      }
      flag = true;
    }
  }

  if (ncolunas % 2 != 0 && nlinhas != 1 && ncolunas != 1) {
    for (lim = 0, k; lim <= (ncolunas / 2); lim++, k++) {
      for (i = 0, j = lim; i < nlinhas; i++, j++) {
        if (x[i][j] % 2 == 0) {
          soma = soma + x[i][j];
        }
      }
      y[k] = soma;
      soma = 0;
    }

    for (lim2 = (ncolunas / 2) + 1, k; lim2 < ncolunas; lim2++, k++) {
      for (i = 0, j = lim2; j < ncolunas; i++, j++) {
        if (x[i][j] <= 10) {
          flag = false;
        }
      }
      if (flag == true) {
        y[k] = 1;
      } else {
        y[k] = -1;
      }
      flag = true;
    }
  }

  for (k = 0; k < (nlinhas + ncolunas) - 1; k++) {
    cout << y[k] << "\t";
  }
}
