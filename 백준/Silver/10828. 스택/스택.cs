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
            Stack<int> stack = new Stack<int>();
            for (int i = 0; i < N; i++)
            {
                string[] input = Console.ReadLine().Split();
                switch (input[0])
                {
                    case "push":
                        stack.Push(int.Parse(input[1]));
                        break;
                    case "pop":
                        if (stack.Count == 0)
                            sb.AppendLine("-1");
                        else
                            sb.AppendLine(stack.Pop().ToString());
                        break;
                    case "size":
                        sb.AppendLine(stack.Count.ToString());
                        break;
                    case "empty":
                        if (stack.Count == 0)
                            sb.AppendLine("1");
                        else
                            sb.AppendLine("0");
                        break;
                    case "top":
                        if (stack.Count == 0)
                            sb.AppendLine("-1");
                        else
                            sb.AppendLine(stack.Peek().ToString());
                        break;
                }
            }
            Console.WriteLine(sb);
        }
    }
}
