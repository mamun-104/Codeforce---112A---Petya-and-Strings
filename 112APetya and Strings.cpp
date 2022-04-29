#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    int i,t;
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]<97){s1[i]=s1[i]+32;} // All are tranforming to small Letter case

        if(s2[i]<97){s2[i]=s2[i]+32;}
    }

    if(s1<s2){cout<<-1<<endl;}
    else if(s1>s2){cout<<1<<endl;}
    else {cout<<0<<endl;}


    return 0;
}

