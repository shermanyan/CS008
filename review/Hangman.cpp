//
// Created by Dave R. Smith on 1/10/23.
//

#include "Hangman.h"



Hangman::Hangman() : wordbank("words.txt")
{
}

void Hangman::runGame()
{
    std::cout << "Hangman Game" << std::endl;
    std::cout << visuals << std::endl;
    int playerCount = 0;
    std::cout << "How many players 1 or 2: ";
    std::cin >> playerCount;

    switch (playerCount)
    {
        case 1: {
            std::cout << visuals << std::endl;
            Word answer;
            try {
                answer = wordbank.getWord();

                if (answer.contains(' ')) {
                    answer.replaceDash(' ');
                }
            }
            catch (NoWordException e) {
                answer.setString("Test");
            }
            std::cout << answer << std::endl;
            int incorrect = 0;
            while (incorrect < 6 && !answer.isSolved()) {
                UserInput input;
                char guess = input.getInput();
                if (answer.contains(guess)) {
                    answer.replaceDash(guess);
                } else //Guessed letter is not in answer
                {
                    incorrect += 1;
                    visuals.updateBoard(incorrect);
                    accuracy.pushback(guess);

                }
                std::cout << visuals << std::endl;
                std::cout << answer << std::endl;
                std::cout << accuracy << std::endl;
            }
            if (answer.isSolved() && incorrect < 7)
                isWinner = true;
            else
                isWinner = false;

            if (isWinner)
                std::cout << "You won the game!" << std::endl;
            else
                std::cout << "You lost the game, better luck next time" << std::endl;
            break;
        }
        case 2: {
            // std::cout << visuals2 << std::endl;
            Word answer;
            Word answer2;
            try {
                answer = wordbank.getWord();
                answer2 = wordbank.getWord();

                if (answer.contains(' ')) {
                    answer.replaceDash(' ');
                }
                if (answer2.contains(' ')) {
                    answer2.replaceDash(' ');
                }
            }
            catch (NoWordException e) {
                answer.setString("Test");
                answer2.setString("Test");
            }

            int incorrect1 = 0;
            int incorrect2 = 0;
            while (incorrect1 < 6 && !answer.isSolved() && incorrect2 < 6 && !answer2.isSolved()) {
                UserInput input;
                UserInput input2;

                // player 1 input
                std::cout << "Player 1's turn" << std::endl;

                std::cout << visuals << std::endl;
                std::cout << answer << std::endl;
                std::cout << accuracy << std::endl;

                char guess = input.getInput();
                if (answer.contains(guess)) {
                    answer.replaceDash(guess);
                } else //Guessed letter is not in answer
                {
                    incorrect1 += 1;
                    visuals.updateBoard(incorrect1);
                    accuracy.pushback(guess);
                }

                std::cout << visuals << std::endl;
                std::cout << answer << std::endl;
                std::cout << accuracy << std::endl;

                // player 2 input
                std::cout << "Player 2's turn" << std::endl;

                std::cout << visuals2 << std::endl;
                std::cout << answer2 << std::endl;
                std::cout << accuracy2 << std::endl;

                char guess2 = input2.getInput();
                if (answer2.contains(guess2)) {
                    answer2.replaceDash(guess2);
                } else //Guessed letter is not in answer
                {
                    incorrect2 += 1;
                    visuals2.updateBoard(incorrect2);
                    accuracy2.pushback(guess2);
                }

                std::cout << visuals2 << std::endl;
                std::cout << answer2 << std::endl;
                std::cout << accuracy2 << std::endl;

            }
            // create output when there is a winner
            if (answer.isSolved())
            {
                std::cout << "Player 1 won the game" << std::endl;
            }

            if (answer2.isSolved())
            {
                std::cout << "Player 2 won the game" << std::endl;
            }

            if (incorrect1 >= 6)
            {
                std::cout << "Player 1 lost the game" << std::endl;
            }

            if (incorrect2 >= 6)
            {
                std::cout << "Player 2 lost the game" << std::endl;
            }
            break;
        }
        default:
            std::cout << "Not a valid choice" << std::endl;
            break;
    }
}
