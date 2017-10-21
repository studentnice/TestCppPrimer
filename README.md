## 1. 作业

[github教程 ](http://miccall.tech/2016/08/27/design/Git%E6%95%99%E7%A8%8B/)
一人创建一个自己的文件夹，把每一期的作业 pull Request 到 
[github TestCppPrimer](https://github.com/miccall/TestCppPrimer)

## 2. IED推荐
> 教科书上用的C++ 普遍为 C++ 98 版本，而我用的是C++11版本 。或者你也可以选用14，17版本。

### 1.编译器推荐 MinGW 11版本
[下载地址:https://pan.baidu.com/s/1hsenFjY](https://pan.baidu.com/s/1hsenFjY) : c2av

### 2.IED推荐 
|IED                 | 优点                |  不足|
| ------------------ |:-------------------:|:------:|
| Visual Studio 2017 | 功能全面，强大,集成高 |占用空间大，启动慢 |
| Clion       		 | 简单易用              | Cmake编译 ，略复杂|
| Sublime Text 3     | 拓展性好，启动快     | 没有编译器，IED环境需要自己配置|

vs适合做大工程，比如openCV 或者openGL等。
clion适合做小项目，管理比较好，可移植性高。
st3 适合写写算法，方便简单。
以及其他个人习惯就好。

## 2. 工程架构

|文件           | 内容                |
| ------------- |:-------------------:| 
| main.cpp      | 主文件 调试类成员   | 
| heaeername.h  | 头文件 声明类方法   | 
| source.cpp    | 资源文件 方法的实现 |  

类的定义实在头文件中 ， 他的定义实在相应的资源文件中，在主文件中调用对应的类，只需引入相应的头文件即可。