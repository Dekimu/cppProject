#include <iostream>
#include <stdio.h>

using namespace std;

void _bubbleSort (int * const matricePtr, int * const marimePtr);
void _printArray (const int * const matricePtr, const int * const marimePtr);
int main()
{
    int _arraySize = 0;
    cout << "Enter array size: ";
    while(_arraySize <= 0){
    cin >> _arraySize;
    }
    int _array[_arraySize];
    printf("Now let's populate the array:\n");
    for(int i = 0; i < _arraySize; ++i){
        printf("Array element No. %3d: ", i+1);
        cin >> _array[i];
    }
    _bubbleSort(_array, &_arraySize);
    _printArray(_array, &_arraySize);
    return 0;

}
    void _bubbleSort(int *matricePtr, int *marimePtr){
        void _swap(int *elementPtr1, int *elementPtr2);
        for(uint32_t pass = 0; pass < *marimePtr; ++pass){
            for(size_t j = 0; j < *marimePtr - 1; ++j){
                if(matricePtr[j] > matricePtr[j + 1]){
                    _swap(&matricePtr[j], &matricePtr[j+1]);
                }
            }
        }


    /*int temp;
    for(int pass = 1; pass < *marimePtr; ++pass){
        for(int i = 0; i < *marimePtr - 1; ++i){
            if(matricePtr[i] > matricePtr[i+1]){
                temp = matricePtr[i];
                matricePtr[i] = matricePtr[i+1];
                matricePtr[i+1] = temp;
            }
        }
    }*/
    }
    void _printArray (const int * const matricePtr, const int * const marimePtr){
      printf("Array's elements are: ");
      for(int i = 0; i < *marimePtr; ++i){
            if(i == 0){
                printf("%d", matricePtr[i]);
            }
            else{
            printf(", %d", matricePtr[i]);
            }
      }
    }


    void _swap(int *elementPtr1, int *elementPtr2){
        int temp = *elementPtr1;
        *elementPtr1 = *elementPtr2;
        *elementPtr2 = temp;
    }
