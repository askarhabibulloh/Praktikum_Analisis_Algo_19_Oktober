//
//  main.cpp
//  Kalkulator_Kedua
//
//  Created by Muhammad Askar Habibulloh on 18/10/23.
//
//  Hanya melakukan kalkulasi terhadap integer

#include <iostream>
using namespace std;
int main() {
    
    
    //deklarasi variabel
    double a,b,e;//untuk menampung input dan operator
    char c;//untuk menampung operator
    
    
    //inisialisasi variabel
    cout<<"Kalkulator ini hanya melakukan operasi terhadap integer\n\n\nMasukkan angka pertama : " ;
    cin>>a;
    cout<<"\nMasukkan angka kedua : ";
    cin>>b;
    cout<<"\nMasukkan operasi (*,/,-,+) : ";
    cin>>c;
    
    
    
    //penentuan operasi berdasar input
    //konversi ascii *=42 ,/=47,-=45,+=43
    switch(int(c)){
        case 42:
            e = a * b;
            cout<<"\nHasil Perkalian  "<<a<<" dan "<<b<<" adalah "<<e;
            break;
        case 47:
            if (b==0) {
                cout<<"Pembagi tidak boleh nol";
            }else{
                e = a / b;
                cout<<"\nHasil "<<a<<" dibagi "<<b<<" adalah "<<e;
            }
            break;
        case 45:
            e = a - b;
            cout<<"\nHasil "<<a<<" dikurangi "<<b<<" adalah "<<e;
            break;
        case 43:
            e = a + b;
            cout<<"\nHasil Tambah "<<a<<" dan "<<b<<" adalah "<<e;
            break;
    }
    cout<<endl;
    return 0;
    
}
