#include <iostream>
using namespace std;
int main()
{
    float rate, qty, amout, dis, total, gst, withgsttotal;
    cout << "rate:";
    cin >> rate;
    cout << " qty:";
    cin >> qty;
    cout << "\nRate\tQty\tAmount\tDis\tTotal\tGST\tBILLAMT\n";
    cout << "rate";
    cout << "qty";
    amout = rate * qty;
    cout << "\tamout" << amout;
    dis = amout * 0.05;
    cout << "\tdis" << dis;
    total = amout - dis;
    cout << "\ttotal" << total;
    gst = total * 0.18;
    cout << "\tgst" << gst;
    withgsttotal = gst + total;
    cout << "\twithgsttotal" << withgsttotal;
    return 0;
}