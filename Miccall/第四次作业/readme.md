
搭建属于自己的一个博客

## 1. Node.js环境  

官网下载安装 (勾选 npm)

![](http://ww3.sinaimg.cn/large/9fe4afa0gw1faljhotcr1j20dv0atq4u.jpg)

在系统环境变量 配置path变量(没听说过环境变量？？)

在新打开的窗口中输入cmd，敲击回车，打开命令行界面。

```
node -v
npm -v
```
如果出现版本号 ，则成功 。

## 2. 特殊的github仓库

新建一个仓库 Github昵称.github.io

## 3. hexo环境  
在电脑上新建一个blog文件夹,该文件夹用于存放你的博客文件,blog
,目录下然后右键单击选择gitbash.
 
```
npm install -g hexo

```
测试 

```
hexo -v
```

初始化
```
hexo init
```
开启服务

```
hexo server

```

生成静态文件 
```
hexo clean
hexo g
```

部署到github 
```
hexo d
```

真的没时间写教程了 ，大家还是看看百度吧 。
hexo + github 搭建个人博客
