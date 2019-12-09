//Outbreak: Epidemioligost game
// This is a program for future epidemiologists to see if they can solve the outbreak
// Michaelena Sheehan
// 12/3/19
#include <iostream>
#include <string>
#include <limits>
#include <fstream>

using namespace std;

int virusOne();
int virusTwo();
int running = 0;

int main()
{
    int gameNum;
    string gameChoice;
    
    cout<<"Outbreak: A game for those interested in public health that gives background and lets the player make decisions.\nUser can play game 1 or 2 and replay at the end.\n\n"; 
    cout<<"Choose virus 1 or 2\n"; // user chooses which game they want to play
    cout<<"(Enter 1 or 2 or q to quit)\n"; // uses enters their choice
    cin>>gameChoice; // user enters game choice
    
    if (gameChoice == "1")
    {
        gameNum = virusOne();
    }
    else if (gameChoice == "2")
    {
        gameNum = virusTwo();        
    }
    else if ((gameChoice == "Q")||(gameChoice == "q"))
    {
        return 0;
    }
    else
    {
        printf("\E[2J\E[2H");
        gameNum = main();
    }
}

int virusOne()
{
    string anyKey, answerOne, answerTwo, answerThree;
    printf("\E[2J\E[2H");
    cout<<"Game 1  Windy City: Question 1\n"; // displays name of challenge 1
    cout<<"Throughout the Chicagoland area 50 people have gone into the hospital with these symptoms:\n";
    cout<<"fatigue, shortness of breath, coughing, chest pain, and fever. 27 of those admitted to the\n";
    cout<<"hospital have attended a music class with musician Sara Lee\n\n";
    cout<<"First patient: Sara Lee is 25 years old, she recently came back from a trip to Africa where\n";
    cout<<"she brought back drums made of sheep skin for her music class.\n\n";
    cout<<"Press Enter to continue...\n";
    cin.ignore();
    cin.ignore(); // wait for Enter to be pressed
    printf("\E[2J\E[2H");

    cout<<"What is the first step we should take to solve the outbreak?\n";
    cout<<"A. Issue a mass alert to the citizens of Chicago\n";
    cout<<"B. Take a closer look at the drums from Africa\n";
    cout<<"C. Stop all flights from Africa to the U.S\n\n";
    cout<<"Answer: ";
    cin>>answerOne; // user enters answer choice 

    if ((answerOne == "B")||(answerOne == "b"))
    {
        cout<<"Congratulations! Your on the road to becoming an expert\n\n";
        cout<<"Press Enter to continue...\n";
        cin.ignore();
        cin.ignore();
        printf("\E[2J\E[2H"); // clear the console
    }
    else
    {
        cout<<"Sorry! You can’t cause any unnecessary panic without the facts to prove it.\n\n";
        cout<<"Press Enter to continue...\n";
        cin.ignore();
        cin.ignore();
        printf("\E[2J\E[2H");
        answerOne = main();
    }
    
    cout<<"Game 1 Windy City: Question 2\n"; 
    cout<<"Lab work has been done on all those admitted to the\n";
    cout<<"hospital and the diagnosis is anthrax which is caused by inhaling spores or\n";
    cout<<"coming in contact with an infected animal, this is an epidemic in Africa.\n\n";
    cout<<"Press Enter to continue...\n";
    cin.ignore();
    printf("\E[2J\E[2H");

    cout<<"How did Sara give everyone at the music event anthrax?\n";
    cout<<"A. She had spores on her clothes\n";
    cout<<"B. The drums made of sheep skin were infected\n";
    cout<<"C. Sara got anthrax from someone that came to her music class\n\n";
    cout<<"Answer: ";    
    cin>>answerTwo; // user enters answer to second question
    
    if ((answerTwo == "B")||(answerTwo == "b"))
    {
        cout<<"Congratulations! Your on the road to becoming an expert\n\n";
        cout<<"Press Enter to continue...\n";
        cin.ignore();
        cin.ignore();
        printf("\E[2J\E[2H");
    }
    else
    {
        cout<<"Sorry! Better luck next time!\n\n";
        cout<<"Press Enter to continue...\n";
        cin.ignore();
        cin.ignore();
        printf("\E[2J\E[2H");
        answerTwo = main();
    }
    
    cout<<"Game 1 Windy City: Question 3\n";
    cout<<"How should the situation be handled from here on out?\n";
    cout<<"A. All music classes in Chicago will be cancelled\n";
    cout<<"B. Sara Lee will be fired\n";
    cout<<"C. The drums will be quarantined and burned to make sure no one else gets infected\n\n";
    cout<<"Answer: ";    
    cin>>answerThree;

    if ((answerThree == "C")||(answerThree == "c"))
    {
        cout<<"Congratulations! You successfully solved the outbreak and didn’t cause mass panic!\n\n";
        cout<<"Press Enter to continue...\n";
        cin.ignore();
        cin.ignore();
        printf("\E[2J\E[2H");
    }
    else
    {
        cout<<"Sorry! Try playing again!\n\n";
        cout<<"Press Enter to continue...\n";
        cin.ignore();
        cin.ignore();
        printf("\E[2J\E[2H");
        answerThree = main();
    }
    answerOne = main();
}

