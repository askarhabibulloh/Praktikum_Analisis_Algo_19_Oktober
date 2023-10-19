//
//  main.cpp
//  Kalkulator_Sederhana
//
//  Created by Muhammad Askar Habibulloh on 17/10/23.
//

#include <iostream>

using namespace std;

int main() {
    char operasi;
    double angka1, angka2;

    cout << "Masukkan operasi (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan dua angka (pisahkan dengan spasi): ";
    cin >> angka1 >> angka2;

    switch (operasi) {
        case '+':
            cout << angka1 << " + " << angka2 << " = " << angka1 + angka2;
            break;
        case '-':
            cout << angka1 << " - " << angka2 << " = " << angka1 - angka2;
            break;
        case '*':
            cout << angka1 << " * " << angka2 << " = " << angka1 * angka2;
            break;
        case '/':
            if (angka2 == 0) {
                cout << "Error: Pembagian oleh nol!";
            } else {
                cout << angka1 << " / " << angka2 << " = " << angka1 / angka2;
            }
            break;
        default:
            cout << "Operasi tidak valid";
            break;
    }
    cout<<endl;
    cin.get();
    return 0;
    
}
