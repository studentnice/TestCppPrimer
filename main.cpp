void M_Vector::Test3() {
    vector< vector<int> > b(10, vector<int>(5));        //创建一个10*5的int型二维向量

    /*
     * 作业 : 写出 遍历二维数组的方法
     * */

    //最普通方式遍历
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<5;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }

    // 迭代器遍历1
    for(vector<vector<int>>::iterator iter1=b.begin(); iter1!=b.end();iter1++)
    {
        for(vector<int>::iterator iter2=(*iter1).begin(); iter2!=(*iter1).end(); iter2++)
            cout<<*iter2<<" ";
        cout<<endl;
    }

    // 迭代器遍历2
    vector<int>::iterator iter=b[0].begin();
    for(int k=0;k<10; k++)
    {
        for(iter=b[k].begin();iter!=b[k].end();iter++)
            cout<<*iter<<" ";
        cout<<endl;
    }
}
