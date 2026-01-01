//
// Created by Ansh Kataria on 01/01/26.
//

#include "../include/parser.h"

#include <fstream>
#include <iostream>
#include <sstream>

std::vector<Price> parser::parsePrice() {
    std::vector<Price> prices;

    std::fstream csv(filename, std::ios::in);
    if (!csv.is_open()) {
        std::cout << "Error opening file" << std::endl;
    }

    std::string line;
    // skip the first line from the csv it usually contains the headings of the columns
    std::getline(csv, line);

    // using stringstream to convert the line into a stream and then we can read from the line like we can do from streams.
    while (std::getline(csv, line)) {
        std::stringstream ss(line);
        std::string date;
        std::string closingPrice;
        std::string volume;
        std::string open;
        std::string high;
        std::string low;
        std::getline(ss, date,',');
        std::getline(ss, closingPrice,',');
        std::getline(ss, volume,',');
        std::getline(ss, open,',');
        std::getline(ss, high,',');
        std::getline(ss, low,',');
        Price temp;
        temp.date = date;
        temp.closingPrice=std::stod(closingPrice);
        prices.push_back(temp);
    }
    csv.close();
    return prices;
}
