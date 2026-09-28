#include <iostream>
using namespace std;

class Cat {
public:
 int age;
 int buildYear;
};

class Clock {
public:
 int hours;
 int minutes;
 int seconds;
};

int main() {
 /*Cat my_cat;
 cin >> my_cat.age;
 cout << "Age of my cat is " << my_cat.age;
 return 0;*/
 
 /*Clock my_clock;
 cin >> my_clock.hours >> my_clock.minutes;
 cout << "hours: " << my_clock.hours << " minutes: " << my_clock.minutes;
 return 0;*/

 /*Clock my_clock;
 cin >> my_clock.hours >> my_clock.minutes >> my_clock.seconds;
 cout << "hours: " << my_clock.hours << " minutes: " << my_clock.minutes << " seconds: " << my_clock.seconds;
 return 0;*/
 
 Cat my_cat;
 int x;
 cin >> x;
 for (int i = 1; i <= x; i++) {
  cin >> my_cat.age >> my_cat.buildYear;
  cout << "C.A.T. " << i << " need recharging at " << my_cat.buildYear + my_cat.age << endl;
 }
 return 0;
}