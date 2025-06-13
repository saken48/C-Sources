#include <iostream>

using namespace std;

int main() {
    // ini de klarasi variabel
    int a ;
    // ini  menginisialisasi variabel
    int b;
    b = 10;
    // ini deklarasi dan inisialisasi variabel
    int c = 20;

    // 1. jenis
    int d; // nilai acak

    //  2. copy initialization
    int e = 5;

    // 3. direct initialization
    int x(5);

    // 4. direct list initialization
    int p {5};
    int y= {10};

    cout << a<< '\n';
    cout << b << '\n';
    cout << c << '\n';
    cout << d << '\n';
    cout << e << '\n';
    cout << x << '\n';
    cout << p << '\n';
    cout << y << '\n';
}
