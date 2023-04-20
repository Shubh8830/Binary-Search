#include<bits/stdc++.h>
using namespace std;
int sqrtnum(int &num){
    int start =0;
    int end = num;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(num/mid==mid){
            return mid;
        }if(mid*mid<num){
            start=mid+1;
        }else{
            end = mid-1;
        }
        mid =start+(end-start)/2;
    }
    return -1;
}
int main(){
    int num = 21;
   int ans = sqrtnum(num);
//    cout<<ans;
// precision logic

   double finalans =ans;
   double step =0.1;
   int precision =3;

   for(int i = 0 ; i< precision; i++){
    for(double j = finalans; j*j<= num; j=j+step){
        finalans = j;
    }
    step =step/10;
    

   }
   cout<<finalans;
    return 0;
}