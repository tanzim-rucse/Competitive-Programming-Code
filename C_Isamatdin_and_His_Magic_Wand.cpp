#include<bits/stdc++.h>

using namespace std;
double func(double x)
{

  double y;
  y=0;
  y=pow(x,4)-14*pow(x,3)+60*pow(x,2)-70*x;
  return y;

}

double aa(double a,double b)
{
  double v;
  v=0;
  v=a+0.382*(b-a);
   return v;
}

double bb(double a,double b)
{
  double v;
  v=0;
  v=a+0.618*(b-a);
   return v;
}
int main()
{
    double a,b,r;
    int i,k,j,m,n;

    n=0;
    cout<<"input the expected range\n";
    cin>>r;
     cout<<"input the initial starting and ending value\n";
    cin>>a>>b;

    while(b-a>r){

        if( func(aa(a,b)) <= func( bb(a,b)) ){ b=bb(a,b);  }
        else{  a=aa(a,b);  }
        //cout<<a<<"   "<<b<<"\n";
         cout<<"after "<<n+1<<"th iteration a,b  "<<a<<"   "<<b<<"\n";
        n++;
    }

     cout<<"it took "<<n<<"itearation\n";
    cout<<"now the range is a,b  "<<a<<"  "<<b<<" and the difference is "<< b-a<<"\n";




    return 0;
}