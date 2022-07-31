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
            int[] ints = new int[20000001];
            int N = int.Parse(Console.ReadLine());
            string[] input = Console.ReadLine().Split(' ');

            int M = int.Parse(Console.ReadLine());
            string[] input2 = Console.ReadLine().Split(' ');
            int nIdx = 10000000;
            for (int i = 0; i < input.Length; i++)
            {
                ints[nIdx + int.Parse(input[i])]++;
            }
            for (int i = 0; i < input2.Length; i++)
            {
                sb.Append(ints[nIdx + int.Parse(input2[i])] + " ");
            }
            Console.WriteLine(sb);
        }
    }
}
