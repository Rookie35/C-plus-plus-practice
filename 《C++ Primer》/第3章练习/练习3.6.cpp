/*
 *编写 一段程序，使用范围for语句将字符串内的所有字符用X代替 
 */
 #include<iostream>
 #include<string>
 using namespace std;
 int main()
 {
 	string str="Hello World";
 	int num=str.size();
 	for (auto &c : str)//范围for语句 
 		c = 'X';
	 cout<<str<<endl;
	 return 0;  
  } 
