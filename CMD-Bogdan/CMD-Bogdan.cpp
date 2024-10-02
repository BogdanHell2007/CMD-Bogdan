#include <iostream>

int main() {

    while (true) {

        std::string comand;

        std::cout << "Write a comand>>";
        std::cin >> comand;

        if (comand == "//end_proces//") { //-->//end_proces//

            return 0;
        }

        else if (comand == "//calculator_operation//") {

            std::cout << "Calculator function......" << std::endl;
        }
    }

}
