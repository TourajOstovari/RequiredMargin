#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Position_Size = 0.1f;
    int Leverage = 100;
    int ContractSize = 100000;
    float MarketPrice = 0.00f;
    printf("Enter >> 1. Position Size (Ex: 5x 10x 15x 20x ... bigger) 2. Leverage (Default = 100) 3. Contract Size (1 Lot = 100000) 4. Market Price (Give expensive than usual - speared)!\n");
    scanf("%f.2",&Position_Size);
    scanf("%i",&Leverage);
    scanf("%i",&ContractSize);
    scanf("%f",&MarketPrice);
    float Margin1 = Position_Size / (Leverage - 1);
    float Margin2 = (Position_Size * ContractSize * MarketPrice) / Leverage;
    printf("Margin1 : %f | Margin2 : %f | Average: %f",Margin1,Margin2,(Margin1 + Margin2)/2);
    return 0;
}
