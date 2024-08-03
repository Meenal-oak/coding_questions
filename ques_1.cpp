//Climbing Stairs to reach at the top.
//You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
//constrients: 1 <= n <= 45


#include <bits/stdc++.h>
using namespace std;

int series(int n){
  if(n<=1) return n;
  return series(n-1)+series(n-2);
}
int no_of_ways(int s){
  return series(s+1);
}
int main(){
  int s;
  cin>>s;
  if(s>45 && s<1) return -1;
  cout<< "No. of ways= "<<no_of_ways(s);
  return 0;
}