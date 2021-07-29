#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> &m)
{
    map<int, string>::iterator it;

    for (it = m.begin(); it != m.end(); ++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
}
int main()
{
    map<int, string> m;

    m[0] = "Mobin";
    m[5] = "Tamim";
    m[10] = "Sristy";

   print(m);
    cout<<endl;

   m[2]="Bulbul";
   m[3]="mita";

   print(m);
   cout<<endl;

   string s;
   cin>>s;
   map<int,string>:: iterator it;
    for(it=m.begin();it!= m.end();++it){
        if((*it).second==s)
        m.erase(it);
    }
    print (m);
    

}