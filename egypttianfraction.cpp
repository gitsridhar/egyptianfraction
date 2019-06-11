#include <iostream>

using namespace std;

void egyptian(int numerator, int denominator) {

    if (numerator == 0 || denominator == 0) {
       return;
    }

    if(denominator % numerator == 0) {
        cout << "1/" << denominator/numerator << endl;
        return;
    }

    if(numerator % denominator == 0) {
        cout << numerator/denominator << endl;
        return;
    }

    if(numerator > denominator) {
        cout << numerator/denominator << " + ";
        egyptian(numerator % denominator, denominator);
        return;
    } 

    int n = denominator/numerator + 1;
    cout << "1/" << n << " + ";

    egyptian((numerator * n) - denominator, denominator * n);

    return;
}

int main() {
    int numerator = 824;
    int denominator = 1809;

    egyptian(numerator, denominator);

    return(0);
}

