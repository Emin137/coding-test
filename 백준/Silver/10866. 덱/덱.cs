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
            Queue<int> ints = new Queue<int>();
            for (int i = 0; i < N; i++)
            {
                string[] input = Console.ReadLine().Split();
                switch(input[0])
                {
                    case "push_front":
                        ints.Enqueue(int.Parse(input[1]));
                        for (int j = 0; j < ints.Count-1; j++)
                        {
                            ints.Enqueue(ints.Dequeue());
                        }
                        break;

                    case "push_back":
                        ints.Enqueue(int.Parse(input[1]));
                        break;

                    case "pop_front":
                        if (ints.Count == 0)
                            sb.AppendLine("-1");
                        else
                            sb.AppendLine(ints.Dequeue().ToString());
                        break;

                    case "pop_back":
                        if (ints.Count == 0)
                            sb.AppendLine("-1");
                        else
                        {
                            for (int j = 0; j < ints.Count - 1; j++)
                            {
                                ints.Enqueue(ints.Dequeue());
                            }
                            sb.AppendLine(ints.Dequeue().ToString());
                        }
                        break;
                    case "size":
                        sb.AppendLine(ints.Count.ToString());
                        break;
                    case "empty":
                        if (ints.Count == 0)
                            sb.AppendLine("1");
                        else
                            sb.AppendLine("0");
                        break;
                    case "front":
                        if (ints.Count == 0)
                            sb.AppendLine("-1");
                        else
                            sb.AppendLine(ints.First().ToString());
                        break;
                    case "back":
                        if (ints.Count == 0)
                            sb.AppendLine("-1");
                        else
                            sb.AppendLine(ints.Last().ToString());
                        break;
                }
            }
            Console.WriteLine(sb);
        }
    }
}
