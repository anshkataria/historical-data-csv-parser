#include <iostream>

#include "../include/parser.h"

int main() {
    parser parser("data/AAPL.csv");
    std::vector<Price> prices = parser.parsePrice();

    if (prices.size() != 0) {
        std::cout << "Parsed Data: " << std::endl;
        for (auto price : prices) {
            std::cout << "Date: " <<price.date << "Closing Price: "<<price.closingPrice<<std::endl;
        }
    }
    int period = 10;
    double sma = parser.calculateSMA(prices, period);
    std::cout <<"SMA: "<< sma << std::endl;
    return 0;
}
