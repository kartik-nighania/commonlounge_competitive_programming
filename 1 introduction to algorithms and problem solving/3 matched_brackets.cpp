#include <iostream>
 
using namespace std;
 
int main()
{
	int n, temp, maxCount = 0, countPos, x = 0, sym = 0, maxSym = 0, symPos; 
	
	cin >> n;

	// sym checks when a sequence of opening and closing is matched.
	// the total number of opening brackets doesnt define the depth. for eg. (()(())) has 3 not 2.
	// x checks the total number of symbols betweek sym conditions.
	
	for(int i=1; i<=n; i++)
	{
		cin >> temp;
 
		x++;
 
		if(temp == 1)
		{
		  sym++;
 
		  if(sym > maxCount)
		  {
		  	maxCount = sym;
		  	countPos = i;
		  }
		
		}
		else
			sym--;
	
		if(sym == 0)
		{
			if(x > maxSym)
			{
				maxSym = x;
				symPos = i - maxSym + 1;
			}
 
			x = 0;
		}
 
	}
 
	cout << maxCount << " " << countPos << " " << maxSym << " " << symPos; 
} 