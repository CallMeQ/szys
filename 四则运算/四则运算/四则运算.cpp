// ��������.cpp : �������̨Ӧ�ó������ڵ㡣
//

// 1146.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


#include "stdafx.h"
#include "stdlib.h"  
#include "time.h"   //�����������
#include "iostream"
using namespace std;
int main()
{  
    int A[10000],B[100000];//��������ȷ������ʹ�Ŵ��������
    int truenumber=0;//��ȷ�ۼ�
    int falsenumber=0;//�����ۼ�
    int i,k;
    int a,b;    //a��bΪ�����������
    int g;    //gΪ���������������������
    int j;  //jΪ�û���Ҫ����Ŀ����
    int c,d,f; //c,d,f�û���ѡ��
    cout<<"******��ӭ����������������������******"<<endl;
    cout<<"****************************************"<<endl;
    cout<<"       �Ƿ��г˳������㣿����->1,��->0��"<<endl;
    cin>>c;
    while(c!=0&&c!=1)
    {
        cout<<"�����롰0����1��"<<endl;
        cin>>c;
    }

    cout<<"       ����������޸���������->1,��->0��"<<endl;
    cin>>d;
    while(d!=0&&d!=1)
    {
        cout<<"�����롰0����1��"<<endl;
        cin>>d;
    }
    
    cout<<"       �������ֵ��Χ�ǣ�100����->1,���->0��"<<endl;
    cin>>f;
    while(f!=0&&f!=1)
    {
        cout<<"�����롰0����1��"<<endl;
        cin>>f;
    }

    cout<<"****************************************"<<endl;
    
    
    
    cout<<"��������Ŀ������";
    cin>>j;
    while(j<=0)
    {
        cout<<"���������0����"<<endl;
        cin>>j;
    }
    for(i=0;i<j;i++)
    {  
    
        if(f==1)//����������ķ�Χ
        {
            a=rand()%100;    //����100������������������������100����
            b=rand()%100;
        }
        if(f==0)
            {
                a=rand();
                b=rand();
            }        

        if(c==0)//�޳˳���ʱ������Ӽ�
        {
            g=rand()%2;
            switch(g)
            {
            case 0:
                cout<<a<<"+"<<b<<"="<<endl;
                A[i]=a+b;//������ȷ��
                break;
            case 1:
                if(d==0)//���Ƽ���������޸���
                {
                    if(a<b)
                    {
                        cout<<b<<"-"<<a<<"="<<endl;
                        A[i]=b-a;//��֤����������������
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
        if(c==1)//�����г˳���ʱ������Ӽ��˳�
        {
            g=rand()%4;   //������������
            switch(g)
            {
            case 0://���������0ʱ������ӷ�
                cout<<a<<"+"<<b<<"="<<endl;
                A[i]=a+b;
                break;
            case 1://���������1ʱ���������
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
    
    cout<<"����������𰸣�"<<endl;//�û������
    for(k=0;k<j;k++)
    {
        cout<<"�������"<<k+1<<"����"<<endl;
        cin>>B[k];
        if(B[k]==A[k])//�ж��û����Ľ���Ƿ���ȷ
        {
            cout<<" ��"<<endl;
            truenumber++;
        }
        else if(B[k]!=A[k])
        {
            cout<<" ��"<<endl;
            falsenumber++;
        }
    }
    cout<<"��ȷ�Ĵ���"<<truenumber<<"��"<<endl;
    cout<<"����Ĵ���"<<falsenumber<<"��"<<endl;
    system("pause");
    return 0;
}


