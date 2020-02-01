#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
class solution{
public:
	int reverse(int x){
		int max = pow(2,32);
		int min = -pow(2,32);
		
		int sum = 0;
		while(x!=0)
		{
			int temp = x%10; 
			if(sum<min/10||sum>max/10)
			{
				printf("over flow");
				return 0;	
			}
			sum = sum*10 + temp;
			x = x/10;
		}
		return sum;
	} 
	
};

int main(){
	srand( time(NULL));
	printf("hello ! \n");
	int x = rand();
	printf("%d \n",x);
	
	solution test1;
	int ans = test1.reverse(x);
	printf("%d", ans);
	
}
