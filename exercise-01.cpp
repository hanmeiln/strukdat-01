/*
Nama Program: Latihan 1
Nama        : Hana Meilina Fauziyyah
NPM         : 140810180012
Tanggal     : 27 februari 2019
Deskripsi   : Fizz Buzz
*********************************************************/

#include <iostream>
using namespace std;

void fizzbuzz (int a){
    for(int i=1; i<100; i++){
        if (i%3==0){
            cout<<i<<" = FIZZ"<<endl;
        }
        else if (i%5==0){
            cout<<i<<" = BUZZ"<<endl;
        }
        else if (i%5==0 && i%3==0){
            cout<<i<<" = FIZZBUZZ"<<endl;
        }
        else {
            cout<<i<<endl;
        }
    }

}
main(){
    int a;
    fizzbuzz(a);
}
