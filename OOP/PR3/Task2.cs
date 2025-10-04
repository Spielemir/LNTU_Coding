using System;
 
class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
 
        Console.Write("Введіть перше число: ");
        int a = int.Parse(Console.ReadLine());
 
        Console.Write("Введіть друге число: ");
        int b = int.Parse(Console.ReadLine());
 
        if (a < b)
            Console.WriteLine("Менше число: " + a);
        else if (b < a)
            Console.WriteLine("Менше число: " + b);
        else
            Console.WriteLine("Числа рівні");
    }
}