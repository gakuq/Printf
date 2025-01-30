/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaterna <mmaterna@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 01:05:15 by mmaterna          #+#    #+#             */
/*   Updated: 2025/01/18 05:57:14 by mmaterna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

// Funkcja pomocnicza do wypisywania pojedynczego znaku
int ft_putchar(char c) {
    return write(1, &c, 1);
}

// Funkcja pomocnicza do wypisywania ciągu znaków
int ft_putstr(const char *str) {
    int count = 0;

    if (!str)
        str = "(null)";
    
    while (*str) {
        count += ft_putchar(*str);
        str++;
    }
    return count;
}

// Funkcja pomocnicza do wypisywania liczby szesnastkowej (hexadecimal)
int ft_puthex(unsigned long num) {
    int count = 0;
    char *hex_digits = "0123456789abcdef";

    if (num / 16)
        count += ft_puthex(num / 16);
    
    count += ft_putchar(hex_digits[num % 16]);
    return count;
}

// Wyodrębniona funkcja ft_printptr
int ft_printptr(va_list args, int i)
{
    void *ptr = va_arg(args, void *); // Pobranie wskaźnika z va_list

    if (!ptr) {
        i += ft_putstr("(nil)"); // Obsługa wskaźnika NULL
    } else {
        i += ft_putstr("0x");   // Prefiks dla adresu
        i += ft_puthex((unsigned long)ptr); // Adres w szesnastkowym formacie
    }

    return i;
}
