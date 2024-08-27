#include <iomanip>
#include <iostream>
using namespace std;

int main() {

double triangleBase;
double triangleHeight;

cin >> triangleBase;
cin >> triangleHeight;

double triangleArea = (1.0/2.0) * triangleBase * triangleHeight;

cout << "Triangle area is " << fixed << setprecision(5) << triangleArea << endl;

   return 0;
}
