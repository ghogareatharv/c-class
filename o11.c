#include<stdio.h>
void main(){
    int x=8;
    int ans;
    ans = ++x + ++x + ++x + ++x ;
    printf("%d\n",x);
    printf("%d\n",ans);

}