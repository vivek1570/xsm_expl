#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int maxi=-1000;
    int i=0;
    while(i<n)
    {
        int x;
        scanf("%d",&x);
        maxi=max(maxi,x);
    }
    return maxi;
}
int max(int x,int y)
{
    if(x>y)
    return x;
    else return y;
}