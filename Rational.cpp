#ifndef _rational_h
#include "rational.h"
#endif

void main()
{
	 try{
			Rational x(5,6);
			Rational y(-5,4);
			Rational z(1,2); //try z(0,2)to check the / operators

			cout<<"The absolute value of "<<y<<" is "<<abs(y)<<endl;
			x/=z;
			cout << "The variable z = x/z is "<<z<<endl;
			cout <<"The product of "<<x<<" and "<< y<<" is "<< x*y<<endl;
			cout<<"Enter a rational number in form a/b";
			cin >> x;
			cout <<"x has value "<<x<<endl;
			cout<<"Enter a rational number in form a/b";
			cin >> y;
			cout <<"y has value "<<y<<endl;


			//extra parens to get rid of dumb warning
			int w1 = 1;
			cout<<"Test < for non rational is 1/2 < w (1)?"<<(z < w1 )<<endl;
			cout<<"Test <= "<<(z<=w1)<<endl;
			cout<<"Test > "<< (z>w1)<<endl;
			cout <<"Test >= "<<(z>=w1)<<endl;
			cout <<"Test == "<< (z==w1)<<endl;
			cout <<"Test != "<< (z!=w1)<<endl;
	 }
	 catch (char *errorMessage)
	 {
		cout<<errorMessage<<endl;
	 }
}