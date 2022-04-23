 void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        
        //  the is to reverse the matrix then do transpose of matrix
//          t.c O(n*m)
         
        
    for(int i=0;i<n;i++) reverse(matrix[i].begin(),matrix[i].end());
      for(int i=0;i<n;i++){
          for(int j=0;j<i;j++) swap(matrix[i][j],matrix[j][i]);
      }
      
    } 
