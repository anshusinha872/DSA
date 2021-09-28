#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
int flatlandSpaceStation(int n,int m,int record[])
{
    int cities[n];
    int dist[n];
    for(int i=0;i<n;i++)
    {
        cities[i]=i;
        dist[i]=0;
    }
    int curr_dist=0;
    int min_dist=INT_MAX;
    for(int i=0;i<n;i++)
    {
        curr_dist=0;
        min_dist=INT_MAX;
        for(int j=0;j<m;j++)
        {
            curr_dist=abs(cities[i]-record[j]); //min distance from spaceStation
            min_dist=min(min_dist,curr_dist);
        }
        dist[i]=min_dist;
    }
    int max_dist=INT_MIN;
    for(int i=0;i<n;i++)
    {
        max_dist=max(max_dist,dist[i]);
    }
    return max_dist;
}
int main()
{
    int n;//number of cities;
    cin>>n;
    int m;//number of space station;
    cin>>m;
    int record[m];
    for(int i=0;i<m;i++)
    {
        cin>>record[i];
    }
    cout<<flatlandSpaceStation(n,m,record);
    return 0;
}