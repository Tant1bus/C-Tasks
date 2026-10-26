#include "class.h"
using namespace std;

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
void Student::change_params(int hp, int energy,  int iq, int sanity, int excitement){
    change_field(this->hp, hp);
    change_field(this->energy, energy);
    change_field(this->iq, iq);
    change_field(this->sanity, sanity);
    change_field(this->excitement, excitement);
}
void Student::eat(){
    if (is_alive()) {
        change_params(1, 7, -1, 0, -2);
    }
}
void Student::wait(){
    if(is_alive()) {
        change_params(1, -3, 0, 0, -3);
    }
}
void Student::study(){
    if(is_alive()) {
        change_params(-2, -4, 5, -5, -2);
    }
}
void Student::sleep(){
    if(is_alive()) {
        change_params(2, -2, 0, 7, 0);
    }
}
void Student::watch_tv(){
    if(is_alive()){
        change_params(-2, -3, -3, 1, 5);
    }
} 