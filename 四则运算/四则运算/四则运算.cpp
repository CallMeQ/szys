// 四则运算.cpp : 定义控制台应用程序的入口点。
//

// 1146.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include "stdafx.h"
#include "stdlib.h"  
#include "time.h"   //调用随机函数
#include "iostream"
using namespace std;
int main()
{  
    int A[10000],B[100000];//定义存放正确答案数组和存放错误答案数组
    int truenumber=0;//正确累加
    int falsenumber=0;//错误累加
    int i,k;
    int a,b;    //a，b为两个随机整数
    int g;    //g为随机产生四种运算符的情况
    int j;  //j为用户想要的题目数量
    int c,d,f; //c,d,f用户的选择
    cout<<"******欢迎进入随机产生四则运算程序******"<<endl;
    cout<<"****************************************"<<endl;
    cout<<"       是否有乘除法运算？（是->1,否->0）"<<endl;
    cin>>c;
    while(c!=0&&c!=1)
    {
        cout<<"请输入“0”或“1”"<<endl;
        cin>>c;
    }

    cout<<"       减法结果有无负数？（有->1,无->0）"<<endl;
    cin>>d;
    while(d!=0&&d!=1)
    {
        cout<<"请输入“0”或“1”"<<endl;
        cin>>d;
    }
    
    cout<<"       随机数数值范围是（100以内->1,随机->0）"<<endl;
    cin>>f;
    while(f!=0&&f!=1)
    {
        cout<<"请输入“0”或“1”"<<endl;
        cin>>f;
    }

    cout<<"****************************************"<<endl;
    
    
    
    cout<<"请输入题目数量：";
    cin>>j;
    while(j<=0)
    {
        cout<<"请输入大于0的数"<<endl;
        cin>>j;
    }
    for(i=0;i<j;i++)
    {  
    
        if(f==1)//控制随机数的范围
        {
            a=rand()%100;    //产生100以内随机数，将随机数控制在100以内
            b=rand()%100;
        }
        if(f==0)
            {
                a=rand();
                b=rand();
            }        

        if(c==0)//无乘除法时，输出加减
        {
            g=rand()%2;
            switch(g)
            {
            case 0:
                cout<<a<<"+"<<b<<"="<<endl;
                A[i]=a+b;//计算正确答案
                break;
            case 1:
                if(d==0)//控制减法结果有无负数
                {
                    if(a<b)
                    {
                        cout<<b<<"-"<<a<<"="<<endl;
                        A[i]=b-a;//保证输出减法结果是正数
                    }
                    else
                    {
                        cout<<a<<"-"<<b<<"="<<endl;
                        A[i]=a-b;
                    }
            
                }
                    else
                {
                    cout<<a<<"-"<<b<<"="<<endl;
                    A[i]=a-b;

                }
                break;
            }
        }
        if(c==1)//允许有乘除法时，输出加减乘除
        {
            g=rand()%4;   //产生随机运算符
            switch(g)
            {
            case 0://当随机数是0时，输出加法
                cout<<a<<"+"<<b<<"="<<endl;
                A[i]=a+b;
                break;
            case 1://当随机数是1时，输出减法
                if(d==0)
                {
                    if(a<b)
                    {
                        cout<<b<<"-"<<a<<"="<<endl;
                        A[i]=b-a;
                    }
                    else
                    {
                        cout<<a<<"-"<<b<<"="<<endl;
                        A[i]=a-b;
                    }

                }
                else
                {
                    cout<<a<<"-"<<b<<"="<<endl;
                    A[i]=a-b;

                }
                break;
            case 2:
                cout<<a<<"*"<<b<<"="<<endl;
                A[i]=a*b;
                break;
            case 3:
                cout<<a<<"/"<<b<<"="<<endl;
                A[i]=a/b;
                break;
            }
        }
    }
    
    cout<<"请依次输出答案："<<endl;//用户输出答案
    for(k=0;k<j;k++)
    {
        cout<<"请输入第"<<k+1<<"个答案"<<endl;
        cin>>B[k];
        if(B[k]==A[k])//判断用户给的结果是否正确
        {
            cout<<" √"<<endl;
            truenumber++;
        }
        else if(B[k]!=A[k])
        {
            cout<<" ×"<<endl;
            falsenumber++;
        }
    }
    cout<<"正确的答案有"<<truenumber<<"个"<<endl;
    cout<<"错误的答案有"<<falsenumber<<"个"<<endl;
    system("pause");
    return 0;
}


