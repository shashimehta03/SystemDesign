#include<bits/stdc++.h>
using namespace std;
unordered_map<int,string> riderDetails;
unordered_map<int,string>locationMpp;
void  Createrider_ID(){
    riderDetails.insert({12,"Shashi"});
    riderDetails.insert({123,"Ram"});
    riderDetails.insert({1234,"Shyam"});
    riderDetails.insert({12234,"Lakshman"});
    int a;
    string s;
    cin>>a>>s;
    riderDetails.insert({a,s});
    
}
void displayDriver(){
    for(auto i:riderDetails){
         cout<<i.first<<" "<<i.second<<endl;
     }
}
int locationDriver(string currlocation){
    for(auto i:locationMpp){
        if(i.second==currlocation){
            return i.first;
        }
    }
    return -1;
}
void driverlocation(){
    locationMpp.insert({12,"patna"});
    locationMpp.insert({123,"muz"});
    locationMpp.insert({1234,"mothari"});
    locationMpp.insert({12234,"darbbhanga"});
    
}

int main(){
     
     Createrider_ID();
     displayDriver();
     driverlocation();
     int driver_id=locationDriver("patnaa");
     cout<<driver_id<<"is avilabe at your location"<<endl;
     return 0;
}
