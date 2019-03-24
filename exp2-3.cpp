#include<iostream>
#include<string>

using namespace std;

int main(int argc,char const *argv[])
{
	cout << "Please enter your first name:";
	
	string name;
	cin >> name;
	
	const string greeting = "Hello," + name + "!";
	
	cout << endl;
	
	cout << "Please enter the pad between the greeting and the frame:\n";
	int pad_up,pad_down,pad_left,pad_right;
	
	cout << "Up pad:";
	cin >> pad_up;
	
	cout << "Down pad:";
	cin >> pad_down;
	
	cout << "Left pad:";
	cin >> pad_left;
	
	cout << "Right pad:";
	cin >> pad_right;
	
	const int rows = pad_up + pad_down + 3;
	const string::size_type cols = greeting.size() + pad_left + pad_right + 2;
	 
	const string spaces(greeting.size() + pad_left + pad_right,' ');
	
	cout << endl;
	
	for(int r = 0;r < rows;++r){
		string::size_type c = 0;
		while(c != cols)
		{
			if(r == pad_up + 1 && c == pad_left +1)
			{
				cout << greeting;
				c += greeting.size();
			}
			else
			{
				if(r == 0 || r == rows - 1 || c == 0 || c == cols -1)
				{
					cout << "*";
					c++; 
				}
				else if(r == pad_up + 1)
				{	
					cout << " ";
					c++;
				}
				else
				{
					cout << spaces;
					c += spaces.size();
				}
			}
		}
		cout << endl;
	}
	return 0;
}
