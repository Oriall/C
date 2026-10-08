#include <bits/stdc++.h>
using namespace std;

int M;                  // so luong dinh (thanh pho)
int a[20][20];           // ma tran chi phi duong di (MxM)
int X[20];               // luu duong di hien tai (thu tu tham cac dinh)
bool visited[20];        // danh dau dinh da tham
int minCost = INT_MAX;   // chi phi nho nhat tim duoc
int bestPath[20];        // duong di co chi phi nho nhat

// ------- BUOC 1: Nhap so luong dinh, ma tran chi phi duong di -------
void nhapDuLieu(){
    cout << "Nhap so luong thanh pho (dinh) M = ";
    cin >> M;

    // ------- BUOC 2: Su dung vong lap kep de nhap/luu ma tran chi phi MxM -------
    cout << "Nhap ma tran chi phi duong di (" << M << "x" << M << "):\n";
    for(int i = 1; i <= M; i++){
        for(int j = 1; j <= M; j++){
            
            cin >> a[i][j];
        }
    }
}

// ------- BUOC 4: Tinh chi phi cua mot truong hop (duong di) da tao -------
int tinhChiPhi(int path[]){
    int cost = 0;
    for(int i = 1; i < M; i++){
        cost += a[path[i]][path[i+1]];
    }
    cost += a[path[M]][path[1]]; // quay lai thanh pho xuat phat
    return cost;
}

// ------- BUOC 3: Dung de qui de tao cac truong hop (hoan vi cac dinh) -------
void Try(int i){
    for(int j = 1; j <= M; j++){
        if(!visited[j]){
            X[i] = j;
            visited[j] = true;

            if(i == M){
                // ------- BUOC 4: Luu lai va tinh chi phi cua truong hop vua tao -------
                int cost = tinhChiPhi(X);

                // ------- BUOC 5: So sanh de chon hanh trinh ngan nhat -------
                if(cost < minCost){
                    minCost = cost;
                    for(int k = 1; k <= M; k++)
                        bestPath[k] = X[k];
                }
            }
            else{
                Try(i + 1);
            }

            visited[j] = false; // quay lui
        }
    }
}

int main(){
    nhapDuLieu();

    // Luon xuat phat tu thanh pho 1 de tranh lap lai cac hoan vi trung (quay vong)
    X[1] = 1;
    visited[1] = true;
    Try(2);

    // ------- BUOC 5: In ra hanh trinh ngan nhat va chi phi -------
    cout << "\nHanh trinh ngan nhat: ";
    for(int i = 1; i <= M; i++)
        cout << bestPath[i] << " -> ";
    cout << bestPath[1] << endl;

    cout << "Chi phi nho nhat: " << minCost << endl;

    return 0;
}