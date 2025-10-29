using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Введіть номер місяця (1–12):");

        int month = Convert.ToInt32(Console.ReadLine());

        if (month == 12 || month == 1 || month == 2)
        {
            Console.WriteLine("зима");
        }
        else if (month == 3 || month == 4 || month == 5)
        {
            Console.WriteLine("весна");
        }
        else if (month == 6 || month == 7 || month == 8)
        {
            Console.WriteLine("літо");
        }
        else if (month == 9 || month == 10 || month == 11)
        {
            Console.WriteLine("осінь");
        }
        else
        {
            Console.WriteLine("Немає такого місяця");
        }
    }
}