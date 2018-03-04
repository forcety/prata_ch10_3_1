#include <iostream>
#include "golf.h"

int main(int argc, char *argv[])
{
    const int N = 2;

    std::cout << "Start program\n";

	Golf gd1;

    // #1 setgolf version 1 (Non-interactive input of 1 players)
    std::cout << "...............\n";
    std::cout << "#1 setgolf version 1 (Non-interactive input of 1 players)\n";
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

	
    // #2 setgolf version 2 (Interactive input of 1 player)
    std::cout << "...............\n";
    std::cout << "#2 setgolf version 2 (Interactive input of 1 player)\n";
    golf andy;
    int res = setgolf(andy);
    showgolf(andy);

    // #3 setgolf version 3 (Interactive input of 2 players)
    std::cout << "...............\n";
    std::cout << "#3 setgolf version 3 (Interactive input of 2 players)\n";
    golf players[2];
    for (int i = 0; i < N; ++i) {
        int res = setgolf(players[i]);
        showgolf(players[i]);
        if(!res)
            break;
    }

    std::cout << "Done.\n";
    std::cin.get();     
    return 0;
}
