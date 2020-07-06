grid= [[1,3,1],
  [1,5,1],
  [4,2,1]]
row = len(grid)
col = len(grid[0])
print(row,col)
dp = [[0]*col for _ in range(row)]
print(dp)
dp[0][0] = grid[0][0]
for i in range(0,row):
    for j in range(0,col):
        if i==0 and j != 0:
            dp[i][j] = dp[i][j-1] + grid[i][j]
        elif j == 0 and i != 0:
            dp[i][j] = dp[i-1][j] + grid[i][j]
        else:
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j]
        #end if
    #end for
#end for
print(dp)
print(dp[-1][-1])