
#include <stdio.h>

int main()
 {
    float totalAmount, discount, finalAmount;

    printf("Enter the total shopping amount: ");
    scanf("%f", &totalAmount);

    if (totalAmount > 5000) {
        discount = totalAmount * 0.20;
    } else if (totalAmount >= 3000 && totalAmount <= 5000) {
        discount = totalAmount * 0.10; 
    } else {
        discount = 0; 
    }


    finalAmount = totalAmount - discount;
    
    printf("Total Amount: %.2f\n", totalAmount);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount: %.2f\n", finalAmount);

    return 0;
}
