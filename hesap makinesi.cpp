#include <iostream>
using namespace std;

int main() {
    double sayi1, sayi2;
    char islem;

    cout << "Birinci sayiyi girin: ";
    cin >> sayi1;

    cout << "Ikinci sayiyi girin: ";
    cin >> sayi2;

    cout << "Islemi girin (+, -, *, /): ";
    cin >> islem;

    if (islem == '+')
        cout << "Sonuc: " << sayi1 + sayi2 << endl;
    else if (islem == '-')
        cout << "Sonuc: " << sayi1 - sayi2 << endl;
    else if (islem == '*')
        cout << "Sonuc: " << sayi1 * sayi2 << endl;
    else if (islem == '/') {
        if (sayi2 != 0)
            cout << "Sonuc: " << sayi1 / sayi2 << endl;
        else
            cout << "Hata: Sifira bolme olmaz!" << endl;
    } else
        cout << "Gecersiz islem girdiniz." << endl;

    return 0;
}
