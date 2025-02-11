#include "grade.h"

double grade(double midterm,double final,const vector<double>& hw)
{
	if(hw.size()==0)
		throw domain_error("student has done no homework");
	return grade(midterm,final,median(hw));		
}

double grade(double midterm,double final,double homework)
{
	return 0.2*midterm+0.4*final+0.4*homework; 
 } 
