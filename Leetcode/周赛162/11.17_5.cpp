#include<iostream>
#include<stdio.h>
#include<string>
#include <list>
#include <map>
#include<cstring>
#include <ctime>
#include <deque>
#include <queue>
#include <iomanip>
#include <stack>
#include <cctype>
#include<set>
#include <cassert>
#include<sstream>
#include <fstream>
#include<cctype>
#include<algorithm>
#include<functional>
#include <cstdio>
#include<math.h>
#include <cmath>
#include<stdlib.h>
#include <cstdlib>
#include<vector>
//#include<bits/stdc++.h>
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
using namespace std ;
typedef long long int ll ;
const int mod = 1e9+7 ;
const double pi = acos(-1.0);
int gcd ( int ,int  );
int lcm (int  , int  );
int pow( int , int );
bool isPrime( int );
bool cmp2( int a , int b );
int A[1000],B[1000];
int a = 0 , b = 0 ;



int main(){

    char str1[1000] ;

    char str2[1000] ;
    gets(str1);
    //cout <<str1 << endl  ;
    int j = 0 , ans = 0 ;
    for ( int i = 0; str1[i] !='\0' ; ++i)
    {
        ans = ans*10 + str1[i]-'0' ;
        if (str1[i] == ' ')
        {
            A[a++] = ans ;
            ans = 0 ;
        }
    }
    gets(str2);
    //cout << str2 <<endl ;
    for ( int i = 0; str2[i] !='\0' ; ++i)
    {
        ans = ans*10 + str2[i]-'0' ;
        if (str2[i] == ' ')
        {
            B[b++] = ans ;
            ans = 0 ;
        }
    }
    int x ;
    cin >> x ;
    for ( int i = 0  ; i < a ; ++i )
    {
        if ( A[i] == x) return  0  ;
    }
    cout << -1  ;

    return 0;
}
bool cmp2( int a , int b ){
    return abs(a)>abs(b);
}
int gcd (int a , int b ){
    return b == 0? a:gcd(b,a%b);
}
int lcm (int a , int b ){
    return a/gcd(a,b)*b;
}
int pow( int a, int b){
    int base = a , ans = 1 ;
    while ( b!=0 ){
        if ( (b&1) != 0 )ans *= base ;
        base *= base ;
        b >>= 1 ;
    }
    return ans ;
}
bool isPrime( int num){
    int tmp = sqrt(num);
    for ( int i = 2 ;i <= tmp ; i++){
        if (  num % i == 0 ) return 0 ;
    }
    return 1 ;
}
