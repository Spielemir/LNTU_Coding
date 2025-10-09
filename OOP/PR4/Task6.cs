using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        Console.Write("Введіть N: ");
        int N = int.Parse(Console.ReadLine());
        long fac = 1;

        for (int i = 1; i <= N; i++)
        {
            fac *= i;
        }

        Console.WriteLine($"{N}! = {fac}");
    }
}