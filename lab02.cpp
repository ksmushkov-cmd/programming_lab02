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
  
  double V[8] = {0.05, 0.1, 0.15, 0.2, 0.4, 0.6, 0.8, 1};
  
  for (int i = 0; i < 8; i++) {
      
    double volume = V[i];
    
    double pressure = (0.0635 * T) / (volume - b) - a/(volume * volume);
    
    cout << " pressure = " << pressure << endl;
    
  }
  
  return 0; 
}