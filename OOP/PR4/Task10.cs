using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        Console.Write("Введіть число: ");
        int n = int.Parse(Console.ReadLine());
        bool clearN = true;

        if (n <= 1) clearN = false;
        else
        {
            for (int i = 2; i <= Math.Sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    clearN = false;
                    break;
                }
            }
        }

        if (clearN)
            Console.WriteLine("Число просте");
        else
            Console.WriteLine("Число не просте");
    }
}