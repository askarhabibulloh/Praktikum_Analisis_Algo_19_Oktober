//
//  main.cpp
//  Kalkulator_Rumit_Dikit_Ga_Ngaruh
//
//  Created by Muhammad Askar Habibulloh on 17/10/23.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    cout << "Masukkan operasi matematika sederhana (contoh: 1*2, 1/2, 1+2, 1-2): ";
    cin >> input;

    // Membaca angka pertama dari input
    double angka1;
    stringstream inputStream(input);
    inputStream >> angka1;

    // Membaca operator
    char operasi;
    inputStream >> operasi;

    // Membaca angka kedua dari input
    double angka2;
    inputStream >> angka2;

    if (!inputStream.fail() && inputStream.eof()) {
        switch (operasi) {
            case '*':
                cout << "Hasil perkalian " << angka1 << " dan " << angka2 << " adalah " << angka1 * angka2 << endl;
                break;
            case '/':
                if (angka2 != 0) {
                    cout << "Hasil pembagian " << angka1 << " oleh " << angka2 << " adalah " << angka1 / angka2 << endl;
                } else {
                    cout << "Error: Pembagian oleh nol!" << endl;
                }
                break;
            case '+':
                cout << "Hasil penambahan " << angka1 << " dan " << angka2 << " adalah " << angka1 + angka2 << endl;
                break;
            case '-':
                cout << "Hasil pengurangan " << angka1 << " dan " << angka2 << " adalah " << angka1 - angka2 << endl;
                break;
            default:
                cout << "Operator tidak valid." << endl;
                break;
        }
    } else {
        cout << "Format input tidak valid. Harap gunakan format yang benar." << endl;
    }

    return 0;
}
