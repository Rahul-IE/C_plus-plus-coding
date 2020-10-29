#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int E[5] = {rand()%10,rand()%10,rand()%10,rand()%10,rand()%10};
    int s[5], user[5]; //input integers into an array s
    int lottery[5] = {0}; //lottery array of random numbers generated for s
    int i;
    int j = i;
    for (i=0;i<5;i++){cout << "Enter any integer for lottery array: "; cin >> s[i]; lottery[i] += E[i];}

     //till now the lottery array is created and displayed
     //next we will include and compare elements across both user and lottery arrays

   int score = 0; //number of digits within +-1 of each other
   for (j=0;j<5;j++){cout <<"\n Enter user array #s between 0 and 9: "; cin >> user[j];
   if(user[j]==lottery[j] || user[j]==lottery[j] + 1 || user[j]==lottery[j] - 1){score++;}}
   cout << "Score: " <<score<< endl;
   if(score == 5){cout << "Congrats! You just won a massive price \n";}
   else{cout << "Sorry, you did not win the lottery \n";}
   return 0;}
