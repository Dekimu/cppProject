#include <iostream>

using namespace std;
int _array[10];
int main()
{
    //cout << "Hello world!" << endl;
    for(int i = 0; i < 10; ++i){
    cin >> _array[i];
}
    for(int i = 0; i < 10; ++i){
    cout << endl << *(_array + i) << endl;
    }
    return 0;
}
