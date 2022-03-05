#ifndef TERRITORY_H
#define TERRITORY_H
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using namespace std;

class Territory {
private:
    string territory_name;
    int ID;
    int proprietary_ID;
    vector<int*> connected_ID;
    int tank_number;
    int infantry_number;
    int airplane_number;


public:
virtual ~Territory(){};
    int get_infantry_number();
    int get_tank_number();
    int get_airplane_number();
    int get_ID();
    int get_proprietary_ID();
    vector<int*> get_connected_ID;
    string get_territory_name;

    void update_infantry_number(int);
    void update_tank_number(int);
    void update_airplane_number(int);
    void update_proprietary_ID(int);
};

#endif // TERRITORY_H
