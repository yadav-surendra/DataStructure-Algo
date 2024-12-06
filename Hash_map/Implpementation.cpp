#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<string, int> m;
    pair<string,int> p;

// 1
    p = make_pair("love",2);
    m.insert(p);

// 2
    m["jhon"] = 1;
// doing this will update the previous value to new value.
    m["jhon"] = 3;

// searching

    cout<< m["love"] <<endl;
    cout<< m["jhon"] <<endl;

    cout<< m.at("love") <<endl;

   // cout<< m.at("Ram")<<endl; // this step will produce error since there is no such key in the map.

   // this step will create a new entry for Ram and assign value 0.
    cout<< m["Ram"] <<endl;
    cout<< m.at("Ram")<<endl;

    // size
    cout<<"The size of the map is: "<< m.size() << endl;

    // if we want to check if there is aby entry for a given key then we can use count function

    cout<< m.count("Ram") << endl; // it will return 1 if the entry fir the given key is present ,else it will return 0.
     cout << m.count("Hello") << endl;

    // to erase data
    m.erase("love");
    cout << m.size() << endl;

/*

    // to iterate on map
    // method 1.
    cout<<"Printing the data of map" << endl;
    for(auto i: m)
    {
        cout<< i.first <<" : "<< i.second << endl;
    }

*/ 

    // method 2:
    unordered_map<string,int>::iterator it = m.begin();
    while(it != m.end())
    {
        cout<< it->first <<" "<< it->second << endl;
        it++;
    }



    return 0;
}
