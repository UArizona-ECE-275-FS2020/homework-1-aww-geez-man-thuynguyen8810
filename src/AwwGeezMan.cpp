/*
 _____ ____ _____   ____ _____ ____
| ____/ ___| ____| |___ \___  | ___|
|  _|| |   |  _|     __) | / /|___ \
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/

 _   _                                         _      _
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|


Aww Geez Man: Interdimensional Mortys.
One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.

SUBMITTED BY: NGUYEN, THUY

*/

#include <iostream>
#include <string>
#include "Morty.cpp"

int main(int ac, char** av)
{
    // Parse the command line arguments. The program is executed as
    // AwwGeezMan {start} {stop} {dimension} 
    // AwwGeezMan {start} {stop} {step} {dimension}

    if (ac != 4 and ac != 5)                    // must have 4 or 5 arguments to be valid
    {
        std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
            << std::endl;
        std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
        std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;
        return -1;
    }
 
    if (std::strcmp(av[ac - 1], "C137", 4)==0)      // must use strncmp not ==, == doesn't work
    {
        if (ac == 5) C137::Morty(atoi(av[1]), atoi(av[2]), atoi(av[3]));    // if step there use it
        else C137::Morty(atoi(av[1]), atoi(av[2]));                         // when no step given
    }
    else if (std::strcmp(av[ac - 1], "Z286", 4)==0) // must use strncmp not ==, == doesn't work
    {
        if (ac == 5) Z286::Morty(atoi(av[1]), atoi(av[2]), atoi(av[3]));    // if step there use it
        else Z286::Morty(atoi(av[1]), atoi(av[2]));                         // when no step given
    }
    else
    {
        std::cout << "Error: unknown dimension!!" << std::endl;             // no valid dimension
        return -1;
    }


     // Parse the command line arguments
     // Depending on the dimension of the arguments, call the appropriate Morty
     // function

    return 0;
}

