#include <iostream>
#include "include/vector3d.h"
#include <matplot/matplot.h>

using std::cout;
using std::endl;

vector3d<float> f(float x, float y, float z)
{
    return vector3d<float>(x,y,z);
}

int main()
{
    //constructors
    cout << "CONSTRUCTORS\n\n";
    vector3d<float> v1;
    cout << "basic constr\n";
    vector3d<float> v2(1,2,3);
    cout << "constr\n";
    v2.print();
    float A[3] = {3, 4, 5.4};
    vector3d<float> v3(A);
    cout << "array constr\n";
    v3.print();

    //RAII
    cout << "RAII\n\n";
    vector3d<float> v4(v3);
    cout << "lhs constr\n";
    v4.print();
    v4 = v2;
    cout << "lhs =\n";
    v4.print();
    vector3d<float> v5(f(2.3, 4.2, 5.5));
    cout << "rhs constr\n";
    v5.print();
    v5 = f(1.1, 52, 0);
    cout << "rhs =\n";
    v5.print();
    
    //Binary operators
    cout << "BINARY OPERATORS\n\n";
    cout << "v2 == v2\n" << (v2 == v2) << endl;
    cout << "v2 == v3\n" << (v2 == v3) << endl;

    vector3d<float> v6(1,1,1), v7, v8(2.4,5,6), v9;
    v7 = v6 + v8;
    cout << "+\n";
    v3.print();
    v9 = v6 - v8;
    cout << "-\n";
    v4.print();
    float d = v4 * v3;
    cout << "inner product\n" << d << endl;
    v5 = v4 ^ v3;
    cout << "cross product\n";
    v5.print();
    cout << "vector * const\n";
    (v5*5).print();
    cout << "const * vector\n";
    (5*v5).print();

    //Unary operators
    cout << "UNARY OPERATORS\n\n";
    v5 += v3;
    cout << "+=\n";
    v5.print();
    v5 -= v4;
    cout << "-=\n";
    v5.print();
    v5 *= 5;
    cout << "*=\n";
    v5.print();
    v5 ^= v3;
    cout << "^=\n";
    v5.print();
    cout << "-\n";
    (-v5).print();

    //Methods
    cout << "METHODS\n\n";
    cout << "len\n" << vector3d<float>(3,4,0).len() << endl;
    cout << "cout\n" << v5 << endl;

    return EXIT_SUCCESS;
}