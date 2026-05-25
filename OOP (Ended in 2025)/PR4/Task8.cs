using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        Console.Write("Введіть N: ");
        int N = int.Parse(Console.ReadLine());
        int a = 1, b = 1, c;

        Console.Write("1 1 ");
        for (int i = 3; i <= N; i++)
        {
            c = a + b;
            Console.Write(c + " ");
            a = b;
            b = c;
        }
    }
}