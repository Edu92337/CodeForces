#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int esq_zeros=0,esq_uns=0,dir_zeros=0,dir_uns=0;
    for (int i = 0; i < n;i++){
        int a,b;
        cin >> a >> b;
        if (a == 0) esq_zeros += 1;
        else  esq_uns += 1;
        if (b == 0) dir_zeros += 1;
        else dir_uns += 1;
    }
    int tempo = 0;
    if (esq_uns >= esq_zeros){
        tempo += esq_zeros;
    }else tempo +=   esq_uns;
    if (dir_uns >= dir_zeros){
        tempo += dir_zeros;
    }else tempo +=  dir_uns;
    cout << tempo;
    return 0;
}