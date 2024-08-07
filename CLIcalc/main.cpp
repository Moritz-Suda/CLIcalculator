#include <iostream>
#include <thread>

//says if the howl program is stared idk if needet but i can
bool started;
//says if the clicalc program is stared fuck you if you think its not needet i do what i want
bool startedCli;

void welcome(){
    std::cout << "Welcome to the CLIclac!!" << std::endl;
    std::cout << "type 1 to start the CLIcalc" << std::endl;
    std::cout << "type 2 to stop the CLIcalc" << std::endl;
};

void input() {
    int input;
    std::cout << "Input: ";
    std::cin >> input;
    if(input == 1) {
        started = true;
    }
    if(input == 2) {
        started = false;
    }
    if (input != 1 && input != 2) {
        std::cout << "wrong input try again" << std::endl;
        std::cout << "Input: ";
        std::cin >> input;
    }
}

void start() {
    if(started == true) {
        system("clear");
        startedCli = true;
    }

    if(started == false) {
        std::cout << "come again" << std::endl;
    }
}

void calc() {
    if(startedCli == true) {
        int close;
        int x;
        int y;
        int input;
        std::cout << "Welcom to the CLI Calculator created by Wyvern" << std::endl;
        std::cout << "please input your data: " << std::endl;
        std::cout << "x: ";
        std::cin >> x;
        std::cout << "y: ";
        std::cin >> y;
        std::cout << "Do you want to do" << std::endl;
        std::cout << "+ press 1" << std::endl;
        std::cout << "- press 2" << std::endl;
        std::cout << "* press 3" << std::endl;
        std::cout << "/ press 4" << std::endl;
        std::cout << "Input: ";
        std::cin >> input;
        if(input == 1) {
            std::cout << x+y << std::endl;
           /** x = 0;
            y = 0;
            input = 0;
            std::cout << "do you want to exit?" << std::endl;
            std::cout << "1 yes " << std::endl;
            std::cout << "2 no" << std::endl;
            std::cout << "Input: ";
            std::cin >> close;


            if(close == 1) {
                std::cout << "come again" << std::endl;
                exit(0);

            } if(close == 2) {
                std::cout << "x: ";
                std::cin >> x;
                std::cout << "y: ";
                std::cin >> y;
                std::cout << "Input: ";
                std::cin >> input;
            }
            if (close != 1 && close != 2) {
                std::cout << "wrong input try again" << std::endl;
                std::cout << "Input: ";
                std::cin >> input;
            }else {
                exit(0);
            } **/
        }
        if(input == 2) {
            std::cout << x-y << std::endl;
            /** x = 0;
            y = 0;
            input = 0;
            std::cout << "do you want to exit?" << std::endl;
            std::cout << "1 yes " << std::endl;
            std::cout << "2 no" << std::endl;
            std::cout << "Input: ";
            std::cin >> close;
            if(close == 1) {
                std::cout << "come again" << std::endl;
                exit(0);
            } if(close == 2) {
                close = 0;
                x = 0;
                y = 0;
                input = 0;
                std::cout << "x: ";
                std::cin >> x;
                std::cout << "y: ";
                std::cin >> y;
                std::cout << "Input: ";
                std::cin >> input;
            }if (close != 1 && close != 2) {
                close = 0;
                std::cout << "wrong input try again" << std::endl;
                std::cout << "Input: ";
                std::cin >> input;
            }**/
        }
        if(input == 3) {
            std::cout << x*y << std::endl;
           /** x = 0;
            y = 0;
            input = 0;
            std::cout << "do you want to exit?" << std::endl;
            std::cout << "1 yes " << std::endl;
            std::cout << "2 no" << std::endl;
            std::cout << "Input: ";
            std::cin >> close;
            if(close == 1) {
                std::cout << "come again" << std::endl;
                exit(0);
            } if(close == 2) {
                x = 0;
                y = 0;
                input = 0;
                close = 0;
                std::cout << "x: ";
                std::cin >> x;
                std::cout << "y: ";
                std::cin >> y;
                std::cout << "Input: ";
                std::cin >> input;
            }if (close != 1 && close != 2) {
                std::cout << "wrong input try again" << std::endl;
                std::cout << "Input: ";
                std::cin >> input;
            }**/
        }
        if(input == 4) {
            std::cout << x/y << std::endl;
            /**x = 0;
            y = 0;
            input = 0;
            std::cout << "do you want to exit?" << std::endl;
            std::cout << "1 yes " << std::endl;
            std::cout << "2 no" << std::endl;
            std::cout << "Input: ";
            std::cin >> close;
            if(close == 1) {
                std::cout << "come again" << std::endl;
                exit(0);
            } if(close == 2) {
                x = 0;
                y = 0;
                input = 0;
                close = 0;
                std::cout << "x: ";
                std::cin >> x;
                std::cout << "y: ";
                std::cin >> y;
                std::cout << "Input: ";
                std::cin >> input;
            }if (close != 1 && close != 2) {
                std::cout << "wrong input try again" << std::endl;
                std::cout << "Input: ";
                std::cin >> input;
            }**/
        }
    }
}

int main() {
    welcome();
    input();
    start();
    calc();
    return 0;
};