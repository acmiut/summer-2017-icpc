#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <sstream>
#include <fstream>

using namespace std;

int main(){
  //  ifstream cin ("input.txt");
  //  ofstream cout ("output.txt");
    string s;
    while(getline(cin,s)&&(s!="END")){

        long double x;
        stringstream u;
        u<<s;
        u>>x;

        bool mem=true;
        int ted=20;
        long double megh=1;
        while((x>0)&&(ted>0)){
            while(megh>x){
                ted--;
                megh/=3;
            }
            if((x/megh>1)&&(x/megh<2)){
                mem=false;
                break;
            }
            else
                x-=megh*(int)(x/megh);

        }
        if(mem)
            cout<<"MEMBER"<<endl;
        else
            cout<<"NON-MEMBER"<<endl;

    }
    return 0;
}
