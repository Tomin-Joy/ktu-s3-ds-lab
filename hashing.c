#include<stdio.h>
int hashFunc(int val,int mod){
    return val % mod;
}
int probe(int val,int mod,int tb[]){
    int i=0,key;
    key=hashFunc(val,mod);
    while(tb[key]!=NULL){
        key=(key+1)%mod;
        i++;
        if(i>mod){
            printf("Hash table overflow");
            return 0;
        }
    }
    tb[key]=val;
    return 1;
}
int main(){
    int ht[10],mod=10,val;
    for(int i =0;i<10;i++)
        ht[i]=NULL;
    do{
        printf("Enter the value : ");
        scanf("%d",&val);
    }while (probe(val,10,ht));
    printf("\n\nThe table is :\n");
    for(int i =0;i<10;i++)
        printf("%d | %d\n",i,ht[i]);
}