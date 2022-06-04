#include <stdio.h>
int main(){
    int n;
    printf("Enter number between 1-5: ");
    scanf("%d",&n);
    switch(n)
    {
        case(1):printf("Food iteam - Pizza\n");
        printf("Price - Rs 239");
        
        break;
        case(2):
        printf("Food iteam - Burger\n");
        printf("Price - Rs 129");
        break;
        case(3):
        printf("Food iteam - Pasta\n");
        printf("Price - Rs 179");
        break;
        case(4):
        printf("Food iteam - French Fries\n");
        printf("Price - Rs 99");
        break;
        case(5):
        printf("Food iteam - Sandwich\n");
        printf("Price - Rs 149");
        break;
        default: printf("You enter option other than 1-5");
    }
    return 0;
}
