#ifndef list_h
#define list_h

#include "Character.hpp"
#include <vector>
#include <ncurses.h>
#include <ctime>
#include <cstdlib>
#include "Location.hpp"
using namespace std;

class List
{
    public:
        List();
        void draw(WINDOW * w);
        void action();
    private:
        vector <Character> men; 
        vector <Location> occupied;
};

#endif
