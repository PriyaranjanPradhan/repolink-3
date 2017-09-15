#include <iostream>
using namespace std;

int main() {

	int s1, s2, s3;

	cout<<"Enter three sides of triangle: \n";
	cin>> s1;
	cin>>s2;
	cin>>s3;

    if((s1+s2) > s3)
    {
        if((s2 + s3) > s1)
        {
            if((s1 + s3) > s2) 
            {
             
                cout<<"Triangle is valid.\n";
            }}}
            else
            {
                cout<<"Triangle is not valid.\n";
            }

    return 0;
}

