using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        Console.Write("Введіть число: ");
        int num = int.Parse(Console.ReadLine());
        int rev = 0;

        while (num > 0)
        {
            rev = rev * 10 + num % 10;
            num /= 10;
        }

        Console.WriteLine("Перевернуте число: " + rev);
    }
}