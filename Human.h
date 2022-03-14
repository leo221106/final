#ifndef CMAKE_CLION_CONAN_TEMPLATE_HUMANPLAYER_H 
#define CMAKE_CLION_CONAN_TEMPLATE_HUMANPLAYER_H

#include "Player.h"

class Human : public Player { 
public: 
    Human(); 
    char makeMove() override;
    void setCurrentMove(char currentMove); 
    void setAge(int age); 
    int getAge() const; 
    virtual ~Human();
private:
    int age = 0; 
    char currentMove = 'A';
    
};

#endif 