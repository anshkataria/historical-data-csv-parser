#include <iostream>

#include "parser.h"

int main() {
    parser parser("data/AAPL.csv");
    std::vector<Price> prices = parser.parsePrice();

    std::cout << "Parsed Data: " << std::endl;
    for (auto price : prices) {
        std::cout << "Date: " <<price.date << "Closing Price: "<<price.closingPrice<<std::endl;
    }

    return 0;
}
