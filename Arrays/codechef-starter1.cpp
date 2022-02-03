#include <iostream>
using namespace std;

int main() {
int t;
while(t--)
{
  int x,y;
  cin>>x>>y;
 if(x==y || y==x)
  {
   cout<<2*x-1<<endl;
  }
  else 
  {
    cout<<(x+y)<<endl;
  }

}
return 0;
}
