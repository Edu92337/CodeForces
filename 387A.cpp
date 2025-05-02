#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int main() {
    string horario_atual,tempo_dormido;
    cin >> horario_atual;
    cin >> tempo_dormido;
    int hora_atual,minuto_atual;
    int hora_dormida, minuto_dormido;
    char sep;
    stringstream ss(horario_atual);
    ss >> hora_atual >> sep >> minuto_atual;
    stringstream pp(tempo_dormido);
    pp >> hora_dormida >> sep >> minuto_dormido;

    int h,m;
    h = hora_atual - hora_dormida;
    m = minuto_atual - minuto_dormido;
    if(m <0){
        m += 60;
        h -= 1;
    }
    if(h < 0){
        h += 24;
    }
    if(h>=10 && m>=10) cout << h << ":" << m;
    else if(h >=10 && m<10) cout << h << ":" << "0" << m;
    else if(h <10 && m>=10) cout << "0" << h << ":" << m;
    else cout << "0" << h <<":" << "0" << m;
    

    return 0;
}