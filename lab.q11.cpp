#include<iostream>
using namespace std;
int main(){

 int x;
 double y;
 char z;
 float q;
 bool w;

 int *x1=x;
double *x2=&y;
char   *x3=&z;
float  *x4=&q;
bool   *x5=&w;


int p=sizeof(x);
int p2=sizeof(*x2);
int p3=sizeof(*x3);
int p4=sizeof(*x4);
int p5=sizeof(*x5);


cout<<"size of variable x="<<sizeof(*x2)<<"size of pointer vvariable"<<p;

return 0;
}
