// add 2 complex number in c program...

#include <stdio.h>

struct complex_number {
    double real;
    double img;
};

void print_complex(struct complex_number c) {
    printf("%0.1lf + %0.1lfi \n", c.real, c.real);
}

struct complex_number add_complex(struct complex_number a, struct complex_number b) {
    struct complex_number ans;
    ans.real = a.real + b.real;
    ans.img = a.img + b.img;
    return ans;
};

int main() {

struct complex_number c1 = {5.9, 3.1};
struct complex_number c2 = {-2.9, 5.1};
print_complex(c1);

struct complex_number result = add_complex(c1, c2);
    printf("%0.1lfi  %0.1lfi", result.real, result.img);

return 0;
}
