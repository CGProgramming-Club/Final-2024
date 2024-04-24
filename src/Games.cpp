#include "include/Games.hpp"

namespace final {
    class Games {
        int generate_random_number(int minimum, int maximum){
            int random_number = rand() % (maximum - minimum + 1) + minimum;

            return random_number;
        }

        void roulette(){
            srand(int(time(NULL)));
            std::string icons[8] = {"Cherry", "Banana", "7", "Kings", "Bar", "Dollar Sign", "Money Bag"};
            
            std::cout << "Rolling...\n";
            
            for (int i = 0; i < 3; i++){
                std::cout << icons[generate_random_number(0, sizeof(icons)/sizeof(std::string) - 1)] << "\t\t";
            }
        }
    };
}