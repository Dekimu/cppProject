#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
/*
    int a[n];
    cout, ordine descrescatoare, in functia divizorilor;
    int b[nr][div];
    user input
*/
// n = numere
// div = divizori

void _printArray(const int * const _array, const int a, string _string);



int main()
{
    int k;
    int n;
    printf("Introduceti numarul de elemente ale vectorului: ");
    scanf(" %d", &n);
    int _numere[n];
    int _divizori[n];
    printf("Acum introduceti in vector elementele:\n\n");

    for(int i = 0; i < n; ++i)
    {
      printf("Elementul numarul %2d: ", i+1);
      scanf("%d", &_numere[i]);
    }

    _printArray(_numere, n, "Elementul");

    for(int i = 0; i < n; ++i){
        k = 0;
        for(int j = 1; j <= (_numere[i] / 2); ++j){
            if(_numere[i] % j == 0)
            {
                ++k;
            }
        }
        ++k;
        _divizori[i] = k;
    }
    _printArray(_divizori, n, "Numarul de divizori ai elementului");
    return 0;
}

void _printArray(const int * const _array, const int a, string _string){
  puts("");
  for(int i = 0; i < a; ++i)
  {
    printf("%s %2d: %10d\n", _string.c_str(), i, *(_array + i));
  }
  puts("");
}
