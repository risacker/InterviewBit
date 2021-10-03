#include<iostream>
#include<map>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    map<int,int> m;
    int q;
    cin>>q;
    while(q--){
      int type,y;
      int x;
      cin>>type;
      cin>>x;
      if(type==1){
      cin>>y;
      m[x]+=y;
    }
    if(type==2)
       m.erase(x);
    if(type==3){
      if(m.find(x) == m.end())
        cout<<"0"<<endl;
      else 
        cout<<m[x]<<endl;
    }
} 
return 0;
}