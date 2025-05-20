#include "muvelet.h"

double szamol(double a, double b, char muvelet) {
    switch (muvelet) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return (b != 0) ? a / b : 0; 
    default: return 0;
    }
}
