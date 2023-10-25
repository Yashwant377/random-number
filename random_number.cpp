#include <iostream>
#include <random>
using namespace std;

int main() {
  // Generate a random number between 1 and 100.
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dist(1, 100);
  int secret_number = dist(gen);
  
  int guess = 0;
  
  while (guess != secret_number){
    
    cout<<"Guess a number between 1 and 100: "<<endl;
    cin >>guess;

    // Check if the guess is too high or too low.
    if (guess > secret_number){
      cout<<"Too high, try again: "<<endl;
    } else if (guess < secret_number){
      cout<<"Too low, try again: "<<endl;
    }
  }
  
  cout<<"Congratulations! You guessed correctly!"<<endl;

  return 0;
}
