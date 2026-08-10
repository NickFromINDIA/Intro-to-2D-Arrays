#include <stdio.h>
int main(){
    int arr[4][4]={
    {9,7,5,8},{1,2,3,4},{5,9,5,7},{8,9,7,4}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n"); 
    }
}
