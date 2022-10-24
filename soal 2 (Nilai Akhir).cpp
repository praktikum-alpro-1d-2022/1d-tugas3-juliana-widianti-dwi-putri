#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main (){
    float Praktikum = 75, UTS = 70, UAS = 88;
    float Nilai_Akhir;

    cout << "Nilai Praktikum = " << Praktikum << endl;
    cout << "Nilai UTS = " << UTS << endl;
    cout << "Nilai UAS = " << UAS << endl;

    Nilai_Akhir = ((Praktikum*0.2)+(UTS*0.3)+(UAS*0.5));

    cout << "Nilai Akhirnya adalah  " << Nilai_Akhir << endl;

    return 0;
}
