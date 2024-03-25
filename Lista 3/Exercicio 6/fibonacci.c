#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {

    int primeiro = 0, segundo = 1, proximo;

    if (n == 0)
        return primeiro;
    else if (n == 1)
        return segundo;

    for (int i = 3; i <= n; i++) {
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    return segundo;
}
