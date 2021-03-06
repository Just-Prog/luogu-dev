/*------------------------------------
    P1003 [NOIP2011 提高组] 铺地毯
    noip2011 提高组 day1 第 11 题
------------------------------------*/

//为了准备一个独特的颁奖典礼，组织者在会场的一片矩形区域（可看做是平面直角坐标系的第一象限）铺上一些矩形地毯。
//一共有 n 张地毯，编号从 1 到 n 。
//现在将这些地毯按照编号从小到大的顺序平行于坐标轴先后铺设，后铺的地毯覆盖在前面已经铺好的地毯之上。
//地毯铺设完成后，组织者想知道覆盖地面某个点的最上面的那张地毯的编号。注意：在矩形地毯边界和四个顶点上的点也算被地毯覆盖。
//https://www.luogu.com.cn/problem/P1003
//部分代码借鉴了https://clear-skies.blog.luogu.org/solution-p1003

#include<iostream>
using namespace std;
int main(){
    int n; //地毯数，1<=n<=10000
    cin>>n;
    int a[10001],b[10001],g[10001],k[10001];
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i]>>g[i]>>k[i]; //注意:(a,b)是地毯左下角的坐标.g,k是该块地毯x,y轴上的长度
    }
    int x,y; //判断用的点
    cin>>x>>y;
    for(int d=n;d>=1;d--){ //逆序倒推
        if(x>=a[d]&&x<=a[d]+g[d]&&y<=b[d]+k[d]&&y>=b[d]){
            cout<<d<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}