#include <cstdlib>
#include <ctime>
#include <iostream>


// Coin class definition
class Coin {

    private:

    //p for biased probablity
    double p;
    public:

    //use probability to create a biased coin
    Coin(double prob) {
        p = prob;
    }

    //flip the coin and return 1 for heads and 0 for tails
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

    //get probability
    double getProbability() {
        return p;
    }

    };
