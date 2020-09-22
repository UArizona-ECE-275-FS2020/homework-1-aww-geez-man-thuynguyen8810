/*
 __  __            _
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/
                       |___/           |_|   |_|
*/

// Include the Morty header file
#include "Morty.hpp"

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 

namespace C137      // overloaded c137 functions
{
    void Morty(int Start, int Stop, int Step)       // overloaded function for when there is a step
    {
        int i;
        int LoopDone = 0;

        std::cout << "Morty C137 says:" << std::endl;

        for (i = Start; i <= Stop; i = i + Step)    // loop to go through the steps
        {
            std::cout << i << ": ";
            if (i % 15 == 0)                        // if it is a multiple of 15 output Aww Geez Man 
            {
                std::cout << "Aww Geez Man";
            }
            else if (i % 5 == 0)                    // if it is a multiple of 5 output Geez 
                std::cout << "Geez";
            else if (i % 3 == 0)                    // if it is a multiple of 3 output Aww
                std::cout << "Aww";

            std::cout << std::endl;
            LoopDone = 0;
        }
    }

    void Morty(int Start, int Stop)                 // overloaded function for when there is no step
    {
        int i;
        int LoopDone = 0;

        std::cout << "Morty C137 says:" << std::endl;

        for (i = Start; i <= Stop; i++)             // go through the steps
        {
            std::cout << i << ": ";
            if (i % 15 == 0)                        // if it is a multiple of 15 output Aww Geez Man
            {
                std::cout << "Aww Geez Man";
            }
            else if (i % 5 == 0)                    // if it is a multiple of 5 output Geez 
                std::cout << "Geez";
            else if (i % 3 == 0)                    // if it is a multiple of 3 output Aww
                std::cout << "Aww";         


            std::cout << std::endl;
            LoopDone = 0;
        }
    }
}

// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 

namespace Z286      // overloaded z286 functions - reverse the Aww Geez Man (naM zeeG wwA)
{
    void Morty(int Start, int Stop, int Step)       // overloaded Z286 function for when there is a step
    {
        int i;
        int LoopDone = 0;
        
        std::cout << "Morty Z286 says:" << std::endl;

        for (i = Start; i <= Stop; i = i + Step)    // go through the steps
        {
            std::cout << i << ": ";
            if (i % 15 == 0)                        // if it is a multiple of 15 output naM zeeG wwA 
            {
                std::cout << "naM zeeG wwA";
            }
            else if (i % 5 == 0)                    // if it is a multiple of 5 output zeeG 
                std::cout << "zeeG";
            else if (i % 3 == 0)                    // if it is a multiple of 3 output wwA 
                std::cout << "wwA";

            std::cout << std::endl;
            LoopDone = 0;
        }
    }
    void Morty(int Start, int Stop)                 // overloaded Z286 function for no steps
    {
        int i;
        int LoopDone = 0;

        std::cout << "Morty Z286 says:" << std::endl;

        for (i = Start; i <= Stop; i++)
        {
            std::cout << i << ": ";
            if (i % 15 == 0)                        // if it is a multiple of 15 output naM zeeG wwA 
            {
                std::cout << "naM zeeG wwA";
            }
            else if (i % 5 == 0)                    // if it is a multiple of 5 output zeeG 
                std::cout << "zeeG";
            else if (i % 3 == 0)                    // if it is a multiple of 3 output wwA 
                std::cout << "wwA";

            std::cout << std::endl;
            LoopDone = 0;
        }
    }
}