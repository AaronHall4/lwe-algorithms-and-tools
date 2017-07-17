#include <iostream>

#include <NTL/ZZ.h>
#include <NTL/mat_ZZ.h>
#include <NTL/LLL.h>

using namespace std;
using namespace NTL;

int main() {
    mat_ZZ B;
    cin >> B;
    transpose(B,B);
    ZZ det2;
    LLL(det2, B, 1);
    transpose(B,B);
    cout << B << endl;
}
