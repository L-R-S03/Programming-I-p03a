#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//function Principal accepts no parameters and returns the entered principal
double Principal(void)
{
        double p;
        cout << "Enter the principal. ";
        cin >> p;
        return p;
}
//-----------------------------------------------------------------------
//function Interest accepts no parameters and returns the monthly interest rate using the entered APR
double Interest(void)
{
        double apr;
        cout << "Enter the APR. ";
        cin >> apr;
        //divides APR by 1200 to calculate monthly interest rate
        return apr/1200;
}
//-------------------------------------------------------------------------
//function term accepts no parameters and returns the amount of months in the term
int Term(void)
{
        int t;
        double yr;
        cout << "Enter the terms in years. ";
        cin >> yr;
        t=yr*12;
        return t;
}
//--------------------------------------------------------------------------
//function Payment accepts parameters for the principle, monthly interest rate, and the number of terms and returns the monthly payment
double Payment(double P, double i, int n)
{
        return P*i/(1-pow(1+i,-n));
}
//--------------------------------------------------------------------------
//function main uses the above functions to find the monthly payment
int main()
{
        double p=Principal();
        double i=Interest();
        int t=Term();
        double payment=Payment(p,i,t);
        cout << "Your monthly payment is $" << fixed << setprecision(2) << payment << ".";
        cout << endl;
        return 0;
}
