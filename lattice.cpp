#include <string>

#include "lattice.h"

using namespace std;

Lattice::Lattice(int n, int** basis) {
    this->n = n;
    this->basis = basis;
}

string Lattice::to_string() {
    string res = "Basis vectors: ";
    for (int j = 0; j < n; j++) {
        res += "(";
        for (int i = 0; i < n - 1; i++) {
            res += std::to_string(basis[i][j]) + ",";
        }
        res += std::to_string(basis[n - 1][j]) + ") ";
    }
    return res;
}
