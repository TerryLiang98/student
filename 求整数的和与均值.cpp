#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n,sum,x;
	int count=0;
	scanf("%d",&n);
	while((n>=1&&n<=10000)&&(count<n)){
		scanf("%d",&x);
		if(abs(x)>=1&&abs(x)<=10000){
			count++;
			sum+=x;
		}
	}
	printf("%d %.5lf",sum,double(sum)/n);
	return 0;
}
