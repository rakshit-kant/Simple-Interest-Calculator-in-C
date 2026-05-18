#include <stdio.h>

int main() {
    int chosen_num;
    double principal;
    double rate_of_interest;
    double raw_time;
    double time;
    double interest;
    double amount;

    printf("Choose the Following if you want to proceed: \n");
    printf("1 -> If you want to give the Answer in Days\n");
    printf("2 -> If you want to give the Answer in Months\n");
    printf("3 -> If you want to give the Answer in Years\n");
    printf("Choose Time Format: ");
    scanf(" %d", &chosen_num);
    if (chosen_num == 1) {
        printf("Enter the Principle: ");
        scanf(" %lf", &principal);
        printf("Enter the Rate of Interest: (Without %% Sign): ");
        scanf(" %lf", &rate_of_interest);
        printf("Enter the Time (Days): ");
        scanf(" %lf", &raw_time);
        time = raw_time / 365;
        interest = (principal * rate_of_interest * time) / 100;
        amount = principal + interest;
        printf("Final Amount (along with Interest): %lf\n", amount);
        printf("Interest: %lf\n", interest);
    } else if (chosen_num == 2) {
        printf("Enter the Principle: ");
        scanf(" %lf", &principal);
        printf("Enter the Rate of Interest: (Without %% Sign): ");
        scanf(" %lf", &rate_of_interest);
        printf("Enter the Time (Months): ");
        scanf(" %lf", &raw_time);
        time = raw_time / 12;
        interest = (principal * rate_of_interest * time) / 100;
        amount = principal + interest;
        printf("Final Amount (along with Interest): %lf\n", amount);
        printf("Interest: %lf\n", interest);
    } else if (chosen_num == 3) {
        printf("Enter the Principle: ");
        scanf(" %lf", &principal);
        printf("Enter the Rate of Interest: (Without %% Sign): ");
        scanf(" %lf", &rate_of_interest);
        printf("Enter the Time (Years): ");
        scanf(" %lf", &raw_time);
        time = raw_time;
        interest = (principal * rate_of_interest * time) / 100;
        amount = principal + interest;
        printf("Final Amount (along with Interest): %lf\n", amount);
        printf("Interest: %lf\n", interest);

    } else {
        printf("Invalid Number Chosen!");
    }
    return 0;
}
