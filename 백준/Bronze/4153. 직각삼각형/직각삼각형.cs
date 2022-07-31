using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Program
{
    class Program
    {
        static void Main()
        {
           while(true)
            {
                string input = Console.ReadLine();
                if (input == "0 0 0")
                    break;
                string[] split = input.Split(' ');
                int a = int.Parse(split[0]);
                int b = int.Parse(split[1]);
                int c = int.Parse(split[2]);
                int[] ints = new int[3];
                ints = Array.ConvertAll<string, int>(split, int.Parse);
                Array.Sort(ints);
                if (Math.Pow(ints[2],2) == Math.Pow(ints[0],2) + Math.Pow(ints[1],2))
                    Console.WriteLine("right");
                else
                    Console.WriteLine("wrong");
            }
        }
    }
}
