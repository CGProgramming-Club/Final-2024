#include "include/Alex.hpp"
#include "Deck.cpp"
#include "include/Deck.hpp"
namespace final {
  Cards card;
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
    std::string c1 = "";
    std::string s1 = "";
    std::string c2 = "";
    std::string s2 = "";
    std::string c3 = "";
    std::string s3 = "";
    std::string c4 = "";
    std::string s4 = "";
    std::string c5 = "";
    std::string s5 = "";
    std::string c6 = "";
    std::string s6 = "";
    std::string c7 = "";
    std::string s7 = "";
    std::string c8 = "";
    std::string s8 = "";
    std::string c9 = "";
    std::string s9 = "";
    std::string c10 = "";
    std::string s10 = "";
    std::string c11 = "";
    std::string s11 = "";
    int cval = 0;
    Alex::Alex(bool game, bool tf, int pscore, int dscore, int chips, int bjlevel, int pbet, char rule){
      Agame = game;
      Atf = tf;
      Apscore = pscore;
      Adscore = dscore;
      Achips = chips;
      Abjlevel = bjlevel;
      Abet = pbet;
      Arule = rule;
    }

    //functions
    void Alex::start(){
      std::cout<<"Welcome to Blackjack!\nYou currently have " << Achips << " Chips, and you are level " << Abjlevel << ". Would you like to know the basic rules? (Y/N)\n";

  while(Atf == true){
    std::cin>>Arule;
      Arule = std::toupper(Arule);

      if(Arule == 'Y'){
          rules();
      }
        Atf=false;
    }
  }
  void Alex::rules(){
    std::cout<<"Very well.\nBlackjack is a game that you play against the dealer in an attempt to get as close to 21 points without going over.\nThe game starts by placing a bet and then you get dealt one card.\nif you get a card 2-10, then you get the points that are shown on the card.\nAn ace gives you either a 1 or 11 ponts, decided by the player.\nIf you get a jack, queen, or king, then they are considered 10 points.\nThen a second hand is dealt to all players, expect you cannot see the dealer's second card.\nFinally, you can either decide to stay with your current hand of however many cards you have, or you can choose to \"hit,\" which gives you another card.\nIf you go over 21 points at any time then you lose the game.\nWhen the player chooses to stay, the dealer reveals the cards that he has laid down.\nIf the dealer has a higher amount of point than the player without going over 21, the dealer wins, but if the player has more points without going over 21, the player wins.\n";
  }
  void Alex::bet(){
    std::cout<<"Now that you are ready to start, how many chips would you like to wager?\nKeep in mind: you can only bet up to half of your current chips.\nYou currently have: " << Achips << " chips.\n";
    while(Atf == false){
      std::cin>>Abet;
      if(Abet<Achips/2){
        std::cout<<"Very well. You are now betting " << Abet << " chips. Good luck!\n";
        deal();
        Atf = true;
      }
      else{
        std::cout<<"Sorry but you don't have enough chips to bet " << Abet << "Chips. please try again.\n";
      }
    }
  }
  void Alex::deal(){
    std::cout<<"Time to deal the first card.\n";
    c1 = card.name();
    s1 = card.suit();
    if(c1 == "Ace"){
       std::cout<<"Your first card is the " << c1 << " of " << s1 << ", worth either 1 or 11 points.\n which point value would you like to take (type \"1\" or \"11\")\n";
      std::cin>>cval;
      if(cval!=1 || cval!=11){
        std::cout<<"neither option was selected, or there was a mistake has been made.\n 11 has automatically been chosen for your score.\n";
        cval=11;
      }
    }
    std::cout<<"Your first card is the " << c1 << " of " << s1 << ", worth ";
  }
}