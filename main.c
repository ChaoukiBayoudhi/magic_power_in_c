#include <stdio.h>
int y;//variable globale
int getValue(void)
{
    int n1;//variable locale
    //n=20;//n n'est pas accessible car elle est une variable locale declarée dans la fonction main
    y=100;
    do {
        printf("Donner un entier >0 : ");
        scanf("%d",&n1);
    }while(n1<=0);
    return n1;
}
int getSquare(int n)
{
    int i,c=0;
    for(i=1;i<2*n;i+=2)
        c+=i;//c=c+i;
    return c;
}

int main() {
    int n,res;
    n=getValue();
    res= getSquare(n);
    printf("%d^2=%d\n",n,res);


    //n1=10; //n1 n'est pas accessible car elle est une variable locale declarée dans la fonction getValue
    //printf("y=%d\n",y); //=>y=100
    //y=30;
   // printf("y=%d\n",y);//=>y=30
    return 0;
}
