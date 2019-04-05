#include<iostream>
#include<iomanip>
#include<ios> 
#include<string>
#include<vector>
#include<algorithm>
#include <iomanip>
#include <ios>
#include "grade.h"
#include "student_info.h" 

using namespace std;

int main()
{
	/*cout<<"Please enter your first name:";
	string name;
	cin>>name;
	cout<<"Hello,"<<name<<"!"<<endl;
	
	cout<<"Please enter your midterm and final exam grades:";
	double midterm,final;
	cin>>midterm>>final;
	
	cout<<"Enter all your homework grades,"
	"followed by end-of-file:";
	
	vector<double> homework;
	double x;
	while(cin>>x)
		homework.push_back(x);
	
	typedef vector<double>::size_type vec_sz;
//	using vec_sz=vector<double>::size_type;
	vec_sz size=homework.size();
	if(size==0){
		cout<<endl<<"You must enter your grades."
		"Please try again."<<endl;
		return 1;
	}
	
	sort(homework.begin(),homework.end());
	
	vec_sz mid=size/2;
	double median;
	median=size%2==0?(homework[mid]+homework[mid-1]/2):homework[mid];
	
	*/
	
	
	/*int count=0;
	double sum=0;
	
	double x;
	
	while(cin>>x){
		++count;
		sum+=x;
	}
	*/
	/* 
	streamsize prec=cout.precision();
	 
	cout<<"Your final grade is"<<setprecision(3)
	<<0.2*midterm+0.4*final+0.4*median 
	<<setprecision(prec)<<endl;*/ 
	
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen=0;
	
	while(read(cin,record)){
		maxlen=max(maxlen,record.name.size());
		students.push_back(record);
	}
	
	sort(students.begin(),students.end(),compare);
	
	for(vector<Student_info>::size_type i=0;
	i!=students.size();++i){
		cout<<students[i].name
		<<string(maxlen+1-students[i].name.size(),' ');
		
	try{
		double final_grade=grade(students[i]);
		streamsize prec=cout.precision();
		cout<<setprecision(3)<<final_grade
		<<setprecision(prec);
	}catch(domain_error e){
		cout<<e.what();
	}
	cout<<endl;
	}
	return 0;
}
