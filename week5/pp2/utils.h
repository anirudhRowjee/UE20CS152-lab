struct measure
{
    float feet;
    float inches;
};

typedef struct measure measure;

void display_measure(measure number);
void load_measure(measure* number);
measure add(measure c1, measure c2);
