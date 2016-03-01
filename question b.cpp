#include <iostream>
using namespace std;

int main(){
	int a,b,max;
	int i,j,c;
	long long temp;
	c=1;
	max=0;
	while(cin >> a >> b){
		if (a>b){//make i<j
			i=b;
			j=a;
		}
		else if (b>a){
			i=a;
			j=b;
		}
		else
			i=j=a;
		for(;i<=j;i++){
			temp=i;
			while(temp!=1){
				if(temp%2!=0){
					temp=temp*3+1;
					c++;
				}
				else{
					temp=temp/2;
					c++;
				}	
			}
			if(c>max)
				max=c;
			c=1;
		}
		cout << a << " " << b << " " << max << endl;
		max=0;
	}	
	return 0;
}