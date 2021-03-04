#include <iostream>
#include <cmath>

using namespace std;

double pi(int n){
    double parcial = 0;
    for (int i = 0; i <= n; i++) {
        parcial += pow(-1,i)/(2.0 * i + 1); // pow == potencia
    }
    
    return 4*parcial;
   
   }

int main (void){
    int n;
	cout << "Aproximacao de Pi feita atravez da serie de Leibniz \n";
    cout << "Digite o numero de termos para avaliar o valor de Pi: ";
    cin >> n;

    cout << "O valor de Pi avaliado com " << n << " termos: " << pi(n) << endl;

    return 0;
    
}