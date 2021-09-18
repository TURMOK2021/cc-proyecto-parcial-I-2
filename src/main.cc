#include<iostream>
#include"Player.cc"

int main()
{
    Player* player1{new Player(0,1,5.f,0,1)};
    Player* player2{new Player(1,15,45.f,2,0)};
    Player* player3{new Player(2,36,86.f,3,2)};

    std::cin.get();
    
    return EXIT_SUCCESS; 
}