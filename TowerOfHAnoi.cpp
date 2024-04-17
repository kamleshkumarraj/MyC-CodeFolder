#include<iostream>
using namespace std;
void towerOfHanoi(int n , char source , char helper , char destination);


void towerOfHAnoi(int n , char source ,char helper , char destination ){
    if(n==1) return;
    towerOfHAnoi(n-1,source,destination,helper);
    cout<<("%c --> %c",source,destination);
    towerOfHAnoi(n-1,helper,source,destination);
    return;
}
int main(){
    // int n;
    // scanf("%d",&n);
    towerOfHanoi(3,'A','B','C');
    return 0;
}