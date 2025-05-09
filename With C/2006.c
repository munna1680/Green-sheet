/*#include<stdio.h>
int main(){
    int T;
    int a,b,c,d,e;
    int count = 0;

    scanf("%d %d %d %d %d %d %d",&T,&a,&b,&c,&d,&e);
    if(a == T) count++;
    if(b == T) count++;
    if(c == T) count++;
    if(d = T) count++;
    if(e = T) count++;

    printf("%d\n",count);
    return 0;

}*/
#include<stdio.h>
int main()
{
    int T,N;
    int count = 0;

    scanf("%d",&T);
    for(int i=1;i<=5;i++)
    {
        scanf("%d",&N);
        if(T == N)
        count++;
    }

    printf("%d\n",count);
    return 0;
}