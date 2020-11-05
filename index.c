#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int keyin01,n1=0,n2=0,n3=0;
        for(int i=0;i<n;i++){
            scanf("%d",&keyin01);
            n1+=(((keyin01%3)+1)%3)%2;
            n2+=(((keyin01%3)+0)%3)%2;
            n3+=(((keyin01%3)+2)%3)%2;
        }
        printf("%d %d %d\n",n1,n2,n3);
    }
    return 0;
}