class Solution {
public:
    int convertTime(string current, string correct) {
        
        
        int h1=stoi(current.substr(0,2));
        int h2=stoi(correct.substr(0,2));
        int m1=stoi(current.substr(3,4));
        int m2=stoi(correct.substr(3,4));

        int hour=h2-h1;
        if(hour<0) hour=hour+24;
        int minute=m2-m1;
        if(minute<0) minute=minute+60,hour--;
        int step=hour;
        
        while(minute>=60) step++,minute-=60;
        while(minute>=15) step++,minute-=15;
        while(minute>=5)  step++,minute-=5;
        while(minute>=1)  step++,minute-=1;
        
        return step;
    }
};
