#include "include/Games.hpp"

namespace final {
    class Games {
        int generate_random_number(int minimum, int maximum){
            srand(int(time(NULL)));

            int random_number = rand() % (maximum - minimum + 1) + minimum;

            return random_number;
        }
    };
}