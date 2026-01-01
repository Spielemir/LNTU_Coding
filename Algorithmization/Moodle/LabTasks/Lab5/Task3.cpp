#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    const int n = 5;
    string sp[n] = {
        "Сидоренко С.",
        "Іваненко Д.",
        "Агеєнко А.",
        "Петренко П.",
        "Головко Г."
    };

    cout << "Початковий список:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << sp[i] << endl;
    }

    for (int k = 1; k < n; k++) {
        for (int i = 0; i < n - k; i++) {
            if (sp[i] > sp[i+1]) {
                swap(sp[i], sp[i+1]);
            }
        }
    }

    cout << endl << "Відсортований список:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << sp[i] << endl;
    }

    cin.get();
    return 0;
}