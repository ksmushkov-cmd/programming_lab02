/************************* 
 * Автор: Смушков Кирилл *
 * Вариант:12            *
 *                       *
 *************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {  

  double a = 0.0288;

  double b = 0.032;

  double T = 15.7;

  double V = 0.05; 
  
  double V1 = 0.2;

  while (V < 0.2) {
        
    double P = (0.0635 * T) / (V - b) - a / (V * V);
    cout << " P = " << P << endl;
    V += 0.05;
    
    do {
      
      double P = (0.0635 * T) / (V1 - b) - a / (V1 * V1);
      cout << " P = " << P << endl;
      V1 += 0.2;
      
    } while(V1 < 1);
      
      
  }
  
  return 0; 
}