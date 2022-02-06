#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <limits.h>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
int main(){
    int n;
    scanf("%d", &n);
    int arr[] = {"one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
    for (int i = 1; i <= 9; i++)
    {
        if(n == i){
            cout << arr[i] << endl;
        }
    }
    
}