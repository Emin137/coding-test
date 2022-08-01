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
            Queue<int> queue = new Queue<int>();
            for (int i = 0; i < N; i++)
            {
                string[] input = Console.ReadLine().Split();
                switch (input[0])
                {
                    case "push":
                        queue.Enqueue(int.Parse(input[1]));
                        break;
                    case "pop":
                        if (queue.Count == 0)
                            sb.AppendLine("-1");
                        else
                            sb.AppendLine(queue.Dequeue().ToString());
                        break;
                    case "size":
                        sb.AppendLine(queue.Count.ToString());
                        break;
                    case "empty":
                        if (queue.Count == 0)
                            sb.AppendLine("1");
                        else
                            sb.AppendLine("0");
                        break;
                    case "front":
                        if (queue.Count == 0)
                            sb.AppendLine("-1");
                        else
                            sb.AppendLine(queue.First().ToString());
                        break;
                    case "back":
                        if (queue.Count == 0)
                            sb.AppendLine("-1");
                        else
                            sb.AppendLine(queue.Last().ToString());
                        break;
                }
            }
            Console.WriteLine(sb);
        }
    }
}
