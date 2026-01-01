#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct stud {
    string fam;
    int mat, fiz, prg;
    float sb;
};

int main() {
    const int n = 5;
    stud ved[n] = {
        {"Сидоренко С.", 5, 5, 5, 0},
        {"Іваненко Д.", 3, 3, 4, 0},
        {"Агеєнко А.", 4, 5, 4, 0},
        {"Петренко П.", 3, 3, 3, 0},
        {"Головко Г.", 3, 4, 5, 0}
    };

    float sm = 0, sf = 0, sp = 0;

    for (int i = 0; i < n; i++) {
        ved[i].sb = (ved[i].mat + ved[i].fiz + ved[i].prg) / 3.0;
        sm += ved[i].mat;
        sf += ved[i].fiz;
        sp += ved[i].prg;
    }

    cout << left << setw(20) << "Прізвище" 
         << setw(8) << "Мат." 
         << setw(8) << "Фіз." 
         << setw(8) << "Прог." 
         << setw(10) << "Ср.бал" 
         << "Стипендія" << endl;

    cout << fixed << setprecision(3);

    for (int i = 0; i < n; i++) {
        cout << left << setw(20) << ved[i].fam 
             << setw(8) << ved[i].mat 
             << setw(8) << ved[i].fiz 
             << setw(8) << ved[i].prg 
             << setw(10) << ved[i].sb;

        if (ved[i].sb >= 4.0)
            cout << "ТАК" << endl;
        else
            cout << "НІ" << endl;
    }

    cout << endl << "Середній бал групи:" << endl;
    cout << "Математика:    " << sm / n << endl;
    cout << "Фізика:        " << sf / n << endl;
    cout << "Програмування: " << sp / n << endl;

    cout << endl << "Відмінники з програмування:" << endl;
    for (int i = 0; i < n; i++) {
        if (ved[i].prg == 5)
            cout << ved[i].fam << endl;
    }

    cout << endl << "Відмінники з фізики:" << endl;
    for (int i = 0; i < n; i++) {
        if (ved[i].fiz == 5)
            cout << ved[i].fam << endl;
    }

    cin.get();
    return 0;
}