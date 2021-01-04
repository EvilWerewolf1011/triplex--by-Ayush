#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    // print welcome message to the terminal 
    std::cout<<"\n \n \n Hey'Dalton i am Sabine from deadsec you have to hack 10 servers and get the information of zeroday.\n server no : " << Difficulty ;
    std::cout<<"\n You have to enter the right code to hack the server. \n \n";
}
bool PlayGame(int Difficulty)
{

    PrintIntroduction(Difficulty);

    // Declare 3 number code
    const int CodeA = rand() % Difficulty + Difficulty ; 
    const int CodeB = rand() % Difficulty + Difficulty ;
    const int CodeC = rand() % Difficulty + Difficulty ;
   
    const int CodeSum = CodeA + CodeB + CodeC ;
    const int CodeProduct = CodeA * CodeB * CodeC ;

    // Print sum and product to the terminal
    std::cout<< std::endl;
    std::cout<<"+There are 3 numbers in the code \n" ;
    std::cout<< "+The codes add upto :" << CodeSum << std::endl;
    std::cout<< "+The codes multiply to give :" << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC ;

    const int GuessSum = GuessA + GuessB + GuessC ;
    const int GuessProduct = GuessA * GuessB * GuessC ;

    // Check if the player guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {

        std::cout << "\n Well done Dalton you have hack " << Difficulty;
        std::cout << " server go ahead";
        return true;

    }else
    {
        std::cout << "\n You have entered wrong code be careful dalton ";
        return false;
    }

}

int main(){

    srand(time(NULL)); //creates new random sequence based on time of date

    int LevelDifficulty = 1;
    int const MaxDifficulty = 10;

    while(LevelDifficulty <= MaxDifficulty )
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);

        //clears any isssue
        std::cin.clear();

        //discards the buffers
        std::cin.ignore();

    if(bLevelComplete)
    {
        //increase the level difficulty
        ++LevelDifficulty;

    }

    }
    
    
    std::cout << "Well Done Dalton you got all the files get out of the server room and run!\n";

    return 0 ;

}