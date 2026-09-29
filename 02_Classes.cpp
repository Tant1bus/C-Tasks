#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Cat {
public:
 string name;
 int age;
 int buildYear;
};

class Clock {
public:
 int hours;
 int minutes;
 int seconds;
};

void changeTime(Clock &clock, int seconds){
    int temp = clock.hours * 3600 + clock.minutes * 60 + clock.seconds + seconds;
    int counth = 0, countm = 0;
    while (temp > 3599){
        temp -= 3600;
        counth ++;
    }
    while (temp > 59){
        temp -= 60;
        countm ++;
    }
    clock.hours = counth;
    clock.minutes = countm;
    clock.seconds = temp;
}
void validateYear(Cat &cat) {
    cat.buildYear = cat.buildYear < 2018 ? 2018 : cat.buildYear;
    cat.buildYear = cat.buildYear > 2034 ? 2034 : cat.buildYear;
}
void validateAge (Cat &cat) {
    cat.age = cat.age < 1? 1 : cat.age;
    cat.age = cat.age > 100? 100 : cat.age;
}
void print(Cat cat) {
cout << "C.A.T. " << cat.name << " need recharging at " << cat.buildYear + cat.age << endl;
}
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
 
//  Cat my_cat;
//  int x;
//  cin >> x;
//  for (int i = 1; i <= x; i++) {
//   cin >> my_cat.age >> my_cat.buildYear;
//   cout << "C.A.T. " << i << " need recharging at " << my_cat.buildYear + my_cat.age << endl;
//  }
//  return 0;

// int x;
// cin >> x;
// Cat my_cat;
// for (int i = 1; i <= x; i ++){
//     cin >> my_cat.name >> my_cat.age >> my_cat.buildYear;
//     if (my_cat.age < 1) my_cat.age = 1;
//     else if(my_cat.age > 100) my_cat.age = 100;
//     if (my_cat.buildYear < 2018) my_cat.buildYear = 2018;
//     else if(my_cat.buildYear > 2034) my_cat.buildYear = 2034;
//     cout << "C.A.T. " << my_cat.name << " build in " << my_cat.buildYear << " and can work " << my_cat.age << " years\n";
// }
// return 0;

// Clock clickclock;
// cin >> clickclock.hours >> clickclock.minutes >> clickclock.seconds;
// int seconds;
// cin >> seconds;
// changeTime(clickclock, seconds);
// cout << clickclock.hours << ":" << clickclock.minutes << ":" << clickclock.seconds;
// return 0;

Cat cat1, cat2, cat3;
cin >> cat1.name >> cat1.age >> cat1.buildYear;
cin >> cat2.name >> cat2.age >> cat2.buildYear;
cin >> cat3.name >> cat3.age >> cat3.buildYear;
validateYear(cat1);
validateAge(cat1);
print(cat1);
validateYear(cat2);
validateAge(cat2);
print(cat2);
validateYear(cat3);
validateAge(cat3);
print(cat3);
}