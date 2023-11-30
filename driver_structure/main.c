#include"inc/main.h"
#include"inc/gpio.h"

void main_print(void)
{
    printf("printing main.h\n");
}

int main()
{
    
    main_print();
    gpio_print();
    return 0;
}