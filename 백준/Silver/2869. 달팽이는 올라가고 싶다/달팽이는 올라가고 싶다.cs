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
            string[] input = Console.ReadLine().Split();
            int A = int.Parse(input[0]); // 낮에 올라가는 높이
            int B = int.Parse(input[1]); // 밤에 미끌어지는 높이
            int V = int.Parse(input[2]); // 막대의 높이
            int day = (V - B - 1) / (A - B) + 1;
            Console.WriteLine(day);

        }
    }

}