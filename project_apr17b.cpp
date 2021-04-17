#include<stdio.h>
main()
{
    int t,n,i,a,b,c,sum;
   scanf("%d",&t);
    while(t--){
        sum = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d%d%d",&a,&b,&c);
            sum = sum + (a*c);
    }
        printf("%d\n",sum);
        }
    return 0;
    }
    
