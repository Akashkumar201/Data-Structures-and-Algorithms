/*In the mysterious country of Byteland, everything is quite different from what you'd normally expect. In most places, if you were approached by two mobsters in a dark alley, they would probably tell you to give them all the money that you have. If you refused, or didn't have any - they might even beat you up.

In Byteland the government decided that even the slightest chance of someone getting injured has to be ruled out. So, they introduced a strict policy. When a mobster approaches you in a dark alley, he asks you for a specific amount of money. You are obliged to show him all the money that you have, but you only need to pay up if he can find a subset of your banknotes whose total value matches his demand. Since banknotes in Byteland can have any positive integer value smaller than one thousand you are quite likely to get off without paying.

Both the citizens and the gangsters of Byteland have very positive feelings about the system. No one ever gets hurt, the gangsters don't lose their jobs, and there are quite a few rules that minimize that probability of getting mugged (the first one is: don't go into dark alleys - and this one is said to work in other places also).

Input
The first line contains integer t, the number of test cases (about 100). Then t test cases follow. Each test case starts with n, the number of banknotes in your wallet, and m, the amount of money the muggers asked of you. Then n numbers follow, representing values of your banknotes. Your wallet does not hold more than 20 banknotes, and the value of a single banknote is never more than 1000.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool MakePayment(int dem,int a[20],int l){
for(int i=l;i>=0;i--){
    int val=dem-a[i];
    if(val<0)
        continue;
    if(val==0)
        return true;



for(int j=0;i<i;j++){
    if(a[i]==val){
        return true;
    }
}
if(MakePayment(val,a,i-1)==true)
    return true;



}
return false;
}

int main() {
    int t;
    cin>>t;
    while(t--){
     int bn;
     int dem;
     int bnote[1000];
     cin>>bn>>dem;
     for(int i=0;i<bn;i++)
            cin>>bnote[i];
     if(MakePayment(dem,bnote,bn-1))
            cout<<"YES";
        else
            cout<<"NO";

    }


	return 0;
}
/*Input:
5
3 3
1
1
1
5 11
1
2
4
8
16
5 23
1
2
4
8
16
5 13
1
5
5
10
10
20 132
17
6
4
998
254
137
259
153
154
3
28
19
123
542
857
23
687
35
99
999

Output:
Yes
Yes
Yes
No
Yes*/
