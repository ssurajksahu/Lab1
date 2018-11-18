#include <iostream>
using namespace std;

class Rect{
    public:
      double length;                  //Length of a Rectangle
      double breadth;                 //Breadth of a Rectangle


 //Member function declaration
      double getarea(void);
      double getperi(void);
      void setlength(double len);
      void setbreadth(double bre);
     
};

 //Member function definition
     double Rect::getarea(void){
         return length * breadth;
}
     double Rect::getperi(void){
         return 2*(length + breadth); 
}
     void Rect::setlength(double len){
         length= len; 
}
     void Rect::setbreadth(double bre){
          breadth= bre;
} 
     

//Main function for the program
int main(){
     Rect Rect1, Rect2;          //Declare Rect1, Rect2 of type Rect
     double area ,perimeter;
     int p,q,m,n;

cout<<"Enter length and breadth of first Rectangle"<<endl;
cin>>m>>n;
      
//Rect1 specialisation
    Rect1.setlength (m);
    Rect1.setbreadth (n);

cout<<"Enter length and breadth of second Rectangle"<<endl;
cin>>p>>q;

//Rect2 specialisation
   Rect2.setlength(p);
   Rect2.setbreadth(q);

//Area and Perimeter of 1st Rectangle
   area = Rect1.getarea();
   perimeter = Rect1.getperi();
cout<<"Area of first Rectangle is "<<area<<endl;
cout<<"Perimeter of second REctangle is "<<perimeter<<endl;
cout<<endl;

//Area and Perimter of second Rectangle
   area = Rect2.getarea();
   perimeter = Rect2.getperi();
cout<<"Area of second Rectangle is "<<area<<endl;
cout<<"Perimeter of second Rectangle is "<<perimeter<<endl;

return 0;
} 












