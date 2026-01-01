//
// Created by Ansh Kataria on 01/01/26.
//

#ifndef CSV_PARSER_PARSER_H
#define CSV_PARSER_PARSER_H
#include <string>
#include <vector>

struct Price {
    std::string date;
    double closingPrice;
};

class parser {
private:
    std::string filename;
public:
    parser(std::string filename) {
        this->filename = filename;
    } ;
    std::vector<Price> parsePrice();
};


#endif //CSV_PARSER_PARSER_H