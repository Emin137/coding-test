using System;
using System.Linq;
using System.Collections.Generic;


namespace Program
{
    class Program
    {
        static void Main()
        {
            int length = int.Parse(Console.ReadLine());

            string[] input = new string[length];
            for (int i = 0; i < length; i++)
            {
                input[i] = Console.ReadLine();
            }

            input = input.Distinct().ToArray();
            input = input.OrderBy(x => x.Length).ThenBy(x=>x).ToArray();

            for (int i = 0; i < input.Length; i++)
            {
                Console.WriteLine(input[i]);
            }

        }
    }
}
