/*
subject: Lisette_Matute_A4.cpp
purpose: The purpose of this program is to act as a math 
		 tutor for addition, subtraction, and multiplication. 
author:lmatute
date:3/23/16
*/

#include <iostream>
#include <ctime> 
using namespace std; 

int main()
{
	//variable declarations 
	const int MIN =10;
	const int MAX =50; 
	int probType, num1, num2, userAns, ans;
	
	 
	do
{

	cout<<" Math Tutor Program:\n\n"; 
	cout<<"1.Addition\n";
	cout<<"2.Subtraction\n";
	cout<<"3. Multiplication\n";
	cout<<"4. Quit the Program\n"; 

	cout<<"Make a selection:"; 
	cin>>probType;

	while (probType < 1 || probType >4)
			{
				cout <<"\nInvalid Selection, try again:\n\n";
				cout<<" Math Tutor Program:\n\n"; 
				cout<<"1.Addition\n";
				cout<<"2.Subtraction\n";
				cout<<"3. Multiplication\n";
				cout<<"4. Quit the Program\n"; 

				cout<<"Make a selection:"; 
				cin>>probType;


			}
	
	

	srand(time(0)); 

	num1 = MIN + rand() % (MAX - MIN + 1); 
	num2 = MIN + rand() % (MAX - MIN + 1);

	switch (probType)
	{
	
		case 1:
			cout << num1 << " "<< "+"<<" "<< num2 <<" " << "="<<" ";
			cin>>userAns; 

			ans = num1 + num2;
			
			if (userAns == ans)
				cout << "That is correct!\n\n"; 
			else 
				cout << "The correct answer is:"<< ans <<endl; 

			
			break; 

		case 2:
			 
			cout << num1 << " "<< "-"<< " "<< num2 <<" " << "=" <<" ";
			cin>>userAns; 

			ans = num1-num2;

			if (userAns == ans)
				cout << "That is correct!\n\n"; 
			else 
				cout << "The correct answer is:"<< ans <<endl;
			break; 

		case 3:
			cout << num1 << " "<< "*"<< " "<< num2 <<" " << "=" <<" ";
			cin>>userAns; 

			ans = num1*num2;

			if (userAns == ans)
				cout << "That is correct!\n\n"; 
			else 
				cout << "The correct answer is:"<< ans <<endl; 
			break;

		default: 
			cout << "Quitting the Program\n\n";  
			 
	}
	
}
	while (probType != 4); 


	system ("pause");
	return 0; 
}