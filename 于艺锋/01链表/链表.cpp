#include<iostream>
#include<string>
using namespace std;

class L
{
public:
    string A;
    L *next;
};
void increase(L *Z)
{
    L *p=Z;
    L *N=new L;
    N->next=NULL;
    while(p->next)
    {
        p=p->next;
    }
    p->next=N;
    string m;
    cout<<"������������������ݣ�";
    cin>>m;
    cout<<endl;
    N->A=m;
    cout<<"��ӳɹ���"<<endl;
}
void deletee(L *Z)
{
    L *p=Z;
    string m;
    cout<<"��������Ҫɾ����������ݣ�";
    cin>>m;
    while(p->next->A!=m)
    {
        p=p->next;
    }
    p->next=p->next->next;
    cout<<endl;
    cout<<"ɾ���ɹ���"<<endl;
}
void change(L *Z)
{
    L *p=Z;
    string m;
    cout<<"�������޸�֮ǰ��������ݣ�";
    cin>>m;
    while(p->next->A!=m)
    {
        p=p->next;
    }
    string nm;
    cout<<"�������޸�֮����������ݣ�";
    cin>>nm;
    p->next->A=nm;
    cout<<endl;
    cout<<"�޸ĳɹ���"<<endl;
}
void show(L *Z)
{
    L *p=Z;
    cout<<"�����������£�"<<endl;
    while(p->next)
    {
        cout<<p->next->A<<endl;
        p=p->next;
    }
    cout<<"��ʾ��ɣ�"<<endl;
}
int main()
{
    L *Z=new L;
    Z->next=NULL;
    int n;
    for(;;)
    {
        cout<<"��ѡ���������Ĳ�����"<<endl;
        cout<<"1->��������"<<endl;
        cout<<"2->ɾ������"<<endl;
        cout<<"3->�޸�����"<<endl;
        cout<<"4->��ʾ����"<<endl;
        cout<<"0->����"<<endl;
        cout<<"�����룺"<<endl;
        cin>>n;
        cout<<endl;
        if(n==1)
        {
            increase(Z);
        }
        if(n==2)
        {
            deletee(Z);
        }
        if(n==3)
        {
            change(Z);
        }
        if(n==4)
        {
            show(Z);
        }
        if(n==0)
        {
            break;
        }
        if(n>4||n<0)
        {
            cout<<"<<<�޴��������������>>>"<<endl;
            cout<<endl;
        }
    }
    return 0;
}
