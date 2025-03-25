#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main() {
    std::string command;

    std::cout << "Hi there！Pls enter your command:\n";

    while (true) {
        std::cout << ">>> ";
        std::getline(std::cin, command);

        if (command == "exit") break;

        if (command == "log") {
            std::ifstream logfile("command_log.txt");
            if (!logfile) {
                std::cout << "No log file found.\n";
            } else {
                std::cout << "--- Command History ---\n";
                std::string line;
                while (std::getline(logfile, line)) {
                    std::cout << line << '\n';
                }
                std::cout << "------------------------\n";
            }
            continue;
        }

        // record to log
        std::ofstream logfile("command_log.txt", std::ios::app);
        logfile << command << std::endl;

        // Execute command
        int ret = system(command.c_str());
        if (ret == -1) {
            std::cout << "Failed\n";
        }
    }

    return 0;
}
