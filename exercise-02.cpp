/*
Nama Program: Latihan 2
Nama        : Hana Meilina Fauziyyah
NPM         : 140810180012
Tanggal     : 27 Februari 2019
Deskripsi   : Mengubah celcius menjadi fahrenheit
*********************************************************/

#include <iostream>
using namespace std;

float cel2fah (float cel){
    float fahrenheit;
    fahrenheit = cel * 9/5 +32;
    return fahrenheit;
}

main(){
    float celcius = 9;
    float fahrenheit = cel2fah(celcius);
    cout<<"Temp is "<<fahrenheit;

}
