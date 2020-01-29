#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sc scanf

int n,res,m;
vector<string>s;

void readcase()
{
    sc("%d",&n);
    m=n;
}

void solvecase()
{
    int p,f=1,i=0;

    res=0;
    while(n>0)
    {
        p=n%16;
        if(p==10)
            s.push_back("A");
       else if(p==11)
            s.push_back("B");
      else if(p==12)
            s.push_back("C");
    else if(p==13)
            s.push_back("D");
     else if(p==14)
            s.push_back("E");
     else if(p==15)
            s.push_back("F");
   else if(p==0)
        s.push_back("0");
    else if(p==1)
        s.push_back("1");
    else if(p==2)
        s.push_back("2");
        else if(p==3)
        s.push_back("3");
        else if(p==4)
        s.push_back("4");
        else if(p==5)
        s.push_back("5");
        else if(p==6)
        s.push_back("6");
        else if(p==7)
        s.push_back("7");
        else if(p==8)
        s.push_back("8");
        else if(p==9)
        s.push_back("9");
        n=n/16;
    }

}
void printcase()
{
    reverse(s.begin(),s.end());
    int i;
    for(i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}


int main()
{
    int n;


    while(1)

    {
        readcase();
        solvecase();
        printcase();
    }
}


