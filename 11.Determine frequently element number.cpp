#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{

    vector<int>vec1={1,2,4,131,53,131,12426,14,131};

    int k=count(vec1.begin(),vec1.end(),131);//number of occurance of elements
    cout<<k<<endl;
    return 0;
}
