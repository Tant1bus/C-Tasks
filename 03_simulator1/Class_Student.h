#pragma once
#include <iostream>
#include <iomanip>

class Student {
private:
    char name[51];
    char surname[51];
    int hp; 
    int energy;
    void change_field(int &field, int delta);
public:
    void start_game();
    bool is_alive();
    void show();
    void eat();
    void wait();
};