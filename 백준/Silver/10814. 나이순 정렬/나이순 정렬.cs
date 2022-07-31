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
            int N = int.Parse(Console.ReadLine());
            List<(int, string)> list = new List<(int, string)>();
            for (int i = 0; i < N; i++)
            {
                string[] input = Console.ReadLine().Split();
                list.Add((int.Parse(input[0]), input[1]));
            }

            var sortList = list.OrderBy(x => x.Item1).ToList();

            foreach (var item in sortList)
            {
                Console.WriteLine($"{item.Item1} {item.Item2}");
            }
            
        }
    }
}
