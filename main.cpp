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


  //to clear terminal with large output
  ofstream outputFile("output.txt");
 
// p loop using array increasing
  for (double p : pIncrease) {
    Coin coin(p);
  
    //increase n count from array
    for (int n : nCounts) {

      //increase m count from array
      for (int m : mCounts) {

        // trial m // n times
        for(int trial = 0; trial < m; trial++) {
          int heads = 0;
          for(int i = 0; i < n; i++) {
            heads += coin.flips();
          }

          //output file print to avoid terminal flood
          outputFile << "Trial " << trial + 1 << ": " << "Number of Flips(n) = " << n <<
           ", Number of Trials(m) = " << m << ", Probability(p) = " << p << 
           ", Number of Heads = " << heads << endl;
        }
      }
    } 
  }
  //close output file
  outputFile.close();
  cout << "Results in output.txt" << endl;
return 0;
}
