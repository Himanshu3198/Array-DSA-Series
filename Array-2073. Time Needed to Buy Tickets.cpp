class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       
           int maxTicket=tickets[k];
           int res=0;
          for(int i=0;i<tickets.size();i++){
              
              if(maxTicket==0){
                  break;
              }
                 if(i==k+1){
                     maxTicket--;
                 }
                res+=min(tickets[i],maxTicket);
              
          }
        
        return res;
        
    }
};
