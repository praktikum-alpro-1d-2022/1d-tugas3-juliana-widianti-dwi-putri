#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){
    float hasil,i,v,r,jumlah;
    int p;
    cout << "Perhitungan fisika yang ingin anda hitung ?\n";
    cout << "1. Arus Listrik (i)\n";
    cout << "2. Tegangan Listrik (v)\n";
    cout << "3. Hambatan Listrik (r)\n";
    cout << "4. Exit\n";
    cout << "Pilih lah salah satu angka yang ada di atas : ";
    cin >> p;
    
if (p==1)
{
    cout << "Mencari Arus Listrik (i)" << endl;
    cout << "Masukkan Tegangan (v) : ";
    cin >> v;

    cout << "Masukkan Hambatan (r) : ";
    cin >> r ;

    hasil = v / r ;

    cout << "Nilai Arus Listrik (i) adalah " << hasil;
}
else if (p == 2)
{
    cout << "Masukkan Arus Listrik (i) : ";
    cin >> i;

    cout << "Masukkan Hambatan (r) : ";
    cin >> r ;

    hasil = i * r;

    cout << "Nilai tegangan Listrik (v) = " << hasil;
}
else if (p == 3)
{
    cout << "Masukkan Tegangan (v) : ";
    cin >> v;

    cout << "Masukkan Arus Listrik (I) : ";
    cin >> i;

    hasil = v / i;

    cout << "Nilai Hambatan (r) adalah " << hasil;
}
else if (p == 4)
{
    return 0;
}   else {
    cout<<"Maaf Program Tidak Tersedia :)";
}
    return 0;
}
