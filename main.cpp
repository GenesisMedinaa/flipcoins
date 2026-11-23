#include <iostream>
#include <ctime>
using namespace std;
#include "src/coin.hpp"

int main() {

  srand(time(0));

  int nCounts[] = {100, 500, 1000, 5000, 10000, 50000, 100000, 500000, 1000000};
  int mValues[] = 

  Coin coin(0.65);

  int n = 100;
  int m = 10;

  for(int trial = 0; trial < m; trial++) {
    int heads = 0;
    for(int i = 0; i < n; i++) {
      heads += coin.flips();
    }
    cout << "Trial " << trial + 1 << ": " << heads << " heads out of " << n << " flips." << endl;
  }

return 0;
}
