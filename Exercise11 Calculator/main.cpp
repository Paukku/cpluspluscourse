#include <iostream>
#include <random>
#include <ctime>
#include <limits>

// A function that performs a new calculation
void newCalculation(std::mt19937& generator, std::uniform_int_distribution<int>& randomCalculate, std::uniform_int_distribution<int>& distribution) {
    int operation = randomCalculate(generator);
    int randNum1 = distribution(generator);
    int randNum2 = distribution(generator);
    int correctAnswer{};
    char op;
    int userAnswer{};

    switch (operation) {
        case 0:
            correctAnswer = randNum1 + randNum2;
            op = '+';
            break;
        case 1:
            correctAnswer = randNum1 - randNum2;
            op = '-';
            break;
        case 2:
            correctAnswer = randNum1 * randNum2;
            op = '*';
            break;
        default:
            std::cout << "Something went wrong" << std::endl;
            return;
    }

    bool validInput = false;
    while (!validInput) {
        std::cout << "What is the result of " << randNum1 << " " << op << " " << randNum2 << "?" << std::endl;
        std::cin >> userAnswer;

        if (std::cin.fail()) {
            std::cin.clear(); // clear the error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear the input buffer
            std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        } else {
            validInput = true;
        }
    }

    if (userAnswer == correctAnswer) {
        std::cout << "Correct!" << std::endl;
    } else {
        std::cout << "Incorrect! The correct answer was " << correctAnswer << "." << std::endl;
    }
}

int main() {
    // initialize the random number generator using a moment in time
    std::mt19937 generator(static_cast<unsigned int>(std::time(0)));
    std::uniform_int_distribution<int> randomCalculate(0, 2);
    std::uniform_int_distribution<int> distribution(0, 199);

    bool again{true};
    char ask{};

    std::cout << "Calculator! Test your skills! " << std::endl;

    while (again) {
        newCalculation(generator, randomCalculate, distribution);
        std::cout << "Again? (y/n)" << std::endl;
        std::cin >> ask;

        if (ask == 'n' || ask == 'N') {
            again = false;
        } else if (ask == 'y' || ask == 'Y') {
            continue;
        } else {
            std::cout << "Invalid input. Exiting." << std::endl;
            break;
        }
    }

    std::cout << "Goodbye!" << std::endl;
    return 0;
}