#include <iostream>

using namespace std;

int main(void)
{
	int IPv4[4];
	cout << "Input quadrants IPv4:\n";
	int i = 0;
	while(i < 4)
	{
		cin >> IPv4[i];
		if((IPv4[i] < 256) && (IPv4[i] > -1)){
			printf("%d number - %d.\n", (i + 1), IPv4[i]);
			i++;
		} else cout << "Input correct number!\n";
	}

	printf("Your IP address -- %d.%d.%d.%d\n", IPv4[0], IPv4[1], IPv4[2], IPv4[3]);

	cin >> i;
	return 0;
}