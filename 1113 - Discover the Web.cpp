#include<bits/stdc++.h>
using namespace std;
int main()
{
    string key,address,curr_page;
    int i=0,j,k,l,T;
    cin>>T;
    stack<string>stkbck;
    stack<string>stkfor;

    while(T)
    {
        stkbck.push("http://www.lightoj.com/");
        i++;
        cout<<"Case "<<i<<":"<<endl;
        while(1)
        {
            cin>>key;
            if(key=="VISIT")
            {
                cin>>address;
                stkbck.push(address);
                curr_page=address;
                cout<<address<<endl;
                while(!stkfor.empty())
                {
                    stkfor.pop();
                }
            }
            else if(key=="BACK")
            {

                if(stkbck.size()==1)
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    curr_page=stkbck.top();
                    stkfor.push(curr_page);
                    stkbck.pop();
                    curr_page=stkbck.top();
                    cout<<curr_page<<endl;

                }

            }
            else if(key=="FORWARD")
            {
                if(stkfor.empty())
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    curr_page=stkfor.top();
                    cout<<stkfor.top()<<endl;
                    stkbck.push(curr_page);
                    stkfor.pop();
                }
            }
            else
            {
                break;
            }
        }
        T--;
        while(!stkbck.empty())
        {
            stkbck.pop();
        }
        while(!stkfor.empty())
        {
            stkfor.pop();
        }
        address.clear();
        curr_page.clear();

    }
}

