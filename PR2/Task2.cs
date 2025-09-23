using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.InputEncoding  = System.Text.Encoding.UTF8;

        Console.Write("Введіть ваше ім’я: ");
        string name = Console.ReadLine();
        Console.WriteLine("Ваше ім’я: " + name);
    }
}