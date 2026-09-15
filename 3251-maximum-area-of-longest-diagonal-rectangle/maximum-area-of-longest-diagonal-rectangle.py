class Solution:
    
    def areaOfMaxDiagonal(self, dimensions: List[List[int]]) -> int:
        ans=0
        area=0
        mxarea=0
        for i in range(len(dimensions)):
            diagonal =sqrt(dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1])
            area = dimensions[i][0]*dimensions[i][1]
            if diagonal>ans:
                ans=diagonal
                mxarea=area
            elif diagonal==ans:
                mxarea=max(area,mxarea)
                
        return mxarea
        