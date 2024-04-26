#include "include/Alex.hpp"

namespace final {
    //   //Unless you wanna make multiple variations of blackjack, I would just recommend a couple functions that allows the player to play blackjack, rather than a whole class. --Aiden P
    // while(game == true){
    // std::cout<<"Welcome to Blackjack!\nYou currently have " << chips << " Chips, and you are level " << bjlevel << ". Would you like to know the basic rules? (Y/N)\n";
    //   while(tf == true){
    //     std::cin>>rule;
    //     if(rule == "Y" || rule == "y"){
    //       std::cout<<"Very well.\nBlackjack is a game that you play against the dealr in an attempt to get as close to 21 points without going over.\nThe game starts by placing a bet and then you get dealt one card.\nif you get a card 2-10, then you get the points that are shown on the card.\nAn ace gives you either a 1 or 11 ponts, decided by the player.\nIf you get a jack, queen, or king, then they are considered 10 points.\nThen a second hand is dealt to all players, expect you cannot see the dealer's second card.\nFinally, you can either decide to stay with your current hand of however many cards you have, or you can choose to \"hit,\" which gives you another card.\nIf you go over 21 points at any time then you lose the game.\nWhen the player chooses to stay, the dealer reveals the cards that he has laid down.\nIf the dealer has a higher amount of point than the player without going over 21, the dealer wins, but if the player has more points without going over 21, the player wins.";
    //     }
    //   }
    // int card = rand() %13+1;
    // int suite = rand() %4+1;

    // }

    Alex::Alex(bool game, bool tf, int pscore, int dscore, int chips, int bjlevel, int bet, char rule){
      Agame = game;
      Atf = tf;
      Apscore = pscore;
      Adscore = dscore;
      Achips = chips;
      Abjlevel = bjlevel;
      Abet = bet;
      Arule = rule;
    }

    //functions
    void Alex::start(){
      std::cout<<"Welcome to Blackjack!\nYou currently have " << Achips << " Chips, and you are level " << Abjlevel << ". Would you like to know the basic rules? (Y/N)\n";

      while(Atf == true){
        std::cin>>Arule;
        Arule = std::toupper(Arule);

        if(Arule == 'Y'){
              //List rules...
        }
        //Removed the elif since it continues either way. --Aiden P
    }
};