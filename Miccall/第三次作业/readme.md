W## stl库中的set 和 map 

一般set和map用于查找算法。
- set可以看作一个集合，判断一个元素是否存在这个集合之中，set 满足集合的所有性质。

- map看作一个字典(也称映射)，用一个关键字，去找他对应的值。他俩(key,value) 总是成对出现的。

## 常用方法 
insert 
find
erase
change(map)

## 例子讲解 leetcode 349题 
给定两个数组nums 求两个数组的公共元素
如 nums1 = [1,2,2,1] nums2 = [2,2]
结果为 [2]
结果中每个元素只能出现一次，顺序是任意的。

``` cpp
	
	//传入两个数组 ， nums1和 nums2 
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
	{
		//声明一个set 直接用 nums1 初始化  
        set<int> record (nums1.begin() ,nums1.end() );
        
        /*
        除了初始化，或者可以 把第一个数组遍历存入set中
        for(int i = 0 ; i > num1.size() ; i++ )
            record.insert(num1[i]);
        */
        
        //遍历一次nums2 看看里面的元素是否在nums1中存在 。如果可以找到，就把这个存入res
        set<int> res ;
        for(int i = 0 ; i < nums2.size() ; i++ )
            if(record.find(nums2[i]) != record.end())
                res.insert(nums2[i]);
        //遍历结束后 res存放的 就是他俩的公共元素了 

        /*
        因为要返回一个vector 所以最后只要遍历res 把res依次放入vector就行 
        vector<int> reslt ;
        for(set<int>::iterator itr = res.begin() ; itr != res.end() ; itr ++ )
            reslt.push_back( *itr );
        
        return reslt ;
        
        */
        
        // 还可以用初始化的方法  
        return vector<int>(res.begin() , res.end());
    }

```

## 例子讲解 leetcode 350 题
给定两个数组nums 求两个数组的交集 
如nums1[1,2,2,1]  , nums2 = [2,2]
结果[2,2] 
出现的顺序是任意的 。

- 这个和第一题有什么区别呢 ，就在于，元素的个数，他是可以重复的。

``` cpp
	
	// 同样传入 nums1 和 nums2 
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        //声明一个 map key的类型是int value的类型也是int 
        map<int,int> record ; 
        /*	
        	我们要看他们的交集，就要先判断他每个元素出现的次数，
        	这样，我们就用key表示他的元素，value表示他出现的次数 
        	遍历一次 nums1 ，把他的元素个数记录下来 。*/
        
        for(int i = 0 ; i< nums1.size() ;i++ )
        {
            record[nums1[i]]++ ; 
        }
        

        /*
        	继续遍历第二个数组 ，就要看看第二个数组的元素，在第一个数组中是否存在 ，每找到存在一个 ，我们就在记录中减去一个 
        */
        vector<int> res ;
        for(int i = 0 ;i < nums2.size();i ++)
        {
        	//他的个数大于0， 说明这个元素存在 
            if( record[nums2[i]] > 0 )
            {
                res.push_back( nums2[i] );
                record[nums2[i]] -- ;
            }
        }
        
        //返回结果
        return res ;
        
    }
```
## 作业 (二选一)

242题 判断字符串t是否是字符串s的变换字符顺序后得到的结果
如 s = "anagram"  t = "nagaram" , 返回true 
如 s = "rat"  t = "car" , 则返回 false 

``` cpp

bool isAnagram(string s, string t) {

}

```

202题 判断一个数是否为happy number 也就是，一个数，
将其替换为其各位数字的平方和，重复这个过程，如果最终能得到1
，说明这个数就是一个happy number ，如果这个过程陷入了一个不包含1的循环，则不是happy number 。
比如 
19  1的平方 + 9的平方 = 82 
82  8的平方 + 2的平方 = 68 
68  6的平方 + 8的平方 = 100 
100 1的平方 + 0 + 0  = 1 

则19就是happy number 
陷入循环的情况就是 ，万一发现某个过程 他的计算结果又是68 ，那么他就不是一个happy number 。 

``` cpp

bool isHappy(int n) {
	
}
```
