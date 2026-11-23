#include <cstdlib>
#include <ctime>
#include <iostream>


class Coin {

    private:

    double p = 0.65;
    public:

    Coin(double prob) {
        p = prob;
    }

    int flips() {
        double r = rand() % 100;
        if (r < p * 100) {
            //heads
            return 1;
        } else {
            //tails 
            return 0;
        }
    }

    double getProbability() {
        return p;
    }

    };
