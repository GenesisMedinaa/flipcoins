#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;
#include "src/coin.hpp"


int main() {

  srand(time(0));

  int nCounts[] = {100, 500, 700, 1000};
  int mCounts[] = {10, 50, 100, 350};
  double pIncrease[] = {0.3, 0.5, 0.7, 0.9};


  ofstream outputFile("output.txt");

  for (double p : pIncrease) {
    Coin coin(p);
  
    for (int n : nCounts) {
      for (int m : mCounts) {
        for(int trial = 0; trial < m; trial++) {
          int heads = 0;
          for(int i = 0; i < n; i++) {
            heads += coin.flips();
          }
          cout << "Trial " << trial + 1 << ": " << "Number of Flips(n) = " << n <<
           ", Number of Trials(m) = " << m << ", Probability(p) = " << p << 
           ", Number of Heads = " << heads << endl;
        }
      }
    } 
  }

  outputFile.close();
  cout << "Results written to output.txt" << endl;
return 0;
}
