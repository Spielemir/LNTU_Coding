using System;
 
class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
 
        Console.Write("Введіть рік: ");
        int year = int.Parse(Console.ReadLine());
 
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            Console.WriteLine("Рік високосний");
        else
            Console.WriteLine("Рік не високосний");
    }
}