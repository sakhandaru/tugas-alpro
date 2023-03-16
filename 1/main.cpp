#include <iostream>
#include <cstdlib>

using namespace std;

int tambah(int a, int b){
    int c = a + b;
    return c;
}

int kurang(int a, int b){
    int c = a - b;
    return c;
}

int kali(int a, int b){
    int c = a * b;
    return c;
}

float bagi(float a, int b){
    float c = a / b;
    return c;
}

int total(int a[],int n){
    int sum=0;
    for (int x=1; x<=n; x++){
        sum += a[x];
    }
    return sum;
}

float rata(int a[],int n){
    float sum=0;
    for (int x=1; x<=n; x++){
        sum += a[x];
    }
    return sum/n;
}


int main()
{
    int x,y;
    char h;
    cout <<endl<< "=================Soal aritmatika==================="<< endl;
    cout << "masukan angka1: ";
    cin >> x;
    cout << "masukan angka2: ";
    cin >> y;
    cout << "hasil: " << endl;

    cout << "1.ditambahkan = "<< tambah(x,y) << endl;
    cout << "2.dikurangkan = "<< kurang(x,y) << endl;
    cout << "3.dikalikan   = "<< kali(x,y) << endl;
    cout << "4.dibagikan   = "<< bagi(x,y) << endl;
    cout <<endl<< "===================Soal array==================="<< endl;


    int n;
    cout <<endl<< "masukan ukuran array: "; cin >>n;
    int arr[n];
    cout << "masukan nilai array" << endl;
    for (int i=1; i<=n; i++){
        cin >>arr[i];
    }
    cout << "hasil: " << endl;
    cout << "5.total array: "<< total(arr,n)<<endl;
    cout << "6.rata-rata array: "<< rata(arr,n);



    return 0;
}
