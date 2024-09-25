#include<iostream>
#include<vector>
using namespace std;
/* 
int main(){
    vector<int> vec={10,6,8,2,9};
    int area;
    int len=1;
    int max_area =0;
    for(int i=0; i<4; i++)
    {
        len = 1;
        for(int j=i+1; j<5; j++)
        {
            area= min(vec[i],vec[j]) * len;
            max_area = max(max_area, area);
            len++;
        }
    }
    cout<<" The maximum capacity of the container is: "<<max_area<<endl;
    return 0;
}
*/

// Using two poineter approach to solve this problem in more optimized way.

int main()
{
    vector<int> vec = {2,5,8,4,12,10};
    int max_water = 0;
    int lp=0, rp=vec.size()-1;

    while(lp<rp)
    {
        int height = min(vec[lp],vec[rp]);
        int width = rp-lp;
        int area= height * width;
        max_water = max(max_water,area);

        (vec[lp]<vec[rp])? lp++ : rp--;
    }

    cout<<"The maximum capacity of he tank is: "<< max_water;
    return 0;
}