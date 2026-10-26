#include "Class_Student.h"
using namespace std;

void Student::start_game(){
    hp = 100;
    energy = 100;
    iq = 20;
    sanity = 100;
    excitement = 50;
    cin >> name >> surname;
}
bool Student::is_alive(){
    return (hp > 0);
}
void Student::show(){
    cout << name << " " << surname << ": HP = " << setfill('0') << setw(3) << hp <<", Energy = " << energy << ", IQ = " << iq << ", Sanity = " << sanity << ", Excitement = " << excitement << ".";
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
        change_field(hp, 1);
        change_field(energy, 7);
        change_field(iq, -1);
        change_field(excitement, -2);
    }
}
void Student::wait(){
    if(is_alive()) {
        change_field(hp, 1);
        change_field(energy, -3);
        change_field(excitement, -3);
    }
}
void Student::study(){
    if(is_alive()) {
        change_field(hp, -2);
        change_field(energy, -4);
        change_field(iq, 5);
        change_field(sanity, -5);
        change_field(excitement, -2);
    }
}
void Student::sleep(){
    if(is_alive()) {
        change_field(hp, 2);
        change_field(energy, -2);
        change_field(sanity, 7);
    }
}
void Student::watch_tv(){
    if(is_alive()){
        change_field(hp, -2);
        change_field(energy, -3);
        change_field(iq, -3);
        change_field(sanity, 1);
        change_field(excitement, 5);
    }
} 