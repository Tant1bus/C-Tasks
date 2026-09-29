#include "Class_Student.h"
using namespace std;

void Student::start_game(){
    hp = 100;
    energy = 100;
    cin >> name >> surname;
}
bool Student::is_alive(){
    return (hp > 0);
}
void Student::show(){
    cout << name << " " << surname << ": HP = " << setfill('0') << setw(3) << hp <<", Energy = " << energy << ".";
    if (hp == 0) cout << " Game over.";
    cout << endl;
}
void Student::change_field(int &field, int delta){
    if (field + delta > 100) field = 100;
    else if (field + delta < 0) field = 0;
    else field += delta;
}
void Student::eat(){
    if (is_alive()) {
        hp += 1;
        energy += 7;
    }
}
void Student::wait(){
    if(is_alive()) {
        energy -= 3;
        hp += 1;
    }
}
