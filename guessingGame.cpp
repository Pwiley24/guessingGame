//Project: Guessing Game. User guesses a number between 0-100.
//Author: Paige Wiley
//Date: 9/13/2022

//1. No global variables
//2. No strings.
//3. You should include <iostream>, not stdio

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
  int input = 0;
  char play;
  bool guessing = true;
  bool playing = true;
  int guesses = 0;
  srand(time(NULL));

  
  while(playing == true) {
    int num = rand() % 100 + 1;
    cout << "Guess between 0-100: " << endl;
    while (guessing == true){
      cin >> input;
      if(input <= 100 && input >= 0){
        if(input == num) { //correct guess
	  guesses ++;
          cout << "Congrats. # of guesses: " << guesses << endl;
          guesses = 0;
	  guessing = false;
        } else if(input < num) { //guess too low
          guesses++;
          cout << "Too Low. Try again." << endl;
        } else if(input > num){ //guess too high
          guesses++;
          cout << "Too high. Try again." << endl;
        }
      }else {
        cout << "Guess between 0-100" << endl;
      }
    }
    cout << "Play again (enter y/n)?" << endl;
    cin >> play;
    if(play == 'n'){ //if you are done playing
    playing = false;
    } else if (play == 'y') { //if you are playing again
      guessing = true;
    }
  }
  
  return 0;
}
