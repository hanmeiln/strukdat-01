/*
Nama Program: Latihan 3
Nama        : Hana Meilina Fauziyyah
NPM         : 140810180012
Tanggal     : 27 februari 2019
Deskripsi   : Swap x menjadi y, y menjadi x
*********************************************************/

#include <iostream>
using namespace std;

void swap(int& x, int& y){
    int a=x, b=y;
    y=a;
    x=b;
}

int main(){
    int x = 5;
    int y = 4;
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;

    swap(x, y);
    cout<<"After swap"<<endl;
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;
}
