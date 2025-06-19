#include<iostream>
using namespace std;
int main()
{    cout<< " S I M P L E    C A L C U L A T O R " << endl;
	int a,b;
	cout<<"Enter the first number :--"<< endl;
	cin>>a;
	cout<<"Enter the second number :-- "<< endl;
	cin>>b;
	cout <<"Enter the operator to perform calculation :--" << endl;
	char op;
	cin>> op;
	switch(op)
	{
		case '+' :
		 cout<< "Addition  of two number is "<< a+b << endl;
		 break;
		case '-' : 
		 cout<< "Subtraction  of two number is "<< a-b << endl;
		 break;
		case '*' :
		 cout<< "Multiplication  of two number is "<< a*b << endl;
		 break;
		case '/' : 
		 if (b!=0)
		 {
		 	cout<< "Division of two number is "<< a/b<< endl;
		 }
		 else
		 {
		 	cout<<" Division is not allowed "<< endl;
		 	break;
		 }
		 
		default :
		 cout<< "Enter the valid operator "<< endl;
		 break;
		
		
		
		
	}
	return 0;
	
}
