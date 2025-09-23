using System;

class Program
{
    static void Main()
    {
        Console.Write("Введіть перше число: ");
        int a = int.Parse(Console.ReadLine());

        Console.Write("Введіть друге число: ");
        int b = int.Parse(Console.ReadLine());

        if (a != b)
        {
            int temp = a;
            a = b;
            b = temp;
            Console.WriteLine("Після перестановки: a = " + a + ", b = " + b);
        }
        else
        {
            Console.WriteLine("Числа однакові, переставляти не потрібно: a = " + a + ", b = " + b);
        }
    }
}