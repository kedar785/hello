#include<stdio.h>
int max(int a,int b){
    return a>b?a:b;
}
int histMax(int h[],int n){
    int st[100],top=-1,maxA=0,i=0;
    while(i<n){
        if(top==-1 || h[st[top]]<=h[i])
        st[++top]=i++;
    else{
        int ht=h[st[top--]];
        int w=(top==-1)? i:i-st[top]-1;
        maxA=max(maxA,ht*w);
    }
    }
    while(top!=-1){
        int ht=h[st[top--]];
        int w=(top==-1)?i:i-st[top]-1;
        maxA=max(maxA,ht*w);
    }
    return maxA;
}

int main(){
    int R,C,i,j;
    scanf("%d %d",&R ,&C);
    int a[100][100],h[100]={0};
    for(i=0;i<R;i++)
    for(j=0;j<C;j++)

scanf("%d",&a[i][j]);
int ans=0;
for(i=0;i<R;i++){
for(j=0;j<C;j++)
h[j]=(a[i][j]==0)>0;h[j]+1;

ans=max(ans,histMax(h,C));
}

printf("%d",ans);
return 0;
}


