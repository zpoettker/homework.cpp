#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
   
   double numPizzas;
   const double cost = 9.99000001;
   
   cout << "How many pizzas are being ordered: ";
   cin >> numPizzas;
   
    double subTotal = numPizzas * cost;
   
   cout << endl << fixed << setprecision(2) << "Receipt:" << endl << "Subtotal: $" << subTotal << endl << "Total due: $" << subTotal * 1.06 << endl;

   return 0;
}

