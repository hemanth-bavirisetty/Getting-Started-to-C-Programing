#include<stdio.h>
void read(int a[10][10],int m,int n);
void display(int a[10][10],int m,int n);
void add(int a[10][10],int b[10][10],int m , int n);
void subtract(int a[10][10],int b[10][10],int m, int n);
void mul(int a[10][10],int b[10][10],int m ,int n,int q);
void main(){
    int a[10][10], b[10][10],m,n,p,q;
    printf("enter row and column sizes for matriix A and matrix B :\n");
    scanf("%d%d%d%d",&m,&n,&p,&q);
    printf("enter %d elements of matrix A:",m*n);
    read(a,m,n);
    printf("enter %d elements of matrix B: \n",p*q);
    read(b,p,q);
    printf("matrix A is \n");
    display(a,m,n);
    printf("matrix B is \n");
    display(b,p,q);
    if (m==p && n==q){
        printf("addition of two matrices is \n");
        add(a,b,m,n);
        printf("subraction of two matrices is \n");
        subtract(a,b,m,n);
    }
    else{printf("Addition & subraction of two matrices is not possible");}
    if (n == p){
        printf("multiplication of two matrices is :\n");
        mul(a,b,m,n,q);
    }
    else {printf("multiplication of two matrices is not possible");}
}
void read (int a[10][10],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){scanf("%d",&a[i][j]);}
    }
}
void display(int a[10][10],int m,int n){
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){printf("%d ",a[i][j]);}
        printf("\n");
    }
}
void add (int a[10][10],int b[10][10],int m ,int n){
    int z[10][10] = {0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){z[i][j] = a[i][j] + b[i][j];}
    }
    display(z,m,n);
}
void subtract (int a[10][10],int b[10][10],int m ,int n){
    int y[10][10] = {0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){y[i][j] = a[i][j] - b[i][j];}
    }
    display(y,m,n);
}
void mul(int a[10][10],int b[10][10],int m ,int n,int q){
    int w[10][10] = {0};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<n;k++)
            {
                w[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    display(w,m,q);
}
