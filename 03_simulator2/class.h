#pragma once
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class Student {
private:
    char name[51];
    char surname[51];
    int hp; 
    int energy;
    int iq;
    int sanity;
    int excitement;
    void change_field(int &field, int delta);
    void change_params(int hp, int energy, int iq, int sanity, int excitement);
public:
    Student(){
        hp = 100;
        energy = 100;
        iq = 20;
        sanity = 100;
        excitement = 50;
    };
    Student(char* name, char* surname){
        strncpy(this->name, name, 50);
        this->name[50] = '\0';
        strncpy(this->surname, surname, 50);
        this->surname[50] = '\0';
        hp = 100;
        energy = 100;
        iq = 20;
        sanity = 100;
        excitement = 50;
    }
    bool is_alive();
    void show();
    void eat();
    void wait();
    void study();
    void sleep();
    void watch_tv();
};