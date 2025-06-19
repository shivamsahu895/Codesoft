#include<iostream>

using namespace std;
int main()
{   cout<< " N U M B E R    G U E S S I N G   G A M E "<<  endl;
	cout<<"Enter the answer"<<endl;
	int ans;
	cin>>ans;
	int guess;
	do
	{
		cout<<" Enter the guessing number ";
		
		cin>>guess;
		if(ans>guess)
		{
			cout<<" number is low "<<endl;
			cout<<" you lost  please try again"<<endl;
		
		
		}
		else if(ans<guess)
		{
			cout<<"number is  high  "<<endl;
			cout<< "you lost please try again"<<endl;
		}
	} while( ans!= guess);
	
	cout<<" Congratulation!!  you win the game ";

	
}
    
   
	
