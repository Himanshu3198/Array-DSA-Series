class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        
               
               set<pair<int,int>>uniquePoints;
               for(int i=0;i<circles.size();i++){
                int center_x=circles[i][0];
                int center_y=circles[i][1];
                int r=circles[i][2];
               for(int xi=-100;xi<=100+r;xi++){
                   for(int yi=-100;yi<=100+r;yi++){
                          int dis_x=(center_x-xi);
                          int dis_y=(center_y-yi);
                          int dist=((dis_x*dis_x)+(dis_y*dis_y));
                       if(dist<=r*r){
                          uniquePoints.insert({xi,yi});
                       }
                   }
               }
        }
        return uniquePoints.size();
            
        
             
    }
};
