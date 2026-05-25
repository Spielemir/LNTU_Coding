using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.InputEncoding  = System.Text.Encoding.UTF8;

        Console.Write("Введіть ціле число: ");
        int num = int.Parse(Console.ReadLine());
        Console.WriteLine("Квадрат числа: " + (num * num));
    }
}