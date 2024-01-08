#include "ruffini.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>

Ruffini::dict_t Ruffini::ruffini(float multi, std::vector<float> coefficients) {
    std::vector<float> resultant;
    std::vector<float> results = {coefficients[0]};

    for (unsigned i = 1; i < coefficients.size(); i++){
        results.push_back((results.at(i - 1) * multi) + coefficients.at(i));
    }

    float remainder = results.at(results.size() - 1);
    results.pop_back();
    dict_t returnable = {remainder, results};

    return returnable;
}
