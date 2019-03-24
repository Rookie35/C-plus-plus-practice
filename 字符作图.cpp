#include<iostream>
#include<string>

using namespace std;

void output_rectangle();

void output_isosceles_triangle();

void output_tian();

int main(int argc,char const *argv[])
{
	while(true)
	{
		cout << "Please enter your choice\n";
		cout << "1.rectangle\n2.isosceles triangle\n3.Tian\n4.quit\n";
		cout << endl << "Choice:";
		
		int choice;
		cin >> choice;
		
		cout << endl;
		
		//
		int quit = 0;
		
		switch(choice)
		{
			case 1:output_rectangle();break;
			
			case 2:output_isosceles_triangle();break;
			
			case 3:output_tian();break;
			
			case 4:quit++;break;
			
			default:cout << "Wrong Input";break;
		}
		
		if(quit) break;
		
		system("pause>nul&&cls");
	}
	return 0;
}

void output_rectangle()
{
	cout << "Please enter the length and width of the rectangle:\n";
	
	int re_length,re_width;
	cout << "Length:";
	cin >> re_length;
	cout << "Width:";
	cin >> re_width;
	
	cout << endl;
	
	const string rectangle_row(re_length,'*');
	const string spaces(re_length-2,' ');
	const string rectangle_row_second = "*" + spaces + "*";
	
	for(int i = 0;i < re_width;++i)
	{
		if(i == 0 || i == re_width -1) 
			cout << rectangle_row << endl;
		else
			cout << rectangle_row_second << endl; 
	} 
}

void output_isosceles_triangle()
{
	cout << "Please enter the bottom of the isosceles triangle(only odd number):";
	
	int tri_bottom;
	cin >> tri_bottom;
	
	if(tri_bottom%2 == 0)
	{
		cout << "Please enter odd number!\n";
		return;
	}
	
	const int height = (tri_bottom + 1) / 2;
	
	for(int i = 0,j = height - 1;i < height;++i,--j)
	{
		string spaces(j,' ');
		
		if(i == 0) cout << spaces << "*" << endl;
		else if(i != height - 1)
		{
			string blank(2 * i - 1,' ');
			string one_row = "*" + blank + "*";
			cout << spaces << one_row << endl;	
		}
		else
		{
			string one_row(2 * (i+1) - 1,'*');
			cout << one_row << endl;
		}
	}
}

void output_tian()
{
	cout << "Please enter the cols and rows of the Tian(only odd number and >=3):\n";
	
	int rows,cols;
	cout << "Cols:";
	cin >> cols;
	
	if(cols % 2 == 0 || cols < 3)
	{
		printf("\nPlease emter odd number or >=3!\n");
		return;
	}
	
	cout << "Rows:";
	cin >> rows;
	
	if(rows % 2 == 0 || rows <3)
	{
		printf("\nPlease enter odd number or >=3!\n");
		return;
	}
	
	const string first(cols,'*');
	const string second_blank((cols - 3) / 2,' ');
	const string second = "*" + second_blank + "*";
	
	for(int i = 0;i < rows;++i)
	{
		if(i == 0 || i == rows - 1 || i == rows / 2)
			cout << first <<endl;
		else cout << second << endl;
	}
}
