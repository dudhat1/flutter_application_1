#include <iostream>
using namespace std;
class bank
{
    private:
            int bal;
    public:
        void setbalance()
        {
            cout<<"\nEnter Your Balance First!!! :";
            cin>>bal;
        }
        void Withdraw()
        {
            int w;
            cout<<"Enter Amount U want to Withdraw :";
            cin>>w;
            if(w<=bal)
            {
                bal=bal-w;
                cout << "New Amount after withdraw :"<<bal;
            }
            else
                cout<<"Incorrect Velue!!!";
        }
        void Diposite()
        {
            int d;
            cout << "Enter Amount U want to deposit :";
            cin>>d;
            bal=d+bal;
            cout << "New Amount after deposit :"<<bal;
        }
        void current()
        {
            cout << "\n\n\tYour Final Current  Balance is:" << bal;
        }
};

class loan
{
    private:
        int LA,LT,emi,EM,TotalLoan;
        float LR=0;
       
        public:
        void setvelues()
        {
            cout<<"\nEnter Your Loan Amount :";
            cin>>LA;
             cout<<"\nEnter Interst Rate :";
            cin>>LR;
            cout<<"\nEnter Loan Time in year :";
            cin>>LT;
        }
        void loancalculations()
        {
            int i=1;
            float po=1;
            LR=LR/(12*100);
            LT=LT*12;
           while(i<=LT)
            {
                po=po*(LR+1);
                i++;
            }
           emi=LA*LR*((po)/(po-1));
           TotalLoan=emi*LT;
           EM=TotalLoan-LA;
        }     
        void showloan()
        {
            if(LA>=50000)
            {
            cout << "\n----------------------Details-----------------" << endl;
            cout<<"\nYour Monthly Emi is : "<<emi<<" Rs.";
            cout<<"\nYour Intrest Money is : "<<EM<<" Rs.";
            cout<<"\nYour Total Loan Money is : "<<TotalLoan<<" Rs.";
            }
            else
            cout<<"\nError!!!Minimum Amount of Loan is 50000";
        }   
};

class Reccuring
{
    private:
        float amt,rate,time,a,diposite,dipositeamt,totalamt;
    public:
        void setreccuring()
        {
            cout<<"\nEnter Amount :";
            cin>>amt;
            cout<<"\nEnter Interest :";
            cin>>rate;
            cout<<"\nEnter Time of Period(months) :";
            cin>>time;
        }
        void calculationreccuring()
        {
           rate=rate/100;
           a=time*(time+1)/24;
           diposite=amt*a*rate;
           dipositeamt=amt*time;
            totalamt=dipositeamt+diposite;
        }
        void showreccuring()
        {
            cout << "\n----------------------Details-----------------" << endl;
            cout<<"\nYour Reccuring Deposite is :"<<diposite;
            cout<<"\nDeposited amount :"<<dipositeamt;
            cout<<"\nTotal amount with interest :"<<totalamt;
        }
};
int main()
{
    bank obj;
    loan ok;
    Reccuring done;
    int choice;
    obj.setbalance();
    do
    {
        cout << "\n---------------------Menu---------------------" << endl;
        cout << "\n1.Withdrew\n2.diposite\n3.current balance\n4.Loan And EMI\n5.Reccuring Deposite\n6.Exit" << endl;
        cout << "\n---------------------Enter Your Choice--------"<< endl;
        cout << "\nChoice : ";
        cin >> choice;
        switch (choice)
        {
        case 1: 
            obj.Withdraw();
            break;
        case 2:
            obj.Diposite();
            break;
        case 3:
            obj.current();
            break;
        case 4:
            ok.setvelues();
            ok.loancalculations();
            ok.showloan();
            break;
        case 5:
            done.setreccuring();
            done.calculationreccuring();
            done.showreccuring();
            break;
        case 6:
            break;
        default:
            cout << "\n\n\tInvaild Input" << endl;
        }
    } while (choice != 6);
    return 0;
}