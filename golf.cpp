#include "golf.h"
#include <iostream>
#include <cstring>


void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    char line[Len];
    std::cout << "Enter fullname: " ;
    std::cin.getline(line, Len);
    std::cout << "Complete line: " << line << "\n";
    strcpy(g.fullname, line);
    	

    std::cout << "Enter handicap: " ;
    std::cin >> g.handicap;
    std::cin.get();	

    if (line[0] == '\0')
    {
        std::cout << "Empty name!\n" ;
        return 0;
    }
    else
    {
        return 1;
    }

}

void showgolf(const golf & g)
{
    std::cout << g.fullname << " " << g.handicap << "\n";
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}


