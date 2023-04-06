#include <iostream>
#include <sstream>

int main() {
    float a, b, r;
    std::string input;
    char sym;
    bool isRunning = true, printResult = true;

    std::cout << "MarioCalc, v1.0.0" << std::endl;
    std::cout << "Digita \"exit\" per uscire." << std::endl << std::endl;

    while (isRunning) {
        printResult = true;

        std::cout << "Inserisci un'operazione binaria (come 2 + 2): ";

        getline(std::cin, input);

        if(input == "exit") {
            isRunning = false;
        } else {
            std::stringstream ss(input);

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
                    std::cout << "Simbolo non supportato." << std::endl;
                    printResult = false;
            }

            if(printResult)
                std::cout << "Il risultato dell'operazione è " << r << std::endl;
        }

    }

    std::cout << std::endl << "Arrivederci." << std::endl;

    return 0;
}