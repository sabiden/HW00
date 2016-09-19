//Shaik Abiden
//9-18-16
//HW 00
//Systems Pd 10

#include <stdio.h>

int MulFiveBelThou(){
  int total = 0;
  int cur = 0;
  while (cur < 1000){
    total = total + cur;
    cur += 5;
  }
  return total;
}

int SumOfEvenFib(){
  int prev,cur,holder,sum;
  sum = 0;
  holder = 0;
  prev = 0;
  cur = 1;
  while (cur < 4000000){
    holder = cur;
    cur = prev + cur;
    prev = holder;
    if(cur % 2 == 0){
      sum += cur;
    }
  }
  return sum;
}

int main(){
  int j = MulFiveBelThou();
  printf("Adding all the multiples of 5 that are less than 100 returns: %d\n", j);
  printf("The sum of the even fibonnaci numbers less than 4 million is: %d\n", SumOfEvenFib());
  return 0;
}


