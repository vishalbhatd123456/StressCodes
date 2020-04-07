#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    //n - > no. of students k -> input k;

    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    //create a record and a set
    map<int, vector<int>,greater<int>> records;
    //cout<<"Hello"<<endl;
    set<int,greater<int>> numbers;

    int no; //the value that the uses enters for the marks of the students
    for(int i=0;i<n;i++)
    {
        cin>>no; // an object of the ostream
        records[no].push_back(i); //push the element no at the index i, hence the duplicates are also allowed here
        //avoid duplicates in the numbers data structure
        if(numbers.find(no) == numbers.end())
            numbers.insert(no);

    }

    //take k ans an input
    cout<<"Enter the k value"<<endl;
    cin>>k;

    cout<<"Toppers are:"<<endl;
    for(int i=0;i<k;i++){
        auto ij = numbers.begin();
        //keep incrementing the pointer
        advance(ij,i);
        for(auto it=records[*ij].begin();it!= records[*ij].end();it++)
        {

            printf("%d",*it);

        }

    }
    cout<<endl;



}
