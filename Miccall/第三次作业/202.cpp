
#include <iostream>
#include <map>
#include <set>
#include <sstream>
using namespace std;
    
bool isHappy(int n) { 
    stringstream ss;
	string str ;
	ss<<n;
	ss>>str;
	set<int> m_set;
	while(1)
	{
		int sum = 0 ;
		for (int i = 0; i < str.size(); ++i)
		{
			sum +=  (str[i]-'0') * (str[i]-'0') ;
		}
		cout<<sum<<endl;

		//如果可以找到 说明循环了 
		if(m_set.find(sum) != m_set.end())
			return false ;
		else{
			//没找到
			m_set.insert(sum);
			stringstream ss2;
			ss2<<sum;
			ss2>>str;
			if(sum==1)
				return true;
		}
	}
	return true;
    }

int main()
{
	cout<<isHappy(2)<<endl;
}