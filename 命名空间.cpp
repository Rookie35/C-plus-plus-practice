/*
* @Author: ZKF
* @Date:   2019-04-07 15:35:35
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-07 15:45:09
*/

/**
 * 命名空间
 */
#include <iostream>

namespace all
{
	namespace kf
	{
		int grade=100;
	}
	namespace wu
	{
		int grade=10;
	}
}

namespace test
{
	class point
	{
	public:
		int x;
		int y;
	};
}

//using namespace test;
using namespace all;
int main()
{
	std::cout<<"zhengkaifan"<<std::endl;
	std::cout<<	all::kf::grade<<std::endl;
	std::cout<< all::wu::grade<<std::endl;

	test::point p;
	p.x=4;
	p.y=7;

	return 0;
}