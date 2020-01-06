class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int ret = 0;
        for(int i = 0;i<grid.size();++i){
            for(int j = 0;j<grid[0].size();++j){
                if(grid[i][j]>0) ret+=4*grid[i][j]+2;
                if(i<grid.size()-1) ret-=(min(grid[i][j],grid[i+1][j])*2);//¿Û³ýÓëÓÒ±ßÖØµþ
                if(j<grid.size()-1) ret-=(min(grid[i][j],grid[i][j+1])*2);//¿Û³ýÓëÏÂ±ßÖØµþ
            }
        }
        return ret;
    }
};
