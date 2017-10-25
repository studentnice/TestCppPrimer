#include <vector>
#include <iostream>
#include <algorithm>
using namespace std ;
class M_Vector{
private:
    // 元数据
    
    //动态数组 vector
    vector<int> V ;

public:

    M_Vector(int* A)
    {
        //循环插入
        for (int i = 0; i < 10; i++) {
            //push_back 尾插
            V.push_back(A[i]);
        }
    }

public:
 
    void Test3();
};


int main() {
    m_vector->Test3();
    return 0;
}
void M_Vector::Test3() {
    vector< vector<int> > b(10, vector<int>(5));        //创建一个10*5的int型二维向量

    /*
     * 作业 : 写出 遍历二维数组的方法
     * */
    //迭代器遍历
    for (vector<int>::iterator iter = b.begin(); iter != b.end() ; iter ++ )
    {
        cout<<  *iter <<endl;
		for (vector<int>::iterator iter_2 = (*iter).begin; iter_2 != (*iter).end(); iter_2++)
		{
			cout << *iter_2 << endl;
		}
    }

	//数组循环风格遍历
	int row = b.size();
	int collor = b[0].size();
	cout << row << endl << collor << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < collor; j++)
		{
			cout << b[i][j];
		}
		cout << endl;
	}

}