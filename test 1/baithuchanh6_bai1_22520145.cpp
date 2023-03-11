#include <iostream>

using namespace std;

// Nhập mảng một chiều
void nhap(int *&p, int n){
    p =	new	int[n];
    for	(int i = 0; i < n; i++) {
        cout << "Phan tu thu " << i << ": ";
        cin >> p[i];
    }
    cout << "\n\n";
}

// Xuất mảng một chiều
void xuat(int *&p, int n){
    cout << "Cac phan tu trong mang: ";
    for	(int i = 0; i < n; i++)
        cout << p[i] << " ";
    cout << "\n\n";
}

// Tổng các phần tử trong mảng
int b1(int *&p,	int n){
    int t = 0;
    for	(int i = 0; i < n; i++)
        t += p[i];
    return t;
}

// Sắp xếp mảng giảm dần
void c1(int *&p, int n){
    int a[n], t;
    for	(int i = 0; i < n; i++)
        a[i] = *&p[i];
    cout << "Sap xep mang giam dan: ";
    for	(int i = 0; i < n; i++)
        for	(int j = i + 1; j < n; j++)
            if (a[i] <= a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
    for	(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n\n";
}

// Đếm số lần xuất hiện 1 phần tử x bất kỳ (x nhập từ bàn phím)
int d1(int *&p,	int n, int x){
    int d = 0;
    for	(int i = 0; i < n; i++)
        if (x == p[i])
            d += 1;
    return d;
}

// Xuất các phần tử chẵn nhỏ hơn 20
void e1(int *&p,	int n){
    cout << "Cac phan tu chan nho hon 20 trong mang: ";
    for	(int i = 0; i < n; i++)
        if (p[i] % 2 == 0 && p[i] < 20)
            cout << p[i] << " ";
    cout << "\n\n";
}

// Tìm vị trí phần tử nhỏ nhất trong mảng
int f1(int *&p, int n){
    int vt = 0, *nn = &p[0];
    for	(int i = 1; i < n; i++)
        if (p[i] < *nn) {
            nn = &p[i];
            vt = i;
        }
    return vt;
}

// Xuất ra dãy đảo ngược
void g1(int *&p, int n){
    int a[n], i = 0, j = n -1, t;
    for	(int i = 0; i < n; i++)
        a[i] = *&p[i];
    cout << "Day dao nguoc cua mang: ";
    while (i<j) {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }
    for	(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n\n";
}

int main(){
    int	*a, n, x;
    cout << "Nhap so phan tu n cua mang: ";
    cin >> n;
    nhap(a, n);
    xuat(a, n);
    cout << "Tong cac phan tu trong mang: " << b1(a, n) << "\n\n";
    c1(a, n);
    cout << "Nhap phan tu x can dem: ";
    cin >> x;
    cout << "So lan phan tu x xuat hien trong mang: " <<  d1(a, n, x) << "\n\n";
    e1(a, n);
    cout << "Vi tri phan tu nho nhat trong mang: " << f1(a, n) << "\n\n";
    g1(a, n);
    return 0;
}
