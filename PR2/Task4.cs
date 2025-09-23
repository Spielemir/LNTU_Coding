using System;

class Program
{
    static void Main()
    {
        Console.Write("Введіть кількість метрів: ");
        double meters = double.Parse(Console.ReadLine());

        Console.WriteLine("У сантиметрах: " + (meters * 100));
    }
}