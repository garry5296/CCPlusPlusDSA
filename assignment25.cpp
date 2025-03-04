#include<iostream>
using namespace std;
namespace assign25
{
	class Complex{
		private:
			int real,imag;
		public:
			void getValue()
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
			void getValue()
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
			void getVal()
			{
				cout<<endl<<"Enter a number to calculate factorial: ";
				cin>>num;
			}
			int fact()
			{
				int prod=1;
				while(num>=1)
				{
					prod*=num;
					num--;
				}
				return prod;
			}
	};
	class LargestNumber{
		private:
			int num1,num2,num3;
		public:
			void getVal()
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
			void getVal()
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
			void getVal()
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
			void getVal()
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
			void getVal()
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
			void getVal()
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
		private:
			int r,len,bre,side;
		public:
			void getDataCircle(int a)
			{
				r=a;
			}
			void getDataRectangle(int a,int b)
			{
				len=a;
				bre=b;
			}
			void getDataSquare(int a)
			{
				side=a;
			}
			void circleArea()
			{
				cout<<endl<<"Area of circle is: "<<r*r*3.14;
			}
			void rectangleArea()
			{
				cout<<endl<<"Area of rectangle is: "<<len*bre;
			}
			void squareArea()
			{
				cout<<endl<<"Area of square is: "<<side*side;
			}
	};
}

int main()
{
	cout<<"\n\n\e[1mQuestion1. Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number.\e[m";
	assign25::Complex c1,c2;
	c1.getValue();
	c1.disPlay();
	c2.getValue();
	c2.disPlay();

	cout<<"\n\n\e[1mQuestion2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time..\e[m";
	assign25::Time t1;
	t1.getValue();
	t1.disPlay();

	cout<<"\n\n\e[1mQuestion3. Define a class Factorial and define an instance member function to find the Factorial of a number using class..\e[m";
	assign25::Factorial f1;
	f1.getVal();
	cout<<"The factorial of number is "<<f1.fact();

	cout<<"\n\n\e[1mQuestion4. Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class..\e[m";
	assign25::LargestNumber l1;
	l1.getVal();
	cout<<"The largest of three number is "<<l1.largestNum();

	cout<<"\n\n\e[1mQuestion5. Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class..\e[m";
	assign25::ReverseNumber r1;
	r1.getVal();
	r1.numRevMain();

	cout<<endl<<endl"\e[1mQuestion6. Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called..\e[m");
	assign25::Square s1;
	s1.getVal();
	cout<<"The square of given number is "<<s1.numSq();
	
	cout<<endl<<endl"\e[1mQuestion7. Define a class Greatest and define instance member function to find Largest among 3 numbers using classes..\e[m");
	assign25::Greatest g1;
	g1.getVal();
	cout<<"The largest of three number is "<<g1.greatestNum();

	cout<<endl<<endl"\e[1mQuestion8. Define a class Rectangle and define an instance member function to find the area of the rectangle..\e[m");
	assign25::Rectangle rec1;
	rec1.getVal();
	cout<<"Area of rectangle is "<<rec1.recArea();

	cout<<endl<<endl"\e[1mQuestion9. Define a class Circle and define an instance member function to find the area of the circle..\e[m");
	assign25::Circle cir1;
	cir1.getVal();
	cout<<"Area of the circle is "<<cir1.circleArea();

	cout<<endl<<endl"\e[1mQuestion10. Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc..\e[m");
	assign25::Area a1;
	a1.getDataCircle(5);
	a1.circleArea();
	a1.getDataRectangle(6,4);
	a1.rectangleArea();
	a1.getDataSquare(13);
	a1.squareArea();
	return 0;
}