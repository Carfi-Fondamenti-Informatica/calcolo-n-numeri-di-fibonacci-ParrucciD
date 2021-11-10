#include <iostream>

using namespace std;

int main () {
    int i, n, primo=1, secondo=1, terzo;


        cin>>n;
    if(n<2){
    cout<< "errore" << endl;
}else{

    cout<<primo<< endl;
    cout <<secondo << endl;

    for(i=2;i<n;i++){
        terzo=primo+secondo;
        primo=secondo;
        secondo=terzo;
        cout<<terzo << endl;
    }
}

    return 0;
}
