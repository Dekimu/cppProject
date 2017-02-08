#include <iostream>

using namespace std;
void bubbleSort(int _array, int no);
void writeDivisors(int _array, int no, int div);
void _printArray(const int * const _array, const int a, string _string);
int main()
{

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
