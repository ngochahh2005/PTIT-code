#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct Point {
    double x, y;
};

double distance(Point a, Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

void input(Point &a) {
    cin >> a.x >> a.y;
} 

int main(){
    struct Point A, B;
    int t;
    cin >> t;
    while (t--){
        input(A);
        input(B);
        cout << fixed << setprecision(4) << distance(A,B) << "\n";
    }
    return 0;
}