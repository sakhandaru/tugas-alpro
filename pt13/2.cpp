#include <iostream>

using namespace std;
struct sepeda{
    string merk;
    string type;
    int tahun;
    int harga;

};
int main()
{
    sepeda sepedah;
    cout << "masukan merk: ";
    cin >> sepedah.merk;
    cout << "masukan type: ";
    cin >> sepedah.type;
    cout << "masukan tahun keluaran: ";
    cin >> sepedah.tahun;
    cout << "masukan harga satuan: ";
    cin >> sepedah.harga;

    cout << "data sepeda baru sekarang"<< endl;
    cout << "========================="<< endl;
    cout << "merk : "<<sepedah.merk<<endl;
    cout << "type : "<<sepedah.type<<endl;
    cout << "tahun : "<<sepedah.tahun<<endl;
    cout << "harga : "<<sepedah.harga<<endl;
    return 0;
}
