#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	unsigned long long l1, l2;
	register unsigned long long ll1, ll2;
	while (true)
	{
		printf(">>> ");
		scanf_s("%lld", &l1);
		l2 = l1 * l1;
		printf("if a<b<%lld\n", l1);
		for (ll1 = 2; ll1 < l1 / 1.4; ll1 += 2)
		{
			ll2 = sqrt(l2 - ll1 * ll1);
			if (ll2 * ll2 == l2 - ll1 * ll1)
			{
				printf("    %lld %lld %lld\n", ll1, ll2, l1);
			}
		}
		printf("\nif a<%lld<c\n", l1);
		for (ll1 = 1; ll1 < l1; ll1++)
		{
			ll2 = sqrt(l2 + ll1 * ll1);
			if (ll2 * ll2 == l2 + ll1 * ll1)
			{
				printf("    %lld %lld %lld\n", ll1, l1, ll2);
			}
		}
		printf("\nif %lld<b<c\n", l1);
		for (ll1 = l1 + 1; ll1 < l2/2; ll1++)
		{
			ll2 = sqrt(ll1 * ll1 + l2);
			if (ll2 * ll2 == ll1 * ll1 + l2)
			{
				printf("    %lld %lld %lld\n", l1, ll1, ll2);
			}
		}
		printf("\n");
	}
}