/*
PATTERN - 94
246.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
            A
          A B
        A B C
      A B C D
    A B C D E 
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=0;i<n;i++)
    {   
        for(int j = n-1;j>i;j--)
            cout<<" "<<" ";
        
        for(int k=0;k<=i;k++)
            cout<<(char)(k+65)<<" ";
            
        cout<<endl;
    }
}
int main()
{
	int n;
	cout<<"Enter the input number"<<endl;
	cin>>n;
	patternPrint(n);
return 0;
}