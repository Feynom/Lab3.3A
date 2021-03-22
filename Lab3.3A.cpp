#include <iostream>
//#include "Vector3D_Public.h"
#include "Vector3D_Private.h"

int main()
{
    Vector3D_Private A, B, C;
    //Vector3D_Public A, B, C;

    cout << "\nVector A" << endl;
    cin >> A;
    cout << A;

    cout << "\nVector B" << endl;
    cin >> B;
    cout << B;

    cout << "\nVector C" << endl;
    cin >> C;
    cout << C;

    cout << "\nA + B = " << endl;
    cout << A + B << endl;

    cout << "\nB + C = " << endl;
    cout << B + C << endl;

    cout << "\nA + C = " << endl;
    cout << A + C << endl;

    cout << "\nA * B = " << A * B << endl;

    cout << "A++" << endl; cout << A++ << endl;
    cout << "A--" << endl; cout << A-- << endl;
    cout << "++A" << endl; cout << ++A << endl;
    cout << "--A" << endl; cout << --A << endl;

    cout << "Size of class is equal to " << sizeof(Vector3D_Private);

    return 0;
}