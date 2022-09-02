#include <iostream>
#include<math.h>
using namespace std;
double bsearch(double x)
{
    double root,a,b,mid;
    if(x>1.0)
    {
        root=sqrt(x);
        a=1;
        b=x;
        do
        {
            mid=(a+b)/2;
            if(mid*mid < x)
            {
                a=mid;
            }
            else
            {
                b=mid;
            }
        }while(mid<0.00001);
        root=mid;
        return(root);
    }
    else
    {
        return(0);
    }
}
int main() {
    double x;
    cin>>x;
    double root=bsearch(x);
    cout<<"The result is : "<<root;
}