/*��Ŀ������ 
 *����������
 *��������� 
 *ʾ��1 
 *���� 
 *5.5 
 *��� 
 *6 
 *���ߣ�zheng kaifan 
 *ʱ�䣺2019/03/31 
 */

#include<iostream>

using namespace std;

int main()
{
	float input;
	int output;
	cin>>input;
	
	int i;
	i=input;
//	cout<<i<<endl;
	if(input<float(i+0.5))
		output=i;
	else 
		output=i+1; 
	
	cout<<output<<endl;
	return 0;
}
