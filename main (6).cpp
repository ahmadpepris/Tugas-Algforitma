/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void persegi(int sisi) {
    int luas = sisi * sisi;
    cout << "Luas persegi dengan sisi " << sisi << " adalah " << luas << endl;
}

void lingkaran(float r) {
    float luas = 3.14 * r * r;
    cout << "Luas lingkaran dengan jari-jari " << r << " adalah " << luas << endl;
}

void persegi_panjang(int p, int l) {
    int luas = p * l;
    cout << "Luas persegi panjang dengan panjang " << p << " dan lebar " << l << " adalah " << luas << endl;
}

int main() {
    int bilangan;

    cout << "Pilihan bangun datar yang ingin dihitung luasnya:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Lingkaran" << endl;
    cout << "3. Persegi panjang" << endl;
    cout << "Masukkan pilihan: ";
    cin >> bilangan;

    switch (bilangan) {
    case 1: {
        int sisi;

        cout << "Masukkan sisi persegi: ";
        cin >> sisi;
        persegi(sisi);
        break;
    }
    case 2: {
        float r;

        cout << "Masukkan jari-jari lingkaran: ";
        cin >> r;
        lingkaran(r);
        break;
    }
    case 3: {
        int p, l;

        cout << "Masukkan panjang persegi panjang: ";
        cin >> p;
        cout << "Masukkan lebar persegi panjang: ";
        cin >> l;
        persegi_panjang(p, l);
        break;
    }
    default:
        cout << "Tidak sesuai dengan kriteria" << endl;
        break;
    }

    return 0;
}
