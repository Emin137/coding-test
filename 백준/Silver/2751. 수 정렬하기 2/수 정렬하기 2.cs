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
            StringBuilder sb = new StringBuilder();
            int N = int.Parse(Console.ReadLine());
            string[] input = new string[N];
            for (int i = 0; i < N; i++)
            {
                input[i] = Console.ReadLine();
            }
            int[] ints = Array.ConvertAll<string, int>(input, int.Parse);
            Array.Sort(ints);
            for (int i = 0; i < N; i++)
            {
                sb.AppendLine(ints[i].ToString());
            }
            Console.WriteLine(sb);
        }
    }
}