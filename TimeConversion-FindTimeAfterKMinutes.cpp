#include<bits/stdc++.h>
using namespace std;


string findTime(string &time,int k){

  int  totalMinutes = ((time[0] - '0')
                       * 10
                   + time[1] - '0')
                      * 60
                  + ((time[3] - '0')
                         * 10
                     + time[4] - '0');

    totalMinutes+=k;
    int hour=(totalMinutes/60)%24;
    int minute=totalMinutes%60;
    string ans="";
    if(hour<10){

        ans="0"+to_string(hour)+":";
    }else{
        ans=to_string(hour)+":";
    }
    if(minute<10){
        ans+=("0"+to_string(minute));
    }else{
        ans+=(to_string(minute));
    }
    return ans;
}
int main(){

    string time="10:25";
    int k=70;
    cout<<findTime(time,k)<<"\n";
    return 0;
}
