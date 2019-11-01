#include <stdio.h>
int cube(int n){
    int m;
    m = n*n*n;
    return m;

}
int countdigit(int x){
    int count;
    while(x!=0){
        x=x/10;
        count++;
    }
    return count;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int count = countdigit(n);
    int array[count];
    int sum=0,c=0;
    while(c<count){
        array[c]=n%10;
        n=n/10;    
        c++;
    }
    for(int i=0;i<c;i++){
        array[i] = cube(array[i]);
        sum = sum+array[i];
    }
    printf("The Armstrong number is : ");
    printf("%d\n",sum);
    
    return 0;

}