#include <stdio.h>

/*
=============================
STRUCTURE
=============================
*/

typedef struct {
    double principal;
    double interest_rate;
    double time_years;
    double interest;
    double final_amount;
} SimpleInterestCalculator;

/*
===========================================
FUNCTION DECLARATIONS
===========================================
*/

/*
Convert user-entered time into years
*/
double convert_to_years(int time_format, double unprocessed_time);

/*
Collect all user input
*/
void get_user_input(SimpleInterestCalculator *calc);

/*
Calculate Interest
*/
void calculate_interest(SimpleInterestCalculator *calc);

/*
Display Final Result
*/
void display_result(const SimpleInterestCalculator *calc);

/*
Clears Leftover Input
*/
void clear_input_buffer(void);

int main(void) {
    SimpleInterestCalculator calc;

    get_user_input(&calc);

    calculate_interest(&calc);

    display_result(&calc);

    return 0;
}

void get_user_input(SimpleInterestCalculator *calc) {

    int time_format;
    double unprocessed_time;
    printf("Enter the Principal: ");
    scanf(" %lf", &calc->principal);
    printf("\nEnter the Rate of Interest: ");
    scanf(" %lf", &calc->interest_rate);
    printf("Enter the Time Format (1 -> Days or 2 -> Months or 3 -> Years): ");
    scanf(" %d", &time_format);
    printf("Enter the Time: ");
    scanf("%lf", &unprocessed_time);

    calc->time_years = convert_to_years(time_format, unprocessed_time);
}

double convert_to_years(int time_format, double unprocessed_time) {
    switch (time_format) {
    case 1:
        return unprocessed_time / 365.0;
    case 2:
        return unprocessed_time / 12.0;
    case 3:
        return unprocessed_time;
    default:
        printf("Wrong Input! Defaulting to Years as Format");
        return unprocessed_time;
    }
}

void calculate_interest(SimpleInterestCalculator *calc) {
    calc->interest =
        (calc->principal * calc->interest_rate * calc->time_years) / 100.0;
    calc->final_amount = calc->principal + calc->interest;
}

void display_result(const SimpleInterestCalculator *calc) {
    printf("Interest = %.2lf\n", calc->interest);
    printf("Final Amount = %.2lf", calc->final_amount);
}
