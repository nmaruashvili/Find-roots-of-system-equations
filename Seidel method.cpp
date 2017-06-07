
#include <iostream>
using namespace std;
double D[10][10], a, b, c, x1, x2, x3;
int i, j, N;
main() {
	cout << "sheikvanet gantolebata sistemis koepicientebi:\nsheikvanet miakhlovebebis raodenoba:\n";
	cin >> N;
	for (i = 1; i <= 3; i ++) {
		for (j = 1; j <= 4; j ++) {
			cin >> D[i][j];
		}
	}i = 0;
	a = 0; b = 0; c = 0;
	while(i < N) {
		x1 = a - (D[1][1] * a + D[1][2] * b + D[1][3] * c - D[1][4]);
	
		x2 = b - (D[2][1] * x1 + D[2][2] * b + D[2][3] * c - D[2][4]);
	
		x3 = c - (x1 + D[3][2] * x2 + D[3][3] * c - D[3][4]);
	
		a = x1; b = x2; c = x3; ++i;
	}
	cout << a << endl << b << endl << c;
}
