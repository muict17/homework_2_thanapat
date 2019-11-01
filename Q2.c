#include <stdio.h>
int main(){
    int n,m;
    int i,j;
    printf("Enter row x column : ");
    scanf("%d %d",&n,&m);
    int array[n][m];
    printf("Enter elements :\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            for(j=0;j<m;j++){
                printf("%d ",array[i][j]);
            }
        }
        else{
            for(j=m-1;j>=0;j--){
                printf("%d ",array[i][j]);
            }
        }
    }
    return 0;

}