/*��Ŀ�����������ַ������һ�����ʵĳ��ȣ������Կո������
 *����������һ���ַ������ǿգ�����С��5000�� 
 *�������������N�����һ�����ʵĳ��ȡ�
 *ʾ����
 *���룺hello world
 *�����5
 * 
 *���ߣ�zheng kaifan
 *ʱ�䣺2019/3/30 
 */ 
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<string> arr;
    string world;
    while(cin>>world)
    {
    	arr.push_back(world);
	}
	//cout<<world;
    vector<string>::iterator it;
    it=arr.end()-1;
    
    cout<< it->length()<<endl;
    /*string last;
    
    int i=0,j;
    int count;
    while(i<str.length())
    {
        for(j=i;;j++)
        {
            
            if(str[j]==' ')
            {
                i=j+1;
            }
            if(str[j]=='\0')
            {
                break;
            }
            
            count++;

        }
    }
    
    last=str.substr(i,count);
    
    cout<<last;*/
    return 0;
}
