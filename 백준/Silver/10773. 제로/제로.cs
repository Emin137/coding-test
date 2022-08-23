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
            Stack<int> stack = new Stack<int>();
            int K = int.Parse(Console.ReadLine());
            for (int i = 0; i < K; i++)
            {
                int input = int.Parse(Console.ReadLine());
                if(input != 0)
                    stack.Push(input);
                else
                    stack.Pop();
            }
            if (stack.Count != 0)
            {
                int max = 0;
                foreach (var item in stack)
                {
                    max += item;
                }
                Console.WriteLine(max);
            }
            else
                Console.WriteLine(0);
        }
    }

}