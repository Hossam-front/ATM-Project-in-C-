#include<iostream>
using namespace std;

//*****Varaible*****
double balance=1000;
double deposit=0;
double withdraw=0;
int password=123;
int choice=0;
//*****End of Varaible*****

//*****Show The Choices*****
void show()
{
    cout<<"***** ATM *****\n";
    cout<<"1:Balance\n";
    cout<<"2:Deposit\n";
    cout<<"3:WithDraw\n";
    cout<<"4:Exit\n";
    cout<<"***************\n";
}
//*****End Of Show The Choices*****

//*****Process*****
void process()
{
    cout<<"Enter Your Password : ";
    cin>>password;

    do
    {
    if(password==123)
    {
        cout<<"Enter Your Choice (1,2,3,4) : ";
        cin>>choice;

        switch(choice)
        {
          case 1:
            cout<<"Now Your Balance = "<<balance<<endl;
            break;
          case 2:
            cout<<"Now Your Balance = "<<balance<<endl;
            cout<<"Enter Deposit : ";
            cin>>deposit;
            balance+=deposit;
            cout<<"Now Your Balance = "<<balance<<endl;
            break;
          case 3:
            cout<<"Note Now Your Balance = "<<balance<<endl;
            cout<<"Enter WithDraw : ";
            cin>>withdraw;
            if(withdraw<=balance)
            {
              balance-=withdraw;
              cout<<"Now Your Balance = "<<balance<<endl;
            }
            else
            {
                cout<<"Error Not allowed\n";
            }
            break;
          case 4:
            cout<<"Thank You\n";
            break;
        }
    }
    else
    {
        cout<<"The Password is InCorrect\n";
        cout<<"Do You Want Try Again (Y Or F)\n";
        char x='o';
        cin>>x;
        if(x=='Y' || x=='y')
        {
            cout<<"Enter Your Password : ";
            cin>>password;
        }
        else
        {
            cout<<"Thank You\n";
            choice=4;
        }
    }
    }
while(choice<4);
}
//*****End Of The Process*****

int main()
{
   show();
   process();
system("pause");
    return 0;
}