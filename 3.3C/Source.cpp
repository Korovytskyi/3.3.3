#include <iostream>
#include "Vector3D.h"
#include "Object.h"
int main()
{
    cout << "number : " << Object::Count() << endl;
    Vector3D a1;
    cout << "number : " << Object::Count() << endl;
    Vector3D b1;
    cout << "number : " << Object::Count() << endl;
    Vector3D a2;
    cout << "number : " << Object::Count() << endl;
    Vector3D a(2,33,4);

    Vector3D A;
    cout << "Vector" << endl;
    cin >> A;
    cout << A;
    cout << "A++" << endl; cout << A++ << endl;
    cout << "A--" << endl; cout << A-- << endl;
    cout << "++A" << endl; cout << ++A << endl;
    cout << "--A" << endl; cout << --A << endl;
    A.Distance();
    A.scalar();
    A.isEqual();
    A.isEqual2();
    return 0;
}