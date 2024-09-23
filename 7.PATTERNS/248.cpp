/*
PATTERN - 96
248.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
            A
          B A
        C B A
      D C B A
    E D C B A 
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=0;i<n;i++)
    {   
        for(int j = 0;j<n-i;j++)
            cout<<" "<<" ";
        
        for(int k=i;k>=0;k--)
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