int virusTwo()
{
    string anyKey, answerOne, answerTwo, answerThree;
    printf("\E[2J\E[2H");
    cout<<"Game 2: River Monsters: Question 1\n";
    cout<<"Over the past 3 months in Waco,Texas 9 people have been admitted to the hospital with a fatal\n";
    cout<<"bacteria. So far, 3 people have died 2 people are on life support and 4 people are making a\n";
    cout<<"slow recovery. All 9 of the people have gone to lake Austin within the past 4 months and have\n";
    cout<<"swam in the water.\n\n";
    cout<<"The symptoms are fever, stiff neck, seizure, vomiting.\n\n";
    cout<<"Press Enter to continue...\n";
    cin.ignore();
    cin.ignore();
    printf("\E[2J\E[2H");

    cout<<"What should we take a closer look at first?\n"; 
    cout<<"A. How safe is the water of lake Austin?\n";
    cout<<"B. The ages of those admitted\n";
    cout<<"C. Research other parts of Texas and lakes\n\n";
    cout<<"Answer: ";
    cin>>answerOne;

    if ((answerOne == "A")||(answerOne == "a"))
    {
        cout<<"Congratulations! Your on the road to becoming an expert\n\n";
        cout<<"Press Enter to continue...\n";
        cin.ignore();
        cin.ignore();
        printf("\E[2J\E[2H");
    }
    else
    {
        cout<<"Sorry! You can’t cause any unnecessary panic without the facts to prove it.\n\n";
        cout<<"Press Enter to continue...\n";
        cin.ignore();
        cin.ignore();
        printf("\E[2J\E[2H");
        answerOne = main();
    }
    
    cout<<"Game 2: River Monsters: Question 2\n";
    cout<<"Lab results have shown the amoeba organism in 4 of the patients.\n\n";
    cout<<"Press Enter to continue...\n";
    cin.ignore();
    printf("\E[2J\E[2H");

    cout<<"what should be done next ?\n";
    cout<<"A. Interview Waco residents\n";
    cout<<"B. Close down lake Austin until things are under control\n";
    cout<<"C. Shut down every lake in Texas\n\n";
    cout<<"Answer: ";    
    cin>>answerTwo;
    
    if ((answerTwo == "B")||(answerTwo == "b"))
    {
        cout<<"Congratulations! Your on the road to becoming an expert\n\n";
        cout<<"Press Enter to continue...\n";
        cin.ignore();
        cin.ignore();
        printf("\E[2J\E[2H");
    }
    else
    {
        cout<<"Sorry! Better luck next time!\n\n";
        cout<<"Press Enter to continue...\n";
        cin.ignore();
        cin.ignore();
        printf("\E[2J\E[2H");
        answerTwo = main();
    }

    cout<<"Game 2: River Monsters: Question 3\n";
    cout<<"It has been discovered that the brain eating amoeba infected the people when\n";
    cout<<"they went underwater in lake Austin.\n\n";
    cout<<"Press Enter to continue...\n";
    cin.ignore();
    printf("\E[2J\E[2H");    

    cout<<"What should we say in the statement to Waco Texas?\n";
    cout<<"A. Never swim in a lake again\n";
    cout<<"B. Refrain from going underwater forever\n";
    cout<<"C. Let them know the dangers and fatality rate of the amoeba and what causes it\n";
    cout<<"   to attack and shut down the lake until it can be prevented and tested\n\n";
    cout<<"Answer: ";    
    cin>>answerThree;

    if ((answerThree == "C")||(answerThree == "c"))
    {
        cout<<"Congratulations! You successfully solved the outbreak and didn’t cause mass panic!\n\n";
        cout<<"Press Enter to continue...\n";
        cin.ignore();
        cin.ignore();
        printf("\E[2J\E[2H");
    }
    else
    {
        cout<<"Sorry! Try playing again!\n\n";
        cout<<"Press Enter to continue...\n";
        cin.ignore();
        cin.ignore();
        printf("\E[2J\E[2H");
        answerThree = main();
    }
    answerOne = main();
}


