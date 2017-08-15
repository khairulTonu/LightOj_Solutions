#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    string key;
    int i,j=0,k,l,T,n,m,inp;
    cin>>T;
    while(T)
    {
        j++;
        cin>>n>>m;
        cout<<"Case "<<j<<":"<<endl;
        for(i=0;i<m;i++)
        {
            cin>>key;
            if(key=="pushLeft")
            {
                cin>>inp;
                if(dq.size()==n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    dq.push_front(inp);
                    cout<<"Pushed in left: "<<inp<<endl;
                }
            }
            else if(key=="pushRight")
            {
                cin>>inp;
                if(dq.size()==n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    dq.push_back(inp);
                    cout<<"Pushed in right: "<<inp<<endl;
                }
            }
            else if(key=="popLeft")
            {
                if(dq.empty())
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    int pop_left=dq.front();
                    dq.pop_front();
                    cout<<"Popped from left: "<<pop_left<<endl;
                }
            }
            else if(key=="popRight")
            {
                if(dq.empty())
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    int pop_right=dq.back();
                    dq.pop_back();
                    cout<<"Popped from right: "<<pop_right<<endl;
                }
            }
        }
        T--;
        dq.clear();
    }
}
