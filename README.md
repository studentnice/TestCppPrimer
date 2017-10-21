## 1. 作业

[github教程 ](http://miccall.tech/2016/08/27/design/Git%E6%95%99%E7%A8%8B/)
一人创建一个自己的文件夹，把第一期的作业 pull Request 到 
[github TestCppPrimer](https://github.com/miccall/TestCppPrimer)

## 2. 工程架构

|文件           | 内容                |
| ------------- |:-------------------:| 
| main.cpp      | 主文件 调试类成员   | 
| heaeername.h  | 头文件 声明类方法   | 
| source.cpp    | 资源文件 方法的实现 |  

类的定义实在头文件中 ， 他的定义实在相应的资源文件中，在主文件中调用对应的类，只需引入相应的头文件即可。