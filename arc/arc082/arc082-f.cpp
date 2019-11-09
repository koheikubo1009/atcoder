#include<cstdio>
#include<algorithm>
using namespace std;
int x,k,r[100001],q,t,y,a[100001],b[100001],c[100001],left,right,mid,d,e,f,flag;
int main(){
    scanf("%d",&x);
    scanf("%d",&k);
    r[0]=0;
    for(int i=0;i<k;i++){
        scanf("%d",&r[i+1]);
    }
    a[0]=0;
    b[0]=x;
    c[0]=0;
    for(int i=0;i<k;i++){
        flag=0;
        if(i%2){
            d=min(x,max(0,a[i]+c[i]+r[i+1]-r[i]));
            e=max(0,min(x,b[i]+c[i]+r[i+1]-r[i]));
        }
        else{
            d=max(0,min(x,a[i]+c[i]+r[i]-r[i+1]));
            e=min(x,max(b[i]+c[i]+r[i]-r[i+1],0));
        }
        if(e!=d){
            left=a[i];
            right=b[i];
            while(left<=right){
                mid=(right+left)/2;
                if(i%2){
                    f=max(0,mid+c[i]+r[i+1]-r[i]);
                    f=min(x,f);
                }
                else{
                    f=max(0,mid+c[i]+r[i]-r[i+1]);
                    f=min(x,f);
                }
                if(f==d){
                    left=mid+1;
                }
                else if(f==e){
                    right=mid-1;
                }
                else{
                    flag=1;
                    c[i+1]=f-mid;
                    a[i+1]=d-c[i+1];
                    b[i+1]=e-c[i+1];
                    break;
                }
            }
            if(!flag){
                a[i+1]=right;
                b[i+1]=left;
                c[i+1]=d-a[i+1];
            }
        }
        else{
            a[i+1]=b[i+1]=0;
            if(i%2){
                f=max(0,e);
                f=min(x,f);
            }
            else{
                f=max(0,e);
                f=min(x,f);
            }
            c[i+1]=f;
        }
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d %d",&t,&y);
        left=0;
        right=k;
        while(left<=right){
            mid=(right+left)/2;
            if(r[mid]==t){
                left=right=mid;
                break;
            }
            if(r[mid]>t){
                right=mid-1;
            }
            else if(mid+1>right){
                break;
            }
            else{
                left=mid+1;
            }
        }
        f=min(b[right]+c[right],c[right]+y);
        f=max(f,a[right]+c[right]);
        if(right%2){
            e=min(x,f+t-r[right]);
        }
        else{
            e=max(0,f-t+r[right]);
        }
        printf("%d\n",e);
    }
}