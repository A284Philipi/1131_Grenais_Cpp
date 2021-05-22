#include <iostream>

using namespace std;

int main()
{
    int x, y, gremio = 0, inter = 0, cont = 0, cont2 = 0, empates = 0, grenais = 0;
    while (cont == 0){
        cin >> x;
        cin >> y;
        grenais++;
        if (x == y){
            empates++;
        }else{
            if (x > y){
                inter++;
            }else{
                gremio++;
            }
        }
        cout << "Novo grenal (1-sim 2-nao)" <<endl;
        cin >> cont2;
        if (cont2 == 1){
            cont = 0;
        }else{
            cout << grenais << " grenais" <<endl;
            cout << "Inter:" << inter <<endl;
            cout << "Gremio:" << gremio <<endl;
            cout << "Empates:" << empates <<endl;
            if (inter > gremio){
                cout << "Inter venceu mais" <<endl;
            }else{
                if (gremio > inter){
                    cout << "Gremio venceu mais" <<endl;
                }else{
                    cout << "Nao houve vencedor" <<endl;
                }
            }
            cont = 1;
        }
    }
    return 0;
}
