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
  double a, b, P;
 
  cout << " a = ";
  cin >> a;

  cout << " b = ";
  cin >> b;
  
  // температура газа
  double gasTemperature;
  cout << " gas Temperature = ";
  cin >> gasTemperature;
  
  // объем газа
  double gasVolume;
  cout << " gas Volume = ";
  cin >> gasVolume;
  
  // Пока объем газа меньше 0.2 м^3.
  while (gasVolume < 0.2) {
    P = (0.0635 * gasTemperature) / (gasVolume - b) - a / pow(gasVolume, 2);
    cout << " P = " << P << endl;
    // 0.05 - шаг объема газа до 0.2.
    gasVolume += 0.05;
  }
  
  do {
    P = (0.0635 * gasTemperature) / (gasVolume - b) - a / pow(gasVolume, 2);
    cout << " P = " << P << endl;
    // 0.2 - шаг объема газа после 0.2.
    gasVolume += 0.2;
    // Пока объем газа меньше или равно 1.
  } while (gasVolume <= 1.0);
       
  return 0;
}

