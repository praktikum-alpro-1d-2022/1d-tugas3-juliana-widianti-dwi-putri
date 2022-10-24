#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){
    // perhitungan sisi miring segitiga
    float alas = 8, tinggi = 10;
    float miring;

    cout << "Nilai alas= " << alas << endl;
    cout << "Nilai tinggi= " << tinggi << endl;

    miring = (alas*alas)+(tinggi*tinggi);
    cout << "Nilai miringnya adalah " << miring << endl;

    return 0;
}
