#include <iostream>
using namespace std;

int main() {
	 int x,y,z,w,d,e,f,g;
	scanf("%d",&x);
	printf ("given amount is equal to ");
	printf("%d",y=x/500,z=x%500);
	printf(" Five Hundred notes ");
	printf("%d One Hundred notes ",w=z/100,d=z%100);
	printf("%d Fifty Rupees notes ",e=d/50,f=d%50);
	printf("%d Ten Rupees notes ",g=f/10);
	
	return 0;
}
