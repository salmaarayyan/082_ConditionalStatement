#include <iostream>
using namespace std;

int main (){
    int nNilMat, nNilFis;
    double nRerata;
    string cStatus;

    cout << "nilai matematika = ";
    cin >> nNilMat;

    cout << "nilai fisika = ";
    cin >> nNilFis;

    nRerata = (nNilMat + nNilFis) / 2;

    if(nRerata >= 60 || nNilMat >= 70){
        cStatus = "lulus";
    }
    else{
        cStatus = "gagal";
    }
    
    cout << "tampilkan kelulusan = " << cStatus << endl;

return 0;
}