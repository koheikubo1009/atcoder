#include<cstdio>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d\n",m-gcd(n,m));
}