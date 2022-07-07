#include <iostream>
using namespace std;
class bank
{
    int acc_no, balance;
    string name;

public:
    static int count;
    bank(int acc_no, int balance, string name)
    {
        this->acc_no = acc_no;
        this->balance = balance;
        this->name = name;
        count++;
    }
    void getdetails()
    {
        cout << "\n"
             << acc_no << "-"
             << "-" << balance;
        // cout<<"\n static :"<<cout;
    }
};
int bank::count;
int main()
{
    bank om(101, 2500, "om"), gr(102, 2501, "griva"), ha(103, 2599, "hari");
    om.getdetails();
    gr.getdetails();
    ha.getdetails();
    cout << "\n total bank accout" << bank::count;
    return 0;
}