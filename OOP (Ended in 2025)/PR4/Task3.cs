using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        int product = 1;
        for (int i = 1; i <= 5; i++)
        {
            product *= i;
        }

        Console.WriteLine("Добуток чисел від 1 до 5 = " + product);
    }
}