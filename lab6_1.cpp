#include<iostream>
using namespace std;

int main()
{   
    int num;
	int countEven = 0;
	int countOdd = 0;
	cout << "Enter an integer: ";
    cin>>num;
	
	if(num!=0)
	{
		while(num != 0)
		{
			cout << "Enter an integer: ";
    		cin>>num;
    			if(num%2==0)
    			{
    				countEven += 1;
				}
				else if(num%2==1)
				{
					countOdd += 1;
				}
    	
    		if(num == 0)
    		{
    			cout << "#Even numbers = "<<countEven<<endl;
    			cout << "#Odd numbers = "<<countOdd;
			}
        }
	}
	else
	{
		cout << "#Even numbers = "<<countEven<<endl;
    		cout << "#Odd numbers = "<<countOdd;
	}
    return 0;
}
