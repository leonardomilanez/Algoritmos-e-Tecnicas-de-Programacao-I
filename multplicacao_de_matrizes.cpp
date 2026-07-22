#include <cmath>
#include <iostream>
#include <locale>
using namespace std;

int main() {

  setlocale(LC_ALL, "Portuguese");

  int i = 0, j = 0, k = 0, l = 0, nlinhas1, n, ncolunas2, x[nlinhas1][n],
      y[n][ncolunas2], z[nlinhas1][ncolunas2], soma = 0;

  cout << "Insira o número de linhas da primeira matriz: ";
  cin >> nlinhas1;

  cout << "Insira o número de colunas da primeira matriz: ";
  cin >> n;

  cout << "Insira o número de colunas da segunda matriz: ";
  cin >> ncolunas2;

  for (i = 0; i < nlinhas1; i++) {
    for (j = 0; j < n; j++) {
      cout << "Insira o elemento da linha " << i << " coluna " << j
           << " da primeira matriz: \n";
      cin >> x[i][j];
    }
  }

  for (k = 0; k < n; k++) {
    for (l = 0; l < ncolunas2; l++) {
      cout << "Insira o elemento da linha " << k << " coluna " << l
           << " da segunda matriz: \n";
      cin >> y[k][l];
    }
  }

  for (i = 0; i < nlinhas1; i++) {
    for (l = 0; l < ncolunas2; l++) {
      for (j = 0, k = 0; j < n; j++, k++) {
        soma = soma + x[i][j] * y[k][l];
      }
      z[i][l] = soma;
      soma = 0;
    }
  }

  for (i = 0; i < nlinhas1; i++) {
    for (l = 0; l < ncolunas2; l++) {
      cout << z[i][l] << "\t";
    }
    cout << endl;
  }
}
