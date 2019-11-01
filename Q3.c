#include <stdio.h>
int main(){
    int hr,m,gap=0;
    printf("Enter hour and minute hands : ");
    scanf("%d %d",&hr,&m);
    if((hr-m<=6&&hr-m>=0)||(m-hr<=6&&m-hr>=0)){
        if(hr-m>0){
            gap = hr-m;
        }else{
            gap = m-hr;
        }
    }else{
        if(hr-m>0){
            gap = 12-(hr-m);
        }else{
            gap = 12-(m-hr);
        }
    }
    printf("%d\n",gap*30);

    return 0;

}