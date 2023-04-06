#include <iostream>
#include <sstream>

int main() {
    float a, b, r;
    std::string input;
    char sym;
    bool isRunning = true, printResult;

    // Program start text
    // Yes, it is a little cringe, but I don't care
    std::cout << "MarioCalc, v1.0.0" << std::endl;
    std::cout << "Digita \"exit\" per uscire." << std::endl << std::endl;

    // The loop runs until the user types in "exit". Then, isRunning is set to false and the program
    // exits the infinite loop, terminating.
    while (isRunning) {
        // This variable is used to avoid printing a non-number result when the input is not
        // well-formed and the default case of the switch is triggered.
        printResult = true;

        std::cout << "Inserisci un'operazione binaria (come 2 + 2): ";

        getline(std::cin, input);

        if(input == "exit") {
            isRunning = false;
        } else {
            std::stringstream ss(input);

            // String parsing
            ss >> a >> sym >> b;

            switch (sym) {
                case '+':
                    r = a + b;
                    break;
                case '-':
                    r = a - b;
                    break;
                case '*':
                    r = a * b;
                    break;
                case '/':
                    r = a / b;
                    break;
                case '%':
                    r = a * b / 100;
                    break;
                case '^':
                    r = std::pow(a, b);
                    break;
                default:
                    // If the input is not parsed correctly, the result is not calculated
                    std::cout << "Simbolo non supportato." << std::endl;
                    printResult = false;
            }

            if(printResult)
                std::cout << "Il risultato dell'operazione è " << r << std::endl;
        }

    }

    // Program termination text
    std::cout << std::endl << "Arrivederci." << std::endl;

    return 0;
}