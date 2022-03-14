#include "Referee.h"

Referee::Referee() = default;

char Referee::refGame(Human player1, Computer player2) {
    
  switch (player1.makeMove()) {  
    case 'S':
        return 'L';
    case 'R':
        return 'T';
    case 'P':
        return 'W';
    default:
        std::cerr << "error" << std::endl;
        return 'E';
  }
}