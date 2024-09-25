/*
PATTERN - 102
254.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    1 1 1 1 1
      2 2 2 2 
        3 3 3
          4 4
            5
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {   
        for(int j = 1;j<=n;j++)
        {
            if(i<=j)
                cout<<i<<" ";
            else
                cout<<" "<<" ";
        }            
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