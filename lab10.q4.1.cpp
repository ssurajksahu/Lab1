#include<iostream>
using namespace std;
class Point{           // Declaration of class Point
  public:

 // default class constructor (with no arguments):
   Point();
// class constructor that sets the coordinates x, y to the values xval,yval
Point(int xval, int yval);
 
// member function for moving a point by dx, dy:
void Move(int dx, int dy);
// member functions for getting values of x, y:
int Get_X() const;
int Get_Y() const;

// member functions for setting x, y to xval, yval respectively
void Set_X(int xval);
void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:
void Print();

// private data members x, y represent coordinates of the point:
private:
int X,Y;
};

// Methods for class Point

//class constructor sets X, Y to zero when no values are specified:
Point::Point(){

X=0;
Y=0;
}

// class constructor sets X, Y to given values xval, yval:
 Point::Point(int xval, int yval){
  X=xval;
  Y=yval;
}
// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const{
return X;
}
// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const{
return Y;
}
// Set_X sets the value of X coordinate to xval
void Point ::Set_X(int xval){
X=xval;
}
// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval){
Y=yval;
}

//Lab 7 exercise 4.1. Add definition of member function print:

void Point::Print(){
cout<<"the co-ordination is"<<"("<<X<<","<<Y<<")"<<endl;
}

// Declaration of class Rectangle

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE
class Rect{
          int X1, Y1;           //bottom left corner
          int X2, Y2;
          int X3, Y3;          //top right point
          int X4, Y4;
	  int Side1();	
	  int Side2();
  public:
	Rect();
	Rect(int xv1,int yv1,int xl4,int yv4);
	int Area();
	void Print();
};

 // Methods for class Rectangle

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 
Rect::Rect(){
        X1=0;Y1=0;
	X2=1;Y2=0;
	X3=1;Y3=1;
	X4=0;Y4=1;
}
Rect::Rect(int xv1,int yv1,int xv3,int yv3)
{	Point B1;
	Point B2;
	B1.Set_X(xv1);
	B1.Set_Y(yv1);
	
	B2.Set_X(xv3);
	B2.Set_Y(yv3);

	X1=B1.Get_X();
	Y1=B1.Get_Y();
	X3=B2.Get_X();
	Y3=B2.Get_Y();

	X2=X1;
	Y2=Y3;
	X4=X3;
	Y4=Y1;

		
}
int Rect::Side1(){
   return (X3-X1);
}
int Rect::Side2(){
   return (Y3-Y1);
}
int Rect::Area(){
   return Side1()*Side2();
}
void Rect::Print(){
   cout<<"co-ordinates of corners of Rectangle"<<"("<<X1<<","<<Y1<<")"<<";"<<"("<<X2<<","<<Y2<<")"<<";"<<"("<<X3<<","<<Y3<<") "<<";"<<"("<<X4<<","<<Y4<<")";}

//  main() function for testing classes Point and Rectangle


 // Testing classes Point and Rectangle
int main(){
  // Declaring a point using default class constructor (x = y = 0):
Point p1;
  cout<<"the co-ordinate value is"<<"("<<p1.Get_X()<<","<<p1.Get_Y()<<")"<<endl;
  // Declaring a point with coordinates X = 2, Y = 3:
Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
 p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:
	cout<<"point p1 is ";p1.Print();cout<<endl;
	cout<<"point p2 is ";p2.Print();cout<<endl;
//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  
	Rect rect1;// Declaring a rectangle  using default class constructor
	Rect rect2(1,1,2,3);// Declaring a rectangle  using parametraized class constructor
	cout<<"four points of rectangle 1 are ";rect1.Print();cout<<endl;
	cout<<"area of rectangle 1 is "<<rect1.Area()<<endl;
	cout<<"four points of rectangle 2 are ";rect2.Print();cout<<endl;	
	cout<<"area of rectangle 2 is "<<rect2.Area()<<endl;
	

  return 0;
}





