/*题目描述：计算字符串最后一个单词的长度，单词以空格隔开。
 *输入描述：一行字符串，非空，长度小于5000。 
 *输出描述：整数N，最后一个单词的长度。
 *示例：
 *输入：hello world
 *输出：5
 * 
 *作者：zheng kaifan
 *时间：2019/3/30 
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
