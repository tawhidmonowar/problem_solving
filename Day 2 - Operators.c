#include <stdio.h>

float calculateCost(float a, float b,float c)
{
    float tip,tax,total;

    tip = (a/100)*b;
    tax = (c/100)*a;
    total = tip+tax+a;

    return total;
}

int main()
{
    float mealCost, tipPercent,taxPercent,totalCostFloat,result;
    int totalCostInt;
    scanf("%f%f%f",&mealCost,&tipPercent,&taxPercent);
    totalCostFloat = calculateCost(mealCost,tipPercent,taxPercent);
    totalCostInt = totalCostFloat;

    result=totalCostFloat-totalCostInt;

    if(result>=0.5)
    {
        printf("%d",totalCostInt+1);
    }else
    {
        printf("%d",totalCostInt);
    }

    return 0;
}