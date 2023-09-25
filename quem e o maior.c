//ler tres valores e determinar o maior//

#include <stdio.h>
int main(){
    
    int a;
    int b;
    int c;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(a>b && a>c){
        printf("%d eh o maior\n",a);
    }
    else{
        if(b>c){
            printf("%d eh o maior\n",b);
        }else{
            printf("%d eh o maior\n",c);
        }
    }
    return 0;
}
