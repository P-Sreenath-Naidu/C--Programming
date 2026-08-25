#include <stdio.h>
int main()
{
    int op, op2, qty;
    int total = 0;
    int price;

main_menu:

    printf("\n..................................\n");
    printf("       BREAKFAST HOTEL BILLING\n");
    printf("....................................\n");
    printf("1) Breakfast Menu\n");
    printf("2) Tea & Coffee\n");
    printf("3) Payment\n");
    printf("4) Exit\n");
    printf("....................................\n");

    printf("Enter the option: ");
    scanf("%d", &op);

    switch(op)
    {
        case 1:

        breakfast_menu:

            printf("\n----------- BREAKFAST MENU -----------\n");
            printf("1) Idly   : Rs.40\n");
            printf("2) Dosa   : Rs.45\n");
            printf("3) Puri   : Rs.50\n");
            printf("4) Upma   : Rs.35\n");
            printf("5) Pongal : Rs.30\n");
            printf("6) Back\n");
            printf("--------------------------------------\n");

            printf("Enter the sub option: ");
            scanf("%d", &op2);

            switch(op2)
            {
                case 1:
                    price = 40;

                    printf("Enter the quantity: ");
                    scanf("%d", &qty);

                    total = total + (price * qty);

                    printf("Total price = %d\n", total);
                    goto main_menu;


                case 2:
                    price = 45;

                    printf("Enter the quantity: ");
                    scanf("%d", &qty);

                    total = total + (price * qty);

                    printf("Total price = %d\n", total);
                    goto main_menu;


                case 3:
                    price = 50;

                    printf("Enter the quantity: ");
                    scanf("%d", &qty);

                    total = total + (price * qty);

                    printf("Total price = %d\n", total);
                    goto main_menu;


                case 4:
                    price = 35;

                    printf("Enter the quantity: ");
                    scanf("%d", &qty);

                    total = total + (price * qty);

                    printf("Total price = %d\n", total);
                    goto main_menu;


                case 5:
                    price = 30;

                    printf("Enter the quantity: ");
                    scanf("%d", &qty);

                    total = total + (price * qty);

                    printf("Total price = %d\n", total);
                    goto main_menu;


                case 6:
                    goto main_menu;


                default:
                    printf("\nWrong option\n");
                    goto breakfast_menu;
            }

            break;

        case 2:

        tea_menu:

            printf("\n----------- TEA & COFFEE -----------\n");
            printf("1) Tea    : Rs.20\n");
            printf("2) Coffee : Rs.25\n");
            printf("3) Milk   : Rs.30\n");
            printf("4) Back\n");
            printf("------------------------------------\n");

            printf("Enter the sub option: ");
            scanf("%d", &op2);

            switch(op2)
            {
                case 1:
                    price = 20;

                    printf("Enter the quantity: ");
                    scanf("%d", &qty);

                    total = total + (price * qty);

                    printf("Total price = %d\n", total);
                    goto main_menu;

                case 2:
                    price = 25;

                    printf("Enter the quantity: ");
                    scanf("%d", &qty);

                    total = total + (price * qty);

                    printf("Total price = %d\n", total);
                    goto main_menu;

                case 3:
                    
		    price = 30;
                    printf("Enter the quantity: ");
                    scanf("%d", &qty);

                    total = total + (price * qty);

                    printf("Total price = %d\n", total);
                    goto main_menu;

                case 4:
                    goto main_menu;


                default:
                    printf("\nWrong option\n");
                    goto tea_menu;
            }
            break;

        case 3:

        payment_menu:

            printf("\n------------- PAYMENT -------------\n");
            printf("1) Payment by Cash\n");
            printf("2) Payment by UPI\n");
            printf("3) Payment by Card\n");
            printf("4) Back\n");
            printf("-----------------------------------\n");

            printf("Enter the sub option: ");
            scanf("%d", &op2);

            switch(op2)
            {
                case 1:

                    printf("\nPayment done by Cash\n");
                    printf("Final Bill = %d\n", total);
                    printf("Visit again, thanks!\n");

                    total = 0;

                    goto main_menu;
                case 2:

                    printf("\nPayment done by UPI\n");
                    printf("Final Bill = %d\n", total);
                    printf("Visit again, thanks!\n");

                    total = 0;

                    goto main_menu;

                case 3:

                    printf("\nPayment done by Card\n");
                    printf("Final Bill = %d\n", total);
                    printf("Visit again, thanks!\n");

                    total = 0;

                    goto main_menu;

                case 4:
                    goto main_menu;

                default:
                    printf("\nWrong option\n");
                    goto payment_menu;
            }
            break;
        case 4:
	    if(total!=0)
	    {
		    printf("\nPayment is not Done ! \n");
		    printf("\n");
		    goto payment_menu;
	    }
	    printf("\nExit\n");
	    printf("Bye Bye\n");
	    return 0;

        default:

            printf("\nWrong option\n");
            goto main_menu;
    }
    return 0;
}
