#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",c/min(a,b));
}