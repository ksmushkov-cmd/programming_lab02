/************************* 
 * Автор: Смушков Кирилл *
 * Вариант:12            *
 *                       *
 *************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {  

  // P обозначем как уравнение состояния углекислого газа
  double P;
  
  double a;
  cout << " a = ";
  cin >> a;

  double b;
  cout << " b = ";
  cin >> b;
  
  // температура газа
  double GasTemperature;
  cout << " GasTemperature = ";
  cin >> GasTemperature;
  
  // объем газа
  double GasVolume;
  cout << " GasVolume = ";
  cin >> GasVolume;
  
  // Пока объем газа меньше 0.2 м^3.
  while (GasVolume < 0.2) {
    P = (0.0635 * GasTemperature) / (GasVolume - b) - a / (GasVolume * GasVolume);
    cout << " P = " << P << endl;
    // 0.05 - шаг объема газа до 0.2.
    GasVolume += 0.05;
  }
  
  do {
    P = (0.0635 * GasTemperature) / (GasVolume - b) - a / (GasVolume * GasVolume);
    cout << " P = " << P << endl;
    // 0.2 - шаг объема газа после 0.2.
    GasVolume += 0.2;
    // Пока объем газа меньше или равно 1.
  } while(GasVolume <= 1.0);
       
  return 0;
}
