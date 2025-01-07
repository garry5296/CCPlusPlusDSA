#include<iostream>
using namespace std;

class Complex{
	private:
		int real,imag;
	public:
		void setValue()
		{
			cout<<endl<<"Enter real and imag part of complex number: ";
			cin>>real>>imag;
		}
		void disPlay()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
};
class Time{
	private:
		int hr,min,sec;
	public:
		void setValue()
		{
			input:
			cout<<endl<<"Enter hours, minutes and seconds: ";
			cin>>hr>>min>>sec;
			if((hr<0 || hr>23) || (min<0 || min>60) || (sec<0 || sec>60))
			{
				cout<<endl<<"Error: Invalid Time!!";
				goto input;
			}
		}
		void disPlay()
		{
			cout<<hr<<" hr "<<min<<" min "<<sec<<" sec "<<endl;
		}
};
class Factorial{
		int num;
	public:
		void setVal()
		{
			cout<<endl<<"Enter a number to calculate factorial: ";
			cin>>num;
		}
		int fact(int n)
		{
			if(n == 1)
				return 1;
			return n*fact(n-1);
		}
};
class LargestNumber{
	private:
		int num1,num2,num3;
	public:
		void setVal()
		{
			cout<<endl<<"Enter three numbers: ";
			cin>>num1>>num2>>num3;
		}
		int largestNum()
		{
			return (num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
		}
};
class ReverseNumber{
	private:
		long int num;
		void numRev(int n)
		{
			if(n%10)
			{
				cout<<n%10;
				numRev(n/10);
			}
		}
	public:
		void setVal()
		{
			cout<<endl<<"Enter a number to find it's reverse: ";
			cin>>num;
			if(num<0)
				num=-num;
		}
		void numRevMain()
		{
			numRev(num);
		}

};
class Square{
	private:
		int num;
		static int n;
	public:
		void setVal()
		{
			cout<<endl<<"Enter a number: ";
			cin>>num;
		}
		float numSq()
		{
			return num*num;
		}
};
class Greatest{
	private:
		int num1,num2,num3;
	public:
		void setVal()
		{
			cout<<endl<<"Enter three numbers: ";
			cin>>num1>>num2>>num3;
		}
		int greatestNum()
		{
			return (num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
		}
};
class Rectangle{
	private:
		int l,b;
	public:
		void setVal()
		{
			cout<<endl<<"Enter length and breadth of a rectangle: ";
			cin>>l>>b;
			if(l<0)
				l=-l;
			if(b<0)
				b=-b;
		}
		float recArea()
		{
			return l*b;
		}
};
class Circle{
	private:
		int r;
	public:
		void setVal()
		{
			cout<<endl<<"Enter radius of the circle: ";
			cin>>r;
			if(r<0)
				r=-r;
		}
		float circleArea()
		{
			return 3.14*r*r;
		}
};
class Area{
	int r,l,b,side
}
int main()
{
	// cout<<"\n\n\e[1mQuestion1. Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number.\e[m";
	// Complex c1,c2;
	// c1.setValue();
	// c1.disPlay();
	// c2.setValue();
	// c2.disPlay();

	/*cout<<"\n\n\e[1mQuestion2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time..\e[m";
	Time t1;
	t1.setValue();
	t1.disPlay();*/

	// cout<<"\n\n\e[1mQuestion3. Define a class Factorial and define an instance member function to find the Factorial of a number using class..\e[m";
	// Factorial f1;
	// f1.setVal();
	// cout<<"The factorial of number is "<<f1.fact(f1.num);

	// cout<<"\n\n\e[1mQuestion4. Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class..\e[m";
	// LargestNumber l1;
	// l1.setVal();
	// cout<<"The largest of three number is "<<l1.largestNum();

	// cout<<"\n\n\e[1mQuestion5. Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class..\e[m";
	// ReverseNumber r1;
	// r1.setVal();
	// r1.numRevMain();

	// printf("\n\n\e[1mQuestion6. Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called..\e[m");
	// Square s1;
	// s1.setVal();
	// cout<<"The square of given number is "<<s1.numSq();
	
	// printf("\n\n\e[1mQuestion7. Define a class Greatest and define instance member function to find Largest among 3 numbers using classes..\e[m");
	// Greatest g1;
	// g1.setVal();
	// cout<<"The largest of three number is "<<g1.greatestNum();

	// printf("\n\n\e[1mQuestion8. Define a class Rectangle and define an instance member function to find the area of the rectangle..\e[m");
	// Rectangle r1;
	// r1.setVal();
	// cout<<"Area of rectangle is "<<r1.recArea();

	// printf("\n\n\e[1mQuestion9. Define a class Circle and define an instance member function to find the area of the circle..\e[m");
	// Circle c1;
	// c1.setVal();
	// cout<<"Area of the circle is "<<c1.circleArea();


	printf("\n\n\e[1mQuestion10. Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc..\e[m");
	cout<<
	

	return 0;
}