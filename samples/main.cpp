#include "../include/utils.h"
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    // Let's make sure the user provided a file!
    if (argc < 2) {
        std::cout << "Oops! It looks like you forgot to give me an XML file to read.\n";
        std::cout << "Try running it like this: " << argv[0] << " <your_file.xml>\n";
        return 1;
    }

    // Attempt to open the file they provided
    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cout << "Uh oh, I couldn't open the file '" << argv[1] << "'. Are you sure it exists?\n";
        return 1;
    }

    std::cout << "Awesome, I found your file! Here is what's inside:\n";
    std::cout << "--------------------------------------------------\n";

    // Read and print the file line by line
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << "\n";
    }

    std::cout << "--------------------------------------------------\n";
    std::cout << "All done! Hope that helps.\n";

    file.close();
    return 0;
}
