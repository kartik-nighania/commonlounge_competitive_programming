#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
   int p1=0, p2=0, x, y, z, max=0, n;
   cin >> n;
 
while(n--)
{
   cin >> x >> y; p1 += x; p2 += y; 
 
   if(abs(p1-p2) > max)
   {
      max = abs(p1-p2);
      p1 > p2 ? z = 1 : z = 2;
   }
}
   cout << z << " " << max;
	return 0;
}