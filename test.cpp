#include <iostream>
#include "lattice.h"

using namespace std;

int main() {
    int arr[4] = {1,2,2,-1};
    Lattice l(2, &arr);
    cout << l.to_string() << endl;
    return 0;
}

