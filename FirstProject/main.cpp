#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
    int n,v[100],i=0, contor = 0;
    int divp = 0, divi = 0;
    cout << "Introdu un numar pentru a-i afla numarul de divizori pari si impari: ";
    cin >> n;
    for(i = 1; i <= n/2; i++){
        if(n % i == 0)
        {
            v[contor] = i;
            contor++;
        }

    }
    v[contor] = n;
    contor++;
    /*for(n = 0; n < contor; n++)
    {
        if(v[n] % 2 == 0)
        {
            ++divp;
        }
        else
        {
            ++divi;
        }
    }*/
    //printf("Divizori pari: %d\nDivizori impari: %d\n", divp, divi);
    for(i = 0; i < contor; ++i){
        cout << v[i] << endl;
    }
}
