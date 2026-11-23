#include <iostream>
#include <ctime>
#include <fstream>
#include <iomanip>

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
          //avoid flood in terminal
          outputFile << setw(6) << n
                     << setw(8) << m
                     << setw(10) << p
                     << setw(12) << trial + 1
                     << setw(14) << heads << "\n";
        }
      }
    }
  }
  //close output file
  outputFile.close();
  cout << "Results in output.txt" << endl;
return 0;
}
