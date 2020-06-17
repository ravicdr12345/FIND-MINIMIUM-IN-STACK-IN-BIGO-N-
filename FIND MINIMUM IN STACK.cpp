#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int>s,v;
	int n,p,y;
	cin>>n;
	int Top=INT_MAX,x,max;
	max=Top;
	for(int i=0;i<n;i++){
		cin>>x;
	
		
		if(x<=max&&x<=Top){
			max=x;
			p=x;
			
         v.push(p);
		}
		else{
			v.push(p);
		}
		s.push(x);
		Top=s.top();
	}
	int m=v.top();
	cout<<m<<endl;
}
