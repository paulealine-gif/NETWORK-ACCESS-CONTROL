#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int id, training, active;

    printf("Is your Employee ID valid? (1=valid, 0=invalid): ");
    scanf("%d", &id);

    printf("\nIs your security training completed? (1=complete, 0=Not completed): ");
    scanf("%d", &training);

    printf("\nIs your account active? (1=active, 0=Not active): ");
    scanf("%d", &active);

    if (id == 1) {
        if (training == 1) {
            if (active == 1) {
                printf("Access granted");
            } else {
                printf("Access rejected: Account inactive");
            }
        } else {
            printf("Access rejected: Training required");
        }
    } else {
        printf("Access rejected: Invalid Employee ID");
    }

	
	return 0;
}
