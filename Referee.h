#ifndef ADDS_2022_S1_TEACHING_REFEREE_H 
#define ADDS_2022_S1_TEACHING_REFEREE_H

#include "Human.h" 
#include "Computer.h"

class Referee { 
    public: 
    Referee();
    char refGame(Human player1, ComputerPlayer player2);
};

#endif