#include<iostream>
using std::cout;
using std::endl;
int main()
{
	int arr[3][4]=
	{
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};
	
	// range for
	//使用范围for除了内层循环外，其他所有循环控制变量都应该是引用类型 
    for (const int(&row)[4] : arr)
        for (int col : row) cout << col << " ";
    cout << endl;

    // for loop
    for (size_t i = 0; i != 3; ++i)//size_t
        for (size_t j = 0; j != 4; ++j) cout << arr[i][j] << " ";
    cout << endl;

    // using pointers.
    for (int(*row)[4] = arr; row != arr + 3; ++row)
        for (int *col = *row; col != *row + 4; ++col) cout << *col << " ";
    cout << endl;
    
	return 0;
}
