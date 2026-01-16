#include <iostream>
#include <string>

using namespace std;

bool esPalindromo(const string& palabra) {
    int i = 0;
    int j = palabra.length() - 1;

    while (i < j) {
        if (palabra[i] != palabra[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    if (!(cin >> N)) {
        return 0;
    }

    for (int k = 0; k < N; ++k) {
        string palabra;

        if (!(cin >> palabra)) {
            break;
        }

        if (esPalindromo(palabra)) {
            cout << "P\n";
        } else {
            cout << "NP\n";
        }
    }

    return 0;
}