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
            List<(int, int)> list = new List<(int, int)>();
            for (int i = 0; i < N; i++)
            {
                string[] input = Console.ReadLine().Split();
                list.Add((int.Parse(input[0]), int.Parse(input[1])));
            }
            var sortList = list.OrderBy(x => x.Item1).ThenBy(x=>x.Item2).ToList();
            for (int i = 0; i < N; i++)
            {
                sb.AppendLine($"{sortList[i].Item1} {sortList[i].Item2}");
            }
            Console.WriteLine(sb);
        }
    }
}
