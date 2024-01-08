
#ifndef RUFFINI_H
#define RUFFINI_H

#include <map>
#include <vector>
#include <string>

class Ruffini{
    public:
        typedef std::pair<float, std::vector<float>> dict_t;

        static dict_t ruffini(float multi, std::vector<float> coefficients);
};


#endif // RUFFINI_H
