#include <stdio.h>
#include <string.h>

int main ()
{
    long Len, N, I;
    char A [10000];

    while (gets (A)) {

        Len = strlen (A);
        N = 0;

        for (I = Len - 1; I >= 0; I--) {

            if (A [I] > 'o' && A [I] < 'z'+1)
                N++;

            else if (A [I] == 'C' || A [I] == 'D' || A [I] == 'E' || A [I] == 'I') {
                if (N >= 2)
                    N--;
                else {
                    N = 0;
                    break;
                }
            }

            else if (A [I] == 'N' ) {
                if (N < 1) {
                    N = 0;
                    break;
                }
            }
        }

        if (N == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
