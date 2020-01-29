#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sc scanf

int main()
{
    int n;


while(sc("%d",&n)==1)// read any num

    {
        int i=0,m,p,res=0,f=1;
        m=n;
        while(n>0)
        {
            p=n%8;
            //pf("p=%d\n",p);
            f*=10;
            // pf("f=%d\n",f);
            res+=(p*f);
            //pf("res=%d\n",res);
            n=n/8;
            // pf("nn%d\n",n);
        }
        pf("The octal of %d is %d\n",m,res/10);
    }
}

