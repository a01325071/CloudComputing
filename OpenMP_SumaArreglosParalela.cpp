#include <iostream>
#include <omp.h>

using namespace std;

int main() {
  int n = 1000;
  float A[n], B[n], R[n]; 

  for (int i = 0; i < n; i++) {
    A[i] = i;
    B[i] = i + 2.5;
  }

  #pragma omp parallel for
  for (int i = 0; i < n; i++) {
    R[i] = A[i] + B[i];
  }

cout << "Resultados de los 10 primeros subindices\n" << endl;
  for (int i = 0; i < 10; i++) {
    cout << "Subindice " << i << " = " << R[i] << endl;
  }

  return 0;
}
