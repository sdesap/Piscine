#include <unistd.h>

void ft_putnbr_recursive(int nb)
{
    // Caso base: cuando el número es 0, simplemente regresamos
    if (nb == 0) 
	{
        return;
    }

    // Llamada recursiva para imprimir los dígitos en orden inverso
    ft_putnbr_recursive(nb / 10);

    // Convertir el dígito a un carácter y escribirlo
    char digit = '0' + nb % 10;
    write(1, &digit, 1);
}

void ft_putnbr(int nb) {
    // Manejo del caso especial de 0
    if (nb == 0) 
	{
        write(1, "0\n", 2);
    } else 
	{
        ft_putnbr_recursive(nb);
        write(1, "\n", 1);
    }
}

int main() 
{
 // Puedes cambiar este valor por el número que desees
    ft_putnbr(42);
    return 0;
}

