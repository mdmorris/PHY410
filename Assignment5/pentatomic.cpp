#include <iostream>
using namespace std;

#include "linalg.hpp"
using namespace cpt;

int main()
{


    double m1 = 4, m2 = 3, m3 = 3, m4 = 3, m5 = 4;

    // Matrix with masses as the diagonal elements
    Matrix<double,2> M(5, 5);
    M(0,0) = m1;
    M(1,1) = m2;
    M(2,2) = m3;
    M(3,3) = m4;
    M(4,4) = m5;
    cout << "M =\n" << M;


    Matrix<double,2> Minv(5,5);
    inverse(M, Minv);
    cout << "Minv=" << endl << Minv << endl;

    // "Spring" constants affecting each mass
    double k12 = 1, k23 = 1, k34 = 1, k45 = 1;
    double Lagrange[5][5] = {
        {   k12,    -k12,       0,        0,        0    },
        {  -k12,  k12 + k23,  -k23,       0,        0  },
        {    0,     -k23,   k23 + k34,    0,        0  },
	{    0,       0,       -k34,   k34 + k45,  -k45 },
	{    0,       0,        0,      -k45,      k45 }
    };



    Matrix<double,2> K(5, 5);
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            K(i,j) = Lagrange[i][j];
    cout << "K =\n" << K;




    // Solve with generalized eigenvector solution
    Matrix<double,1> eigenvalues = solve_eigen_generalized(K, M, false);

    cout << "Eigenvalues =\n" << eigenvalues << endl
         << "Eigenvectors =\n" << K;


}
