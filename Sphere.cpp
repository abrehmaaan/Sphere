#include<iostream>
using namespace std;
class Sphere{
	double radius;
public:
	Sphere(double r){
		if(r>0){
			radius = r;
		}
		else{
			radius = 1;
		}
	}
	void setRadius(double r){
		if(r>0){
			radius = r;
		}
	}
	double getRadius(){
		return radius;
	}
	double calCircumference(){
		return 2*3.14159*radius;
	}
	double calArea(){
		return 4*3.14159*radius*radius;
	}
	double calVolume(){
		return 4/3*3.14159*radius*radius*radius;
	}
};
int main(){
	Sphere s(4);
	cout<<"Circumference = "<<s.calCircumference()<<endl;
	cout<<"Area = "<<s.calArea()<<endl;
	cout<<"Volume = "<<s.calVolume()<<endl;
	return 0;
}
