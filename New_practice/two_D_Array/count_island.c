#include<stdio.h>
int R,C;
void dfs(int r, int c,char g[R][C]){
    if(r<0||c<0||r>=R||c>=C||g[r][c]=='0')
    return;
g[r][c]='0';//mark visited
dfs(r+1,c,g);
dfs(r-1,c,g);
dfs(r,c+1,g);
dfs(r,c-1,g);

}
int countIslands(char g[R][C]){
    int count=0;
    for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
if(g[i][j]=='1'){
    count++;
    dfs(i,j,g);
}
return count;
}
int main(){
    R=4;C=5;
    char grid[4][5]={
        {'1','1','0','0','0'},
        {'1','0','0','1','1'},
        {'0','0','1','0','0'},
        {'1','1','0','0','1'},

    };
    printf("Islands = %d\n",countIslands(grid));
}