#include <stdio.h>

int main() {
    long n,i,a,sum=0;    
        
            scanf("%ld",&n); 
            if(n<=1000){
            for(i=0;i<n;++i){
                scanf("%ld",&a);
                sum=sum+a;
            }
            printf("%ld",sum);
            }
            else
            {
                printf("n is to larger");
            }
     
    return 0;
            
}
