#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char to,
	char aux)
{
	if (n == 0) {
		return;
	}
	towerOfHanoi(n - 1, from, aux, to);
	cout << "Move ring " << n << " from rod " << from
		<< " to rod " << to << endl;
	towerOfHanoi(n - 1, aux, to, from);
}


int main()
{
	int N;
	cin >> N;

	
	towerOfHanoi(N, 'A', 'C', 'B');
	return 0;
}

