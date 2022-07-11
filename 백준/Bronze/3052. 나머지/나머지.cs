using System;
using System.Linq;
using System.Collections.Generic;


namespace Program
{
    class Program
    {
        static void Main()
        {
            string[] input = new string[10];
            int[] ints = new int[10];
            int count = 1;
            int num;
            for (int i = 0; i < 10; i++)
            {
                input[i] = Console.ReadLine();
                ints[i] = int.Parse(input[i]);
                ints[i] %= 42;
            }
            int[] output = ints.Distinct().ToArray();
            Console.WriteLine(output.Length);
            
        }
    }
}
