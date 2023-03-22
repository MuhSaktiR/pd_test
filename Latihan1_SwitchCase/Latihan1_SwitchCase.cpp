#include <iostream>
using namespace std;

float luasPersegiPanjang(float p, float l) {
    return p * l;
}

float luasSegitiga(float a, float t) {
    return 0, 5 * a * t;
}

float luasLingkaran(float r) {
    return 3, 14 * r * r;
}

int main() {
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;

    system("cls");
    do
    {


    cout << "\n\n===========================" << endl;
    cout << "====== M   E   N   U ======" << endl;
    cout << "===========================" << endl;

    cout << "1. Luas Persegi Panjang" << endl;
    cout << "2. Luas Segitiga" << endl;
    cout << "3. Luas Lingkaran" << endl;
    cout << "4. Exit" << endl;

    cout << "\nPilihan (1/2/3/4) : " << endl;
    cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "Masukkan Panjang= ";
            cin >> panjang;
            cout << "Masukkan Lebar = ";
            cin >> lebar;
            cout << "\nLuas Persegi Panjang = " << luasPersegiPanjang(panjang, lebar);
            break;
        case 2:
            cout << "Masukkan Alas = ";
            cin >> alas;
            cout << "Masukkan Tinggi = ";
            cin >> tinggi;
            cout << "\nLuas Segitiga = " << luasSegitiga(alas, tinggi);
            break;
        case 3:
            cout << "Masukkan Jari-jari = ";
            cin >> jejari;
            cout << "\nLuas Lingkaran = " << luasLingkaran(jejari);
            break;
        case 4:
            break;
        default:
            cout << "Pilihan Salah !";
            break;
        }

    } while (pilihan != 4);
}