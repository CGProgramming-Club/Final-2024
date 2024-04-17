#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>

namespace final {
    class Player {
        public:
            Player(int starting_chip_count) {
                m_chip_count = starting_chip_count;
            };

        private:
            int m_chip_count;
    };
}

#endif