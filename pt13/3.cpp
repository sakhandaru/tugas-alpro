#include <iostream>

using namespace std;

typedef struct rumusbangun{
    int luaspersegipanjang(int p, int l){
        return p * l;
    }
    int luaslingkaran(int r){
        return (22/7)*r*r;
    }
    float volumekerucut(int r, int t){
        return (1 * 3.14 * r*r*t)/3;
    }
    float volumebola(int r){
        return ((4 * 3.14 * r*r*r))/3;
    }
}cek;
int main()
{
    cek rumus;
    int p,l,r,t;
    cout << "masukan panjang : ";
    cin >> p;
    cout << "masukan lebar : ";
    cin >> l;
    cout << "masukan jari jari : ";
    cin >> r;
    cout << "masukan tinggi : ";
    cin >> t;

    cout <<"luas persegi = "<< rumus.luaspersegipanjang(p,l) <<endl;
    cout <<"luas lingkaran = "<< rumus.luaslingkaran(r) << endl;
    cout <<"volume kerucut = "<< rumus.volumekerucut(r,t) << endl;
    cout <<"volume bola= "<< rumus.volumebola(r) << endl;
    return 0;
}
