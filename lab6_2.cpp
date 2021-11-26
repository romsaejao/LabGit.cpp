#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double a1)
	 {   
    	double rad;
        rad = a1*(M_PI/180);
        return rad;
    }
double rad2deg(double a1)        
    {
    	double deg;
        deg = a1*(180/M_PI);
        return deg;
    }
double findXComponent(double l1,double l2,double a1,double a2)
    {
    	double xcomp;
        xcomp = (l1*cos(a1))+(l2*cos(a2)); 
        return xcomp;
    }
double findYComponent(double l1,double l2,double a1,double a2)
    {
    	double ycomp;
        ycomp = (l1*sin(a1))+(l2*sin(a2));
        return ycomp;
    }
double pythagoras(double xcomp,double ycomp)
    {
    	double result_vec_length;
        result_vec_length = sqrt( pow(xcomp,2) + pow(ycomp,2) );
        return result_vec_length;
    }
void showResult(double xcomp,double ycomp)
    {
        cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"  ;
        cout<<"Length of the resultant vector = " << xcomp ;
        cout<<"\nLength of the resultant direction = " << ycomp ;
        cout<<"\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    }

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}




