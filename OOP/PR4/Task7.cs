using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        Console.Write("Введіть число: ");
        int num = int.Parse(Console.ReadLine());
        int sum = 0;

        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }

        Console.WriteLine("Сума цифр = " + sum);
    }
}