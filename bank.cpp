#include<iostream>
using namespace std;
class bank
{
    char name[25],Ac_Type[15];
    int Ac_No,Amt;
public:
    void get_details();
    void display();
    void operator+(int);
    void operator-(int);
};
void bank :: operator+(int a)
{
    if(Ac_No==a)
    {
        int ammt;
        cout<<"enter ammount :  ";
        cin>>ammt;
        Amt=Amt+ammt;
    }
}
void bank :: operator-(int a)
{
    if(Ac_No==a)
    {
        int amt;
        cout<<"enter ammount :  ";
        cin>>amt;
        Amt=Amt-amt;
    }
}
void bank :: get_details()
{
    cout<<"enter depositor name :   ";
    cin>>name;
    cout<<"enter account number :   ";
    cin>>Ac_No;
    cout<<"enter account type :   ";
    cin>>Ac_Type;
    cout<<"enter total ammount :  ";
    cin>>Amt;
    cout<<endl;
}

void bank :: display()
{
    if(Amt>15000)
    {
        cout<<"\tDepositor name :   "<<name<<endl;
        cout<<"\tAccount number :   "<<Ac_No<<endl;
        cout<<"\tAccount type :   "<<Ac_Type<<endl;
        cout<<"\tTotal ammount :  "<<Amt<<endl;
        cout<<endl;
    }
}

int main()
{
    bank b[10];
    int i=0,ch,cnt=0;
    again:
    cout<<"\n1.assigning values\n2.deposit ammount\n3.withdraw ammount\n4.display whose amount is >15000\n5.exit";
    cin>>ch;
    switch(ch)
    {
        case 1:
            b[i].get_details();
            cnt++;
            break;
        case 2:
            int num;
            cout<<"enter account number : ";
            cin>>num;
            for(int i=0;i<cnt;i++)
            {
                b[i]+num;
            }
            break;
        case 3:
            int no;
            cout<<"enter account number : ";
            cin>>no;
            for(int i=0;i<cnt;i++)
            {
                b[i]-no;
            }
            break;
        case 4:
            for(int i=0;i<cnt;i++)
            {
                b[i].display();
            }
            break;
    }
    i++;
    if(ch>=1 && ch<5)
        goto again;
    return 0;
}
