#include<iostream>
using namespace std;
#include<string>
#include<stdio.h>
#include<cstring>
#include<math.h>
#include<queue>
#include<stdlib.h>

int a[100000]; //a保存输入的数字
int b[100000]; //b保存相应数字的次数，也就是b[i]表示a[i]出现的次数
int c1=0; //c1用来表示数组a的大小

int f( int *a, int c1, int v)
{
for( int i=0; i!=c1; ++i) //查找与v相同的a[i],并且返回i。否则返回-1
if( a[i]==v) return i;

return -1;
}
int main()
{
memset(b,0,sizeof(b));

int n;
while( cin>>n)
{
int temp=f(a,c1,n);
if( temp<0) { a[c1]=n; ++b[c1]; c1++;} //如果返回-1，则表示新加入的数，则c1加1.
else { ++b[temp];} //相应的次数加上一

}
for( int i=0; i!=c1; ++i)
{
cout<<a[i]<<" "<<b[i]<<endl;
}

return 0;
}