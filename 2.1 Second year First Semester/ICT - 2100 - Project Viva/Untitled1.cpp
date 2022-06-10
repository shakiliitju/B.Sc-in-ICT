#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    system("color B0");
    int x,option;
    int i;
    int deposit,withdrawal,balance=10000;
    for(i=0; i<=10; i=i)
    {
        cout<<"\n\tWelcome To PF-L ATM"<<endl<<endl;
        cout<<"Enter your 4-Digit PIN Code: ";
        cin>>x;
        if(x==1111)
        {
            cout<<"\nWelcome Mr.Naveed Safi...!!"<<endl<<endl<<"What will you like to do today"<<endl<<endl;
            i=11;
        }
        else if (x==2222)
        {
            cout<<"\nWelcome Mr.Sodais Safi...!!"<<endl<<endl<<"What will you like to do today"<<endl<<endl;
            i=11;
        }
        else if (x==3333)
        {
            cout<<"\nWelcome Mr.Hilal Safi...!!"<<endl<<endl<<"What will you like to do today"<<endl<<endl;
            i=11;
        }
        else
        {
            cout<<"PIN is invalid! Please try again\n";
            continue;
        }
        for(i=0; i<=3; i++)
        {
            cout<<"1. Balance Inquiry"<<endl<<"2. Cash Withdrawal"<<endl<<"3. Cash Deposit"<<endl<<"4. Exit Mode"<<endl;
            cin>>option;
            switch (option)
            {
            case 1:
                cout<<"\t\t Balance Inquiry\t"<<endl<<endl;
                cout<<"\t Your account balance is: "<<balance<<endl<<endl;
                cout<<"\t Thanks for coming dear user! :"<<endl;
                cout<<"*******************************************************"<<endl<<endl;
                break;
            case 2:
                cout<<"\t\tCash withdrawal ?"<<endl<<endl;
                cout<<"How Much Amount You Want To Withdrawal ? ";
                cin>>withdrawal;
                if(withdrawal>balance)
                {
                    cout<<"\n\tSorry you don't have enough money"<<endl<<endl;
                    cout<<"\t\tProcess ended"<<endl<<endl;
                }
                else
                {
                    balance=balance-withdrawal;
                    cout<<"\nYou withdraw: "<<withdrawal<<endl;
                    cout<<"Your Remaining Account Balance is: "<<balance<<endl;
                    cout<<"\t Thanks for coming dear user! :"<<endl;
                }
                cout<<"*******************************************************"<<endl<<endl;
                continue;
            case 3:
                cout<<"\t\tCash Deposit\t"<<endl<<endl;
                cout<<"How Much Amount You Want To Deposit ? ";
                cin>>deposit;
                if(deposit>=90000)
                {
                    int interest=15;
                    cout<<"You Deposited: "<<deposit<<endl;
                    interest=deposit*interest/100;
                    cout<<"Your interest is: "<<interest<<endl;
                    balance=balance+deposit+interest;
                    cout<<"Your New Account Balance is: "<<balance<<endl;
                    cout<<"\t Thanks for coming dear user! :"<<endl;
                cout<<"*******************************************************"<<endl<<endl;
                }
                else if(deposit>=60000)
                {
                    int interest=12;
                    cout<<"You Deposited: "<<deposit<<endl;
                    interest=deposit*interest/100;
                    cout<<"Your interest is: "<<interest<<endl;
                    balance=balance+deposit+interest;
                    cout<<"Your New Account Balance is: "<<balance<<endl;
                    cout<<"\t Thanks for coming dear user! :"<<endl;
                cout<<"*******************************************************"<<endl<<endl;
                }
                else if(deposit>=40000)
                {
                    int interest=10;
                    cout<<"You Deposited: "<<deposit<<endl;
                    interest=deposit*interest/100;
                    cout<<"Your interest is: "<<interest<<endl;
                    balance=balance+deposit+interest;
                    cout<<"Your New Account Balance is: "<<balance<<endl;
                    cout<<"\t Thanks for coming dear user! :"<<endl;
                cout<<"*******************************************************"<<endl<<endl;
                }
                else if(deposit>=30000)
                {
                    int interest=8;
                    cout<<"You Deposited: "<<deposit<<endl;
                    interest=deposit*interest/100;
                    cout<<"Your interest is: "<<interest<<endl;
                    balance=balance+deposit+interest;
                    cout<<"Your New Account Balance is: "<<balance<<endl;
                    cout<<"\t Thanks for coming dear user! :"<<endl;
                cout<<"*******************************************************"<<endl<<endl;
                }
                else if(deposit>=20000)
                {
                    int interest=6;
                    cout<<"You Deposited: "<<deposit<<endl;
                    interest=deposit*interest/100;
                    cout<<"Your interest is: "<<interest<<endl;
                    balance=balance+deposit+interest;
                    cout<<"Your New Account Balance is: "<<balance<<endl;
                    cout<<"\t Thanks for coming dear user! :"<<endl;
                cout<<"*******************************************************"<<endl<<endl;
                }
                else if(deposit>=10000)
                {
                    int interest=5;
                    cout<<"You Deposited: "<<deposit<<endl;
                    interest=deposit*interest/100;
                    cout<<"Your interest is: "<<interest<<endl;
                    balance=balance+deposit+interest;
                    cout<<"Your New Account Balance is: "<<balance<<endl;
                    cout<<"\t Thanks for coming dear user! :"<<endl;
                cout<<"*******************************************************"<<endl<<endl;
                }
                else if(deposit>=5000)
                {
                    int interest=4;
                    cout<<"You Deposited: "<<deposit<<endl;
                    interest=deposit*interest/100;
                    cout<<"Your interest is: "<<interest<<endl;
                    balance=balance+deposit+interest;
                    cout<<"Your New Account Balance is: "<<balance<<endl;
                    cout<<"\t Thanks for coming dear user! :"<<endl;
                cout<<"*******************************************************"<<endl<<endl;
                }
                else if(deposit>=1000)
                {
                    int interest=3;
                    cout<<"You Deposited: "<<deposit<<endl;
                    interest=deposit*interest/100;
                    cout<<"Your interest is: "<<interest<<endl;
                    balance=balance+deposit+interest;
                    cout<<"Your New Account Balance is: "<<balance<<endl;
                    cout<<"\t Thanks for coming dear user! :"<<endl;
                cout<<"*******************************************************"<<endl<<endl;
                }
                else
                {
                    balance=balance+deposit;
                    cout<<"You Deposited: "<<deposit<<endl;
                    cout<<"Your New Account Balance is: "<<balance<<endl;
                    cout<<"\t Thanks for coming dear user! :"<<endl;
                cout<<"*******************************************************"<<endl<<endl;
                }
                continue;
            case 4:
                cout<<"\tExit Mode\t"<<endl;
                i=4;
                break;
            default:
                cout<<"Invalid option please try again! "<<endl<<endl;
                break;
            }
        }
    }
    getch ();
    return 0;
}
