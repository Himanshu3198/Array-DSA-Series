// Closest perfect square and its distance

#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n){

    int x=sqrt(n);
    if(x*x==n) return true;

    return false;
}

int func1(int num){
   
   int ans1 =num;
   int ans2=num;
       ans1++;
       ans2--;
    while(1){
    
       if(isPerfect(ans1)){
           break;
       }
       ans1++;
        
    }
      while(1){
     
        if(ans2<=0){
            break;
        }
       if(isPerfect(ans2)){
           break;
       }
       ans2--;
        
    }


    if(abs(ans1-num)<abs(ans2-num)){
      return ans1;
  }
  return  ans2;


}

   

int main(){


    int n=20;

    cout<<func1(n)<<"\n";
}