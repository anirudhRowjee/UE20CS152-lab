
struct Complex
{
    float re;
    float im;
};

typedef struct Complex complex_num;

void display_complex(complex_num number);
void load_complex(complex_num* number);
complex_num add(complex_num c1, complex_num c2);
complex_num subtract(complex_num c1, complex_num c2);